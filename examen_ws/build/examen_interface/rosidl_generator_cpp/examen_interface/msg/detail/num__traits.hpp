// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from examen_interface:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef EXAMEN_INTERFACE__MSG__DETAIL__NUM__TRAITS_HPP_
#define EXAMEN_INTERFACE__MSG__DETAIL__NUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "examen_interface/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace examen_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Num & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << ", ";
  }

  // member: nom
  {
    out << "nom: ";
    rosidl_generator_traits::value_to_yaml(msg.nom, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }

  // member: nom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nom: ";
    rosidl_generator_traits::value_to_yaml(msg.nom, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Num & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace examen_interface

namespace rosidl_generator_traits
{

[[deprecated("use examen_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const examen_interface::msg::Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  examen_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use examen_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const examen_interface::msg::Num & msg)
{
  return examen_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<examen_interface::msg::Num>()
{
  return "examen_interface::msg::Num";
}

template<>
inline const char * name<examen_interface::msg::Num>()
{
  return "examen_interface/msg/Num";
}

template<>
struct has_fixed_size<examen_interface::msg::Num>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<examen_interface::msg::Num>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<examen_interface::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EXAMEN_INTERFACE__MSG__DETAIL__NUM__TRAITS_HPP_
