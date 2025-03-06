#include <chrono>  // Para manejar el tiempo (1s)
#include <rclcpp/rclcpp.hpp>  // Librería de ROS 2 para C++
#include <functional>  // Para usar std::bind
#include <std_msgs/msg/int8.hpp>  // Tipo de mensaje a publicar (Int8)
#include <memory>  // Para usar std::shared_ptr
#include <random>  // Para generar números aleatorios

using namespace std::chrono_literals;  // Para usar "1s"

class Nodo1 : public rclcpp::Node {
public:
    Nodo1() : Node("nodo1") {
        // Crear publicador en el tópico "random_numbers"
        publisher_ = this->create_publisher<std_msgs::msg::Int8>("num", 10);

        // Configurar temporizador para publicar cada 1s
        timer_ = this->create_wall_timer(1s, std::bind(&Nodo1::publicar, this));

        RCLCPP_INFO(this->get_logger(), "Nodo1 iniciado - Publicando números aleatorios de 8 bits.");
    }

private:
    void publicar() {
        // Generar número aleatorio entre -128 y 127 (8 bits con signo)
        static std::random_device rd;
        static std::mt19937 gen(rd());
        static std::uniform_int_distribution<int8_t> dist(-128, 127);

        std_msgs::msg::Int8 msg;
        msg.data = dist(gen);

        // Publicar el número aleatorio
        publisher_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "Publicado: %d", msg.data);
    }

    rclcpp::Publisher<std_msgs::msg::Int8>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Nodo1>());
    rclcpp::shutdown();
    return 0;
}