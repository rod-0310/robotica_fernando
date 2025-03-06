import rclpy  # Importar la librería de ROS
from rclpy.node import Node  # Importar la clase Node
from std_msgs.msg import Int8  # Int8 para permitir valores negativos y positivos

class Nodo2(Node):
    def __init__(self):
        super().__init__('nodo2')

        # Suscriptor al tópico "numbers"
        self.subscription = self.create_subscription(
            Int8, 'numbers', self.listener_callback, 10)
        self.subscription  # Evita que el garbage collector lo elimine
        
        # Publicador en el tópico "sum"
        self.publisher_ = self.create_publisher(Int8, 'sum', 10)
        self.sum = 0  # Inicializar la variable sum en 0
        
        self.get_logger().info("Nodo2 Iniciado - Esperando datos en 'numbers'")

    def listener_callback(self, msg):
        self.get_logger().info(f'Recibiendo: {msg.data}')
        
        # Sumar y asegurarse de que no salga del rango de Int8 (-128 a 127)
        self.sum += msg.data
        
        # Limitar la suma dentro del rango válido de Int8 (-128 a 127)
        if self.sum > 127:
            self.sum = -128 + (self.sum - 128)
        elif self.sum < -128:
            self.sum = 127 - (-129 - self.sum)

        msg_sum = Int8()
        msg_sum.data = self.sum
        self.publisher_.publish(msg_sum)
        
        self.get_logger().info(f'Publicando suma: {msg_sum.data}')

def main(args=None):
    rclpy.init(args=args)
    nodo2 = Nodo2()
    rclpy.spin(nodo2)
    nodo2.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
