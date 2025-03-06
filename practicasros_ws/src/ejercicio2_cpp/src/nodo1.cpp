#include <chrono>  // Para manejar el tiempo (1s)
#include <rclcpp/rclcpp.hpp>  // Librería de ROS 2 para C++
#include <functional>  // Para usar std::bind
#include <std_msgs/msg/int32.hpp>  // Tipo de mensaje a publicar (Int8)
#include <memory>  // Para usar std::shared_ptr
using namespace std::chrono_literals;

class Nodo1 : public rclcpp::Node {
public:
    Nodo1() : Node("nodo1"), numero(1) {
        publisher_ = this->create_publisher<std_msgs::msg::Int32>("odd", 10);
        timer_ = this->create_wall_timer(1s, std::bind(&Nodo1::publicar_numero, this));

        RCLCPP_INFO(this->get_logger(), "Nodo1 iniciado - Publicando números impares.");
    }

private:
    void publicar_numero() {
        auto msg = std_msgs::msg::Int32();
        msg.data = numero;
        publisher_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "Publicado: %d", numero);
        numero += 2;  // Incrementar al siguiente número impar
    }

    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    int numero;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Nodo1>());
    rclcpp::shutdown();
    return 0;
}