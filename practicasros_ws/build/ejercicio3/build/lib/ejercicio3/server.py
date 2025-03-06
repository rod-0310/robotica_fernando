import rclpy
from rclpy.node import Node
from recursos.srv import Coordenadas  # Importar la interfaz personalizada

class Servidor(Node):
    def __init__(self):
        super().__init__('server')
        self.srv = self.create_service(Coordenadas, 'req', self.calcular_callback)
        self.get_logger().info('Servidor listo para calcular el punto medio.')

    def calcular_callback(self, request, response):
        response.xm = (request.x1 + request.x2) / 2
        response.ym = (request.y1 + request.y2) / 2
        self.get_logger().info(f'Recibido: ({request.x1}, {request.y1}) y ({request.x2}, {request.y2})')
        self.get_logger().info(f'Enviando punto medio: ({response.xm}, {response.ym})')
        return response

def main():
    rclpy.init()
    nodo = Servidor()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
