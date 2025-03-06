#include <chrono>
#include <rclcpp/rclcpp.hpp>
#include <functional>
#include <std_msgs/msg/int8.hpp>
#include <memory>

using namespace std::chrono_literals;

class Nodo2 : public rclcpp::Node {
public:
    Nodo2() : Node("nodo2"), sum(0) {
        subscription_ = this->create_subscription<std_msgs::msg::Int8>(
            "num", 10, std::bind(&Nodo2::callback, this, std::placeholders::_1));

        publisher_ = this->create_publisher<std_msgs::msg::Int8>("sum", 10);

        RCLCPP_INFO(this->get_logger(), "Nodo2 iniciado - Sumando valores recibidos.");
    }

private:
    void callback(const std_msgs::msg::Int8::SharedPtr msg) {
        // Manejo del desbordamiento usando casting a int16_t para evitar errores
        int16_t temp_sum = static_cast<int16_t>(sum) + static_cast<int16_t>(msg->data);

        // Mantener el valor dentro del rango de Int8 (-128 a 127)
        if (temp_sum > 127) temp_sum = -128 + (temp_sum - 128);
        else if (temp_sum < -128) temp_sum = 127 - (-129 - temp_sum);

        sum = static_cast<int8_t>(temp_sum); // Convertir de nuevo a int8_t

        std_msgs::msg::Int8 sum_msg;
        sum_msg.data = sum;
        publisher_->publish(sum_msg);

        RCLCPP_INFO(this->get_logger(), "Recibido: %d, Nueva suma: %d", msg->data, sum);
    }

    rclcpp::Subscription<std_msgs::msg::Int8>::SharedPtr subscription_;
    rclcpp::Publisher<std_msgs::msg::Int8>::SharedPtr publisher_;
    int8_t sum;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Nodo2>());
    rclcpp::shutdown();
    return 0;
}
