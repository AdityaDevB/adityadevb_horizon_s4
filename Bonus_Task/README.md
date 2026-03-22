ROS2 Rover Command System (Bonus Task)


This project extends the basic ROS2 publisher-subscriber setup by adding a decision-making node. The system simulates how a rover decides its movement based on distance data.

The system consists of three nodes working together:

 A sensor node that publishes distance values
 A decision node that processes the data
 A command listener node that displays the final action



1. The **sensor node** publishes random distance values to the `/distance` topic.
2. The **decision node** subscribes to `/distance`, checks the value, and decides what the rover should do.
3. Based on the decision, it publishes a command to `/rover_command`.
4. The **command listener node** receives the command and prints it.



Decision Logic

* If distance < 30 → **STOP**
* If distance ≥ 30 → **MOVE_FORWARD**



Nodes

1. Sensor Node

Publishes random distance values every second.

2. Decision Node

Subscribes to `/distance`, applies decision logic, and publishes commands to `/rover_command`.

3. Command Listener Node

Subscribes to `/rover_command` and prints the received command.



Topics Used

* `/distance` → Int32
* `/rover_command` → String



How to Run

Build the workspace:


cd ~/ros2_ws
colcon build --symlink-install



Open three terminals and run:

Terminal 1


ros2 run my_robot_controller distance_publisher


Terminal 2


ros2 run my_robot_controller decision_node


Terminal 3


ros2 run my_robot_controller command_listener




Example Output

**Decision Node:**

```
Distance: 22 → Command: STOP
Distance: 55 → Command: MOVE_FORWARD
```

**Command Listener:**

```
Received command: STOP
Received command: MOVE_FORWARD
```

---

Concept Diagram

```
Sensor Node → /distance → Decision Node → /rover_command → Command Listener
```


