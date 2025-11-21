#!/usr/bin/env python3
"""
Fixed Radar PointCloud Node with distance filtering and debug logging
This prevents huge outlier coordinates from appearing outside RViz view
"""

import rclpy
from rclpy.node import Node
from radar_simulator.msg import RadarObject
from sensor_msgs.msg import PointCloud2, PointField
import numpy as np
import struct

class RadarPointCloudNode(Node):
    def __init__(self):
        super().__init__('radar_pointcloud')
        self.subscription = self.create_subscription(
            RadarObject,
            'radar/objects_v2',
            self.radar_callback,
            10)
        self.publisher = self.create_publisher(
            PointCloud2,
            'radar/pointcloud',
            10)
        self.points = []
        self.filtered_count = 0
        self.total_count = 0
        
        # Distance filtering thresholds (in meters)
        self.min_distance = 0.5
        self.max_distance = 200.0
        
        self.get_logger().info(f"Radar PointCloud Node started")
        self.get_logger().info(f"Distance filter: {self.min_distance}m to {self.max_distance}m")

    def radar_callback(self, msg):
        self.total_count += 1
        
        # Log incoming radar data
        self.get_logger().info(
            f"Radar input #{self.total_count}: distance={msg.distance:.2f}m, angle={msg.angle:.2f}°"
        )
        
        # Filter by distance (realistic car radar range)
        if msg.distance < self.min_distance or msg.distance > self.max_distance:
            self.filtered_count += 1
            self.get_logger().warn(
                f"  → FILTERED OUT (distance {msg.distance:.2f}m outside valid range)"
            )
            return
        
        # Convert radar polar (distance, angle) to cartesian
        x = msg.distance * np.cos(np.radians(msg.angle))
        y = msg.distance * np.sin(np.radians(msg.angle))
        z = 0.0
        
        self.get_logger().info(f"  → ACCEPTED: cartesian x={x:.4f}, y={y:.4f}, z={z:.4f}")
        
        self.points.append([x, y, z])
        if len(self.points) > 100:  # Keep only recent points
            self.points.pop(0)
        
        self.publish_pointcloud()

    def publish_pointcloud(self):
        fields = [
            PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
            PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
            PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1),
        ]
        
        pcl_data = []
        for pt in self.points:
            pcl_data.append(struct.pack('fff', *pt))
        
        pcl_bytes = b"".join(pcl_data)
        
        pointcloud = PointCloud2()
        pointcloud.header.stamp = self.get_clock().now().to_msg()
        pointcloud.header.frame_id = "base_link"
        pointcloud.height = 1
        pointcloud.width = len(self.points)
        pointcloud.fields = fields
        pointcloud.is_bigendian = False
        pointcloud.point_step = 12
        pointcloud.row_step = pointcloud.point_step * len(self.points)
        pointcloud.data = pcl_bytes
        pointcloud.is_dense = True
        
        self.publisher.publish(pointcloud)
        
        self.get_logger().debug(
            f"Published PointCloud2: {len(self.points)} points | "
            f"Total received: {self.total_count} | Filtered out: {self.filtered_count}"
        )

def main(args=None):
    rclpy.init(args=args)
    node = RadarPointCloudNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
