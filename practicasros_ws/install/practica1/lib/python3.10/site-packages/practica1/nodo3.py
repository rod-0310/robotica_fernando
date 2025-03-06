import rclpy  # Importar la librería de ROS
from rclpy.node import Node  # Importar la clase Node
from std_msgs.msg import Float32  # Se usa Float32 para permitir decimales
from std_msgs.msg import Int8  # Recibe valores de suma (Int8)

class Nodo3(Node):
    def __init__(self):
        super().__init__('nodo3')

        # Suscriptor al tópico "sum"
        self.subscription = self.create_subscription(
            Int8, 'sum', self.listener_callback, 10)
        self.subscription  # Evita que el garbage collector lo elimine
        self.publisher_ = self.create_publisher(Float32, 'muestra', 10)

        # Variables para calcular el promedio
        self.total_sum = 0  # Suma acumulada
        self.count = 0  # Contador de valores recibidos

        self.get_logger().info("Nodo3 Iniciado - Esperando datos en 'sum'")

    def listener_callback(self, msg):
        self.total_sum += msg.data  # Acumular la suma
        self.count += 1  # Incrementar el conteo

        # Calcular el promedio en tiempo real
        muestra = self.total_sum / self.count

        # Publicar el promedio en el tópico "muestra"
        msg_muestra = Float32()
        msg_muestra.data = muestra
        self.publisher_.publish(msg_muestra)

        # Imprimir la información
        self.get_logger().info(f'Recibido: {msg.data} | Promedio actual: {muestra:.2f}')

def main(args=None):
    rclpy.init(args=args)
    nodo3 = Nodo3()
    rclpy.spin(nodo3)
    nodo3.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
