#include "rclcpp/rclcpp.hpp"
#include "recursos/srv/coordenadas.hpp"
#include <iostream>
using namespace std::chrono_literals;

class Cliente : public rclcpp::Node {
public:
    Cliente() : Node("cliente") {
        cliente_ = this->create_client<recursos::srv::Coordenadas>("req");

        while (!cliente_->wait_for_service(1s)) {
            RCLCPP_INFO(this->get_logger(), "Esperando al servidor...");
        }
    }

    void enviar_solicitud(double x1, double y1, double x2, double y2) {
        auto request = std::make_shared<recursos::srv::Coordenadas::Request>();
        request->x1 = x1;
        request->y1 = y1;
        request->x2 = x2;
        request->y2 = y2;

        auto future = cliente_->async_send_request(request);
        auto response = future.get();

        RCLCPP_INFO(this->get_logger(), "✅ Punto medio calculado: (%.2f, %.2f)", response->xm, response->ym);
    }

private:
    rclcpp::Client<recursos::srv::Coordenadas>::SharedPtr cliente_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto nodo = std::make_shared<Cliente>();

    double x1, y1, x2, y2;
    std::cout << "Ingrese x1: "; std::cin >> x1;
    std::cout << "Ingrese y1: "; std::cin >> y1;
    std::cout << "Ingrese x2: "; std::cin >> x2;
    std::cout << "Ingrese y2: "; std::cin >> y2;

    nodo->enviar_solicitud(x1, y1, x2, y2);
    
    rclcpp::shutdown();
    return 0;
}
