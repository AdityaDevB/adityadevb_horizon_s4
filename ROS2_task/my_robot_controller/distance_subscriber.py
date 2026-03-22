import rclpy 
from rclpy.node import Node
from std_msgs.msg import Int32

class SubscriberDistance(Node):
    def __init__(self):
        super().__init__("distance_subscriber")
        self.subscription = self.create_subscription(
            Int32,"/distance",self.listener_callback,10)
    def listener_callback(self,msg):
        self.get_logger().info("Received Distance : "+ str(msg.data))

def main(args=None):
    rclpy.init(args=args)
    node=SubscriberDistance()
    rclpy.spin(node)
    rclpy.shutdown()
