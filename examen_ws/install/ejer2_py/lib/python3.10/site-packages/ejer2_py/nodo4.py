import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
from examen_interface.msg import Num

class SensorProm(Node):
    def __init__(self):
        super().__init__('sensor_prom')  # Corregido el nombre de nodo
        self.sub_sensor1 = self.create_subscription(Float64, 'sensor_1', self.listener_callback, 10)
        self.sub_sensor2 = self.create_subscription(Float64, 'sensor_2', self.listener_callback1, 10)
        self.sub_sensor3 = self.create_subscription(Float64, 'sensor_3', self.listener_callback2, 10)

        self.publisher_ = self.create_publisher(Num, 'sensor_prom', 10)
        
        self.num = {'sensor_1': None, 'sensor_2': None, 'sensor_3': None}
        self.timer = self.create_timer(1.0, self.publish_filtered_data)
    
    def listener_callback(self, msg):
        self.num['sensor_1'] = msg.data

    def listener_callback1(self, msg):
        self.num['sensor_2'] = msg.data

    def listener_callback2(self, msg):
        self.num['sensor_3'] = msg.data

    def publish_filtered_data(self):
        if all(value is not None for value in self.num.values()):
            avg_value = round(sum(self.num.values()) / len(self.num), 2)
            msg = Num()
            msg.num = avg_value
            msg.nom = "Promedio Sensores"
            self.publisher_.publish(msg)
            self.get_logger().info(f'Publicado: {avg_value}')

def main(args=None):
    rclpy.init(args=args)
    sensor_prom_node = SensorProm()
    rclpy.spin(sensor_prom_node)
    sensor_prom_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':  # Corregido
    main()
