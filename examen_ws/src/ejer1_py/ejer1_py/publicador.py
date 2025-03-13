import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32MultiArray  # Mensaje estándar para listas de enteros
import random  # Para generar valores aleatorios

class Publicador(Node):
    def __init__(self):
        super().__init__('publicador')
        self.publisher_ = self.create_publisher(Int32MultiArray, 'binary_topic', 10)
        self.timer = self.create_timer(3.0, self.timer_callback)

    def timer_callback(self):
        numero = random.randint(0, 7)  # Número aleatorio entre 0 y 7
        binario = [int(bit) for bit in format(numero, '03b')]  # Convertir a binario (3 bits)
        
        msg = Int32MultiArray()
        msg.data = binario  # Enviar la lista de bits

        self.publisher_.publish(msg)
        self.get_logger().info(f'Publicado: {numero} -> Binario: {binario}')

def main():
    rclpy.init()
    nodo = Publicador()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
