import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
from radar_simulator.msg import RadarObject
from geometry_msgs.msg import Point
import numpy as np

class RadarEKFTrackerNode(Node):
    def __init__(self):
        super().__init__('radar_ekf_tracker_node')
        
        # Match QoS with publisher
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )
        
        self.subscription = self.create_subscription(
            RadarObject,
            'radar/objects_v2',
            self.listener_callback,
            qos_profile
        )
        self.publisher = self.create_publisher(
            Point,
            'radar/tracks_v2',
            10
        )
        self.track_states = {}
        self.get_logger().info('EKF Tracker started, listening on /radar/objects_v2')

    def listener_callback(self, msg):
        obj_id = msg.object_id
        x = msg.distance * np.cos(np.radians(msg.angle))
        y = msg.distance * np.sin(np.radians(msg.angle))
        vx = msg.velocity * np.cos(np.radians(msg.angle))
        vy = msg.velocity * np.sin(np.radians(msg.angle))
        z_meas = np.array([x, y, vx, vy])
        dt = 0.02
        
        if obj_id not in self.track_states:
            state = z_meas
            cov = np.eye(4) * 1.0
        else:
            state, cov = self.track_states[obj_id]
            F = np.eye(4); F[0,2]=dt; F[1,3]=dt
            Q = np.eye(4) * 0.2
            state = F @ state
            cov = F @ cov @ F.T + Q
            H = np.eye(4)
            R = np.eye(4) * 0.5
            y_k = z_meas - H @ state
            S = H @ cov @ H.T + R
            K = cov @ H.T @ np.linalg.inv(S)
            state = state + K @ y_k
            cov = (np.eye(4) - K @ H) @ cov
            
        self.track_states[obj_id] = (state, cov)
        track_msg = Point()
        track_msg.x = state[0]
        track_msg.y = state[1]
        track_msg.z = state[2]
        self.publisher.publish(track_msg)
        self.get_logger().info(
            f'EKF Track {obj_id}: Pos({state[0]:.2f},{state[1]:.2f}) Vel({state[2]:.2f},{state[3]:.2f})'
        )

def main(args=None):
    rclpy.init(args=args)
    node = RadarEKFTrackerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

