import rclpy
from rclpy.node import Node
from examen_interface.msg import Num  
class filtered_sensor(Node):
    def __init__(self):
        super().__init__('filtered_sensor')
        self.subscription = self.create_subscription(Num, 'sensor_prom', self.callback, 10)

    def callback(self, msg):
        self.get_logger().info(f'Recibido -> {msg.nom}: {msg.num}')

def main():
    rclpy.init()
    nodo = filtered_sensor()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
