import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32MultiArray  # Para recibir la lista de bits

class SuscriptorBinario(Node):
    def __init__(self):
        super().__init__('suscriptor_binario')
        self.subscription = self.create_subscription(Int32MultiArray, 'binary_topic', self.callback, 10)

        # Diccionario para mapear combinaciones de bits a instrucciones de movimiento
        self.binario_a_texto = {
            (0, 0, 0): "ADELANTE MI:1 MD:1",
            (0, 0, 1): "DERECHA MI:0 MD:1",
            (0, 1, 0): "ALTO MI:0 MD:0",
            (0, 1, 1): "DERECHA MI:1 MD:1",
            (1, 0, 0): "IZQUIERDA MI:1 MD:0",
            (1, 0, 1): "ADELANTE MI:1 MD:1",
            (1, 1, 0): "IZQUIERDA MI:1 MD:0",
            (1, 1, 1): "ALTO MI:0 MD:0"
        }

    def callback(self, msg):
        # Asegurar que el mensaje tiene 3 bits
        if len(msg.data) != 3:
            self.get_logger().error(f'Error: Se esperaban 3 valores binarios, pero se recibieron {len(msg.data)}.')
            return
        
        # Obtener cada bit y formar una tupla
        bit1, bit2, bit3 = msg.data[0], msg.data[1], msg.data[2]
        bits_tuple = (bit1, bit2, bit3)

        # Obtener el mensaje del diccionario
        mensaje = self.binario_a_texto.get(bits_tuple, "Desconocido")

        # Mostrar el resultado
        self.get_logger().info(f'Recibido -> bit1: {bit1}, bit2: {bit2}, bit3: {bit3} | Acción: {mensaje}')

def main():
    rclpy.init()
    nodo = SuscriptorBinario()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
