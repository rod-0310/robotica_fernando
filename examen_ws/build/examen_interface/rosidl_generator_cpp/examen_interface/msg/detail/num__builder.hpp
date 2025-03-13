// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from examen_interface:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef EXAMEN_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_
#define EXAMEN_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "examen_interface/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace examen_interface
{

namespace msg
{

namespace builder
{

class Init_Num_nom
{
public:
  explicit Init_Num_nom(::examen_interface::msg::Num & msg)
  : msg_(msg)
  {}
  ::examen_interface::msg::Num nom(::examen_interface::msg::Num::_nom_type arg)
  {
    msg_.nom = std::move(arg);
    return std::move(msg_);
  }

private:
  ::examen_interface::msg::Num msg_;
};

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Num_nom num(::examen_interface::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return Init_Num_nom(msg_);
  }

private:
  ::examen_interface::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::examen_interface::msg::Num>()
{
  return examen_interface::msg::builder::Init_Num_num();
}

}  // namespace examen_interface

#endif  // EXAMEN_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_
