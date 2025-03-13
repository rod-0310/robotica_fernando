import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32MultiArray  # Para recibir la lista de bits

class suscritor(Node):
    def __init__(self):
        super().__init__('suscritor')
        self.subscription = self.create_subscription(Int32MultiArray, 'binary_topic', self.callback, 10)

        # Diccionario para mapear combinaciones de bits a su número en palabras
        self.binario_a_texto = {
            (0, 0, 0): "cero",
            (0, 0, 1): "uno",
            (0, 1, 0): "dos",
            (0, 1, 1): "tres",
            (1, 0, 0): "cuatro",
            (1, 0, 1): "cinco",
            (1, 1, 0): "seis",
            (1, 1, 1): "siete"
        }

    def callback(self, msg):
        # Asegurar que el mensaje tiene 3 bits
        if len(msg.data) != 3:
            self.get_logger().error(f'Error: Se esperaban 3 valores binarios, pero se recibieron {len(msg.data)}.')
            return
        
        # Obtener cada bit y formar una tupla
        bit1, bit2, bit3 = msg.data[0], msg.data[1], msg.data[2]
        bits_tuple = (bit1, bit2, bit3)

        # Mostrar los bits recibidos
        self.get_logger().info(f'Recibido -> bit1: {bit1}, bit2: {bit2}, bit3: {bit3}')

        # Obtener el número en texto usando el diccionario
        numero_texto = self.binario_a_texto.get(bits_tuple, "Desconocido")

        # Mostrar el número identificado
        if numero_texto != "Desconocido":
            self.get_logger().info(f'🔢 Número identificado: {numero_texto}')
        else:
            self.get_logger().error('Error en los valores recibidos.')

def main():
    rclpy.init()
    nodo = suscritor()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
