import rclpy
from rclpy.node import Node
from recursos.srv import Coordenadas  # Importar la interfaz personalizada

class cliente(Node):
    def __init__(self):
        super().__init__('Client')#Nombre del nodo
        self.cli = self.create_client(Coordenadas, 'req')#Nombre del servicio y tipo de mensaje de la interfaz personalizada 

        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('⏳ Esperando al servidor...')

    def enviar_solicitud(self, x1, y1, x2, y2):
        request = Coordenadas.Request()
        request.x1, request.y1 = x1, y1
        request.x2, request.y2 = x2, y2
        future = self.cli.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        return future.result()

def main():
    rclpy.init()
    nodo = cliente()
    x1 = float(input("Ingrese x1: "))
    y1 = float(input("Ingrese y1: "))
    x2 = float(input("Ingrese x2: "))
    y2 = float(input("Ingrese y2: "))

    response = nodo.enviar_solicitud(x1, y1, x2, y2)
    nodo.get_logger().info(f'✅ Punto medio calculado: ({response.xm}, {response.ym})')

    nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
