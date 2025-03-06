// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from recursos:srv/Coordenadas.idl
// generated code does not contain a copyright notice

#ifndef RECURSOS__SRV__DETAIL__COORDENADAS__TRAITS_HPP_
#define RECURSOS__SRV__DETAIL__COORDENADAS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "recursos/srv/detail/coordenadas__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace recursos
{

namespace srv
{

inline void to_flow_style_yaml(
  const Coordenadas_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x1
  {
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << ", ";
  }

  // member: y1
  {
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << ", ";
  }

  // member: x2
  {
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << ", ";
  }

  // member: y2
  {
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Coordenadas_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << "\n";
  }

  // member: y1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << "\n";
  }

  // member: x2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << "\n";
  }

  // member: y2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Coordenadas_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace recursos

namespace rosidl_generator_traits
{

[[deprecated("use recursos::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const recursos::srv::Coordenadas_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  recursos::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use recursos::srv::to_yaml() instead")]]
inline std::string to_yaml(const recursos::srv::Coordenadas_Request & msg)
{
  return recursos::srv::to_yaml(msg);
}

template<>
inline const char * data_type<recursos::srv::Coordenadas_Request>()
{
  return "recursos::srv::Coordenadas_Request";
}

template<>
inline const char * name<recursos::srv::Coordenadas_Request>()
{
  return "recursos/srv/Coordenadas_Request";
}

template<>
struct has_fixed_size<recursos::srv::Coordenadas_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<recursos::srv::Coordenadas_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<recursos::srv::Coordenadas_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace recursos
{

namespace srv
{

inline void to_flow_style_yaml(
  const Coordenadas_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: xm
  {
    out << "xm: ";
    rosidl_generator_traits::value_to_yaml(msg.xm, out);
    out << ", ";
  }

  // member: ym
  {
    out << "ym: ";
    rosidl_generator_traits::value_to_yaml(msg.ym, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Coordenadas_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xm: ";
    rosidl_generator_traits::value_to_yaml(msg.xm, out);
    out << "\n";
  }

  // member: ym
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ym: ";
    rosidl_generator_traits::value_to_yaml(msg.ym, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Coordenadas_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace recursos

namespace rosidl_generator_traits
{

[[deprecated("use recursos::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const recursos::srv::Coordenadas_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  recursos::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use recursos::srv::to_yaml() instead")]]
inline std::string to_yaml(const recursos::srv::Coordenadas_Response & msg)
{
  return recursos::srv::to_yaml(msg);
}

template<>
inline const char * data_type<recursos::srv::Coordenadas_Response>()
{
  return "recursos::srv::Coordenadas_Response";
}

template<>
inline const char * name<recursos::srv::Coordenadas_Response>()
{
  return "recursos/srv/Coordenadas_Response";
}

template<>
struct has_fixed_size<recursos::srv::Coordenadas_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<recursos::srv::Coordenadas_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<recursos::srv::Coordenadas_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<recursos::srv::Coordenadas>()
{
  return "recursos::srv::Coordenadas";
}

template<>
inline const char * name<recursos::srv::Coordenadas>()
{
  return "recursos/srv/Coordenadas";
}

template<>
struct has_fixed_size<recursos::srv::Coordenadas>
  : std::integral_constant<
    bool,
    has_fixed_size<recursos::srv::Coordenadas_Request>::value &&
    has_fixed_size<recursos::srv::Coordenadas_Response>::value
  >
{
};

template<>
struct has_bounded_size<recursos::srv::Coordenadas>
  : std::integral_constant<
    bool,
    has_bounded_size<recursos::srv::Coordenadas_Request>::value &&
    has_bounded_size<recursos::srv::Coordenadas_Response>::value
  >
{
};

template<>
struct is_service<recursos::srv::Coordenadas>
  : std::true_type
{
};

template<>
struct is_service_request<recursos::srv::Coordenadas_Request>
  : std::true_type
{
};

template<>
struct is_service_response<recursos::srv::Coordenadas_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RECURSOS__SRV__DETAIL__COORDENADAS__TRAITS_HPP_
