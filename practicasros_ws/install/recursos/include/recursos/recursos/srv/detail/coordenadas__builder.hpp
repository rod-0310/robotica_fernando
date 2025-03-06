// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from recursos:srv/Coordenadas.idl
// generated code does not contain a copyright notice

#ifndef RECURSOS__SRV__DETAIL__COORDENADAS__BUILDER_HPP_
#define RECURSOS__SRV__DETAIL__COORDENADAS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "recursos/srv/detail/coordenadas__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace recursos
{

namespace srv
{

namespace builder
{

class Init_Coordenadas_Request_y2
{
public:
  explicit Init_Coordenadas_Request_y2(::recursos::srv::Coordenadas_Request & msg)
  : msg_(msg)
  {}
  ::recursos::srv::Coordenadas_Request y2(::recursos::srv::Coordenadas_Request::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::recursos::srv::Coordenadas_Request msg_;
};

class Init_Coordenadas_Request_x2
{
public:
  explicit Init_Coordenadas_Request_x2(::recursos::srv::Coordenadas_Request & msg)
  : msg_(msg)
  {}
  Init_Coordenadas_Request_y2 x2(::recursos::srv::Coordenadas_Request::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_Coordenadas_Request_y2(msg_);
  }

private:
  ::recursos::srv::Coordenadas_Request msg_;
};

class Init_Coordenadas_Request_y1
{
public:
  explicit Init_Coordenadas_Request_y1(::recursos::srv::Coordenadas_Request & msg)
  : msg_(msg)
  {}
  Init_Coordenadas_Request_x2 y1(::recursos::srv::Coordenadas_Request::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_Coordenadas_Request_x2(msg_);
  }

private:
  ::recursos::srv::Coordenadas_Request msg_;
};

class Init_Coordenadas_Request_x1
{
public:
  Init_Coordenadas_Request_x1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordenadas_Request_y1 x1(::recursos::srv::Coordenadas_Request::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_Coordenadas_Request_y1(msg_);
  }

private:
  ::recursos::srv::Coordenadas_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::recursos::srv::Coordenadas_Request>()
{
  return recursos::srv::builder::Init_Coordenadas_Request_x1();
}

}  // namespace recursos


namespace recursos
{

namespace srv
{

namespace builder
{

class Init_Coordenadas_Response_ym
{
public:
  explicit Init_Coordenadas_Response_ym(::recursos::srv::Coordenadas_Response & msg)
  : msg_(msg)
  {}
  ::recursos::srv::Coordenadas_Response ym(::recursos::srv::Coordenadas_Response::_ym_type arg)
  {
    msg_.ym = std::move(arg);
    return std::move(msg_);
  }

private:
  ::recursos::srv::Coordenadas_Response msg_;
};

class Init_Coordenadas_Response_xm
{
public:
  Init_Coordenadas_Response_xm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordenadas_Response_ym xm(::recursos::srv::Coordenadas_Response::_xm_type arg)
  {
    msg_.xm = std::move(arg);
    return Init_Coordenadas_Response_ym(msg_);
  }

private:
  ::recursos::srv::Coordenadas_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::recursos::srv::Coordenadas_Response>()
{
  return recursos::srv::builder::Init_Coordenadas_Response_xm();
}

}  // namespace recursos

#endif  // RECURSOS__SRV__DETAIL__COORDENADAS__BUILDER_HPP_
