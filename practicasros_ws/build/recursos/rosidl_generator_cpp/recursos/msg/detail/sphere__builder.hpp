// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from recursos:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef RECURSOS__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define RECURSOS__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "recursos/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace recursos
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::recursos::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::recursos::msg::Sphere radius(::recursos::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::recursos::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::recursos::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::recursos::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::recursos::msg::Sphere>()
{
  return recursos::msg::builder::Init_Sphere_center();
}

}  // namespace recursos

#endif  // RECURSOS__MSG__DETAIL__SPHERE__BUILDER_HPP_
