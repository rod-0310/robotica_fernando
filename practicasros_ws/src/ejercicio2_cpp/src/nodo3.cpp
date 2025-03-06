#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/int32.hpp>

class Nodo3 : public rclcpp::Node {
public:
    Nodo3() : Node("nodo3"), suma_cuadrados(0) {
        sub_impares = this->create_subscription<std_msgs::msg::Int32>(
            "odd", 10, std::bind(&Nodo3::callback_impar, this, std::placeholders::_1));

        sub_pares = this->create_subscription<std_msgs::msg::Int32>(
            "even", 10, std::bind(&Nodo3::callback_par, this, std::placeholders::_1));

        publisher_ = this->create_publisher<std_msgs::msg::Int32>("suma_cuadrados", 10);

        RCLCPP_INFO(this->get_logger(), "Nodo3 iniciado - Calculando suma de cuadrados.");
    }

private:
    void callback_impar(const std_msgs::msg::Int32::SharedPtr msg) {
        suma_cuadrados += msg->data * msg->data;
        publicar_resultado();
    }

    void callback_par(const std_msgs::msg::Int32::SharedPtr msg) {
        suma_cuadrados += msg->data * msg->data;
        publicar_resultado();
    }

    void publicar_resultado() {
        auto msg = std_msgs::msg::Int32();
        msg.data = suma_cuadrados;
        publisher_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "Suma de cuadrados actualizada: %d", suma_cuadrados);
    }

    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr sub_impares;
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr sub_pares;
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr publisher_;
    int suma_cuadrados;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Nodo3>());
    rclcpp::shutdown();
    return 0;
}
