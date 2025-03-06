#include <chrono>
#include <rclcpp/rclcpp.hpp>
#include <functional>
#include <std_msgs/msg/int8.hpp>
#include <std_msgs/msg/float32.hpp>
#include <memory>

using namespace std::chrono_literals;

class Nodo3 : public rclcpp::Node {
public:
    Nodo3() : Node("nodo3"), total_sum(0), count(0) {
        // Suscribirse al tópico "sum"
        subscription_ = this->create_subscription<std_msgs::msg::Int8>(
            "sum", 10, std::bind(&Nodo3::callback, this, std::placeholders::_1));

        // Publicador del promedio en "promedio"
        publisher_ = this->create_publisher<std_msgs::msg::Float32>("promedio", 10);

        RCLCPP_INFO(this->get_logger(), "Nodo3 iniciado - Calculando promedio.");
    }

private:
    void callback(const std_msgs::msg::Int8::SharedPtr msg) {
        total_sum += msg->data;
        count++;

        float average = static_cast<float>(total_sum) / count;

        std_msgs::msg::Float32 avg_msg;
        avg_msg.data = average;
        publisher_->publish(avg_msg);

        RCLCPP_INFO(this->get_logger(), "Recibido: %d, Promedio actual: %.2f", msg->data, average);
    }

    rclcpp::Subscription<std_msgs::msg::Int8>::SharedPtr subscription_;
    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr publisher_;
    int total_sum;
    int count;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Nodo3>());
    rclcpp::shutdown();
    return 0;
}
