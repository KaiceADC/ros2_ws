import rclpy
from rclpy.node import Node
from radar_simulator.msg import RadarObject
import serial

class RealRadarPublisherNode(Node):
    def __init__(self):
        super().__init__('real_radar_publisher')
        self.publisher = self.create_publisher(RadarObject, 'radar/objects_v2', 10)
        self.ser = serial.Serial('/dev/ttyACM0', 115200, timeout=1)  # Update to match your Arduino device
        self.timer = self.create_timer(0.02, self.read_and_publish)

    def read_and_publish(self):
        line = self.ser.readline().decode('utf-8').strip()
        try:
            if line:
                obj_id, distance, velocity, angle, rcs = map(float, line.split(','))
                msg = RadarObject()
                msg.object_id = int(obj_id)
                msg.distance = float(distance)
                msg.velocity = float(velocity)
                msg.angle = float(angle)
                msg.rcs = float(rcs)
                self.publisher.publish(msg)
                self.get_logger().info(
                    f"Published: ID={obj_id}, Dist={distance}, Vel={velocity}, Ang={angle}, RCS={rcs}"
                )
        except Exception as e:
            self.get_logger().warn(f"Bad serial line: {line} ({e})")

def main(args=None):
    rclpy.init(args=args)
    node = RealRadarPublisherNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

