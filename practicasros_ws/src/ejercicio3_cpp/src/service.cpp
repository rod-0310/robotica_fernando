#include "rclcpp/rclcpp.hpp"
#include "recursos/srv/coordenadas.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class Servidor : public rclcpp::Node {
public:
    Servidor() : Node("servidor") {
        servicio_ = this->create_service<recursos::srv::Coordenadas>(
            "req", 
            std::bind(&Servidor::calcular_callback, this, _1, _2)
        );
        RCLCPP_INFO(this->get_logger(), "Servidor listo para calcular el punto medio.");
    }

private:
    void calcular_callback(
        const std::shared_ptr<recursos::srv::Coordenadas::Request> request,
        std::shared_ptr<recursos::srv::Coordenadas::Response> response) 
    {
        response->xm = (request->x1 + request->x2) / 2.0;
        response->ym = (request->y1 + request->y2) / 2.0;

        RCLCPP_INFO(this->get_logger(), "Recibido: (%.2f, %.2f) y (%.2f, %.2f)", 
                    request->x1, request->y1, request->x2, request->y2);
        RCLCPP_INFO(this->get_logger(), "Enviando punto medio: (%.2f, %.2f)", 
                    response->xm, response->ym);
    }

    rclcpp::Service<recursos::srv::Coordenadas>::SharedPtr servicio_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Servidor>());
    rclcpp::shutdown();
    return 0;
}
