import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
import numpy as np


class IKNode(Node):

    def __init__(self):
        super().__init__('inverse_kinematics_planar')

        self.subscription = self.create_subscription(
            JointState,
            '/joint_states',
            self.listener_callback,
            10
        )

        # Target en XY
        self.target = np.array([12.0, 5.0])

    def listener_callback(self, msg):

        try:
            # Joints
            q1 = msg.position[0]
            q2 = msg.position[1]
            q3 = msg.position[2]
            q4 = msg.position[3]  # si tienes 4

            # Longitudes
            L1 = 10.0
            L2 = 6.0
            L3 = 4.0
            L4 = 3.0

            # 🔥 CINEMÁTICA DIRECTA (FK)
            x = (L1*np.cos(q1) +
                 L2*np.cos(q1+q2) +
                 L3*np.cos(q1+q2+q3) +
                 L4*np.cos(q1+q2+q3+q4))

            y = (L1*np.sin(q1) +
                 L2*np.sin(q1+q2) +
                 L3*np.sin(q1+q2+q3) +
                 L4*np.sin(q1+q2+q3+q4))

            current_pos = np.array([x, y])

            error = np.linalg.norm(self.target - current_pos)

            self.get_logger().info(f"Current position: {current_pos}")
            self.get_logger().info(f"Target: {self.target}")
            self.get_logger().info(f"Error: {error}")

        except Exception as e:
            self.get_logger().error(f"Error: {str(e)}")