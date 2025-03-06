#include <chrono>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/int32.hpp>

using namespace std::chrono_literals;

class Nodo2 : public rclcpp::Node {
public:
    Nodo2() : Node("nodo2"), numero(0) {
        publisher_ = this->create_publisher<std_msgs::msg::Int32>("even", 10);
        timer_ = this->create_wall_timer(1s, std::bind(&Nodo2::publicar_numero, this));

        RCLCPP_INFO(this->get_logger(), "Nodo2 iniciado - Publicando números pares.");
    }

private:
    void publicar_numero() {
        auto msg = std_msgs::msg::Int32();
        msg.data = numero;
        publisher_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "Publicado: %d", numero);
        numero += 2;  // Incrementar al siguiente número par
    }

    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    int numero;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Nodo2>());
    rclcpp::shutdown();
    return 0;
}
