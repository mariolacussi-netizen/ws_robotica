from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command

def generate_launch_description():

    return LaunchDescription([

        # Publica el robot
        Node(
            package="robot_state_publisher",
            executable="robot_state_publisher",
            parameters=[{
                "robot_description": Command([
                    "cat ", 
                    "/home/mariola/ws_robotica/src/robot_description/urdf/robot_A.urdf"
                ])
            }]
        ),

        # GUI para mover joints
        Node(
            package="joint_state_publisher_gui",
            executable="joint_state_publisher_gui"
        ),

        # RViz
        Node(
            package="rviz2",
            executable="rviz2"
        )
    ])