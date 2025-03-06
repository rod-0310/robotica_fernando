import rclpy  # Importar la librería de ROS
from rclpy.node import Node  # Importar la clase Node
from std_msgs.msg import Int8  # Cambiado a Int8 para valores entre -128 y 127
import random

class Nodo1(Node):  # Crear la clase Nodo1 que hereda de Node
    def __init__(self):  # Constructor
        super().__init__('nodo1')  # Llamar al constructor de la clase padre
        self.publisher_ = self.create_publisher(Int8, 'numbers', 10)  # Publicador con Int8
        timer_period = 1.0  # Periodo del temporizador en segundos
        self.timer = self.create_timer(timer_period, self.timer_callback)  # Temporizador

    def timer_callback(self):  # Función que se llama cada vez que el temporizador se activa
        msg = Int8()  # Crear un mensaje de tipo Int8 (-128 a 127)
        msg.data = random.randint(-128, 127)  # ✅ Generar número aleatorio en el rango correcto
        self.publisher_.publish(msg)  # Publicar el mensaje
        self.get_logger().info(f'Publicando: {msg.data}')  # Imprimir en pantalla el mensaje publicado

def main(args=None):  # Función principal
    rclpy.init(args=args)  # Inicializar ROS
    nodo1 = Nodo1()  # Crear un objeto de la clase Nodo1
    rclpy.spin(nodo1)  # Mantener el programa en ejecución
    nodo1.destroy_node()  # Destruir el nodo
    rclpy.shutdown()  # Apagar ROS

if __name__ == '__main__':  # Si el script es el principal
    main()  # Llamar a la función principal
