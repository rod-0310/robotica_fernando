import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32  # Para enviar un número flotante
import random  # Para generar valores aleatorios

class sensor_2(Node):
    def __init__(self):
        super().__init__('sensor_2')
        self.publisher_ = self.create_publisher(Float32, 'sensor_2', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        msg = Float32()
        msg.data = round(random.uniform(0.0, 100.0), 1)  # Generar número flotante entre 0 y 100 con 2 decimales
        
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publicado: {msg.data}')

def main():
    rclpy.init()
    nodo = sensor_2()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
