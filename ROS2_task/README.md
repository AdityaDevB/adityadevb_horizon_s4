
ROS2 Distance Publisher & Subscriber

This project demonstrates a basic communication system in ROS2 using a publisher and a subscriber node. The idea is simple one node generates random distance values, and another node receives and displays those values.

What the Project Does
A publisher node generates random distance values.
A subscriber node listens to those values.
The subscriber prints the received data in the terminal.
The communication happens through a topic named /distance.

Nodes Used
1. Distance Publisher
This node simulates a sensor. It generates a random integer between 1 and 100 every second and publishes it to the /distance topic.

2. Distance Subscriber
This node listens to the /distance topic. Whenever it receives a value, it prints it in the terminal.

Topics and Message Type
Topic Name: /distance
Message Type: Int32 (from std_msgs)


How to Run the Project

First, build the workspace:
cd ~/ros2_ws
colcon build --symlink-install
source install/setup.bash

Then open two terminals.
Terminal 1 (Publisher)
ros2 run my_robot_controller distance_publisher

Terminal 2 (Subscriber)
ros2 run my_robot_controller distance_subscriber
Example Output

Publisher terminal:

Publishing distance: 42
Publishing distance: 17

Subscriber terminal:

Received distance: 42
Received distance: 17
