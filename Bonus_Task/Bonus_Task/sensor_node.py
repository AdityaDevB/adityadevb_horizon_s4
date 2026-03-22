#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
import random

class SensorNode(Node):
    def __init__(self):
        super().__init__("sensor_node")
        self.publisher_=self.create_publisher(Int32,"distance",10)
        self.timer = self.create_timer(1.0,self.publish_distance)

    def publish_distance(self):
        msg=Int32()
        msg.data=random.randint(1,100)
        self.publisher_.publish(msg)

        self.get_logger().info("Publishing distance : "+ str(msg.data))

def main(args=None):
    rclpy.init(args=args)
    node=SensorNode()
    rclpy.spin(node)
    rclpy.shutdown()