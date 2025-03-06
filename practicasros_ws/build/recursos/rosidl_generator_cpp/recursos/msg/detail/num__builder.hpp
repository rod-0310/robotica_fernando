// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from recursos:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef RECURSOS__MSG__DETAIL__NUM__BUILDER_HPP_
#define RECURSOS__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "recursos/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace recursos
{

namespace msg
{

namespace builder
{

class Init_Num_two
{
public:
  explicit Init_Num_two(::recursos::msg::Num & msg)
  : msg_(msg)
  {}
  ::recursos::msg::Num two(::recursos::msg::Num::_two_type arg)
  {
    msg_.two = std::move(arg);
    return std::move(msg_);
  }

private:
  ::recursos::msg::Num msg_;
};

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Num_two num(::recursos::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return Init_Num_two(msg_);
  }

private:
  ::recursos::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::recursos::msg::Num>()
{
  return recursos::msg::builder::Init_Num_num();
}

}  // namespace recursos

#endif  // RECURSOS__MSG__DETAIL__NUM__BUILDER_HPP_
