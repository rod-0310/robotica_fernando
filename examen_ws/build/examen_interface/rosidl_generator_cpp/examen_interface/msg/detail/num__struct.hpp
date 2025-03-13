// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from examen_interface:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef EXAMEN_INTERFACE__MSG__DETAIL__NUM__STRUCT_HPP_
#define EXAMEN_INTERFACE__MSG__DETAIL__NUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__examen_interface__msg__Num __attribute__((deprecated))
#else
# define DEPRECATED__examen_interface__msg__Num __declspec(deprecated)
#endif

namespace examen_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Num_
{
  using Type = Num_<ContainerAllocator>;

  explicit Num_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0.0;
      this->nom = "";
    }
  }

  explicit Num_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nom(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0.0;
      this->nom = "";
    }
  }

  // field types and members
  using _num_type =
    double;
  _num_type num;
  using _nom_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _nom_type nom;

  // setters for named parameter idiom
  Type & set__num(
    const double & _arg)
  {
    this->num = _arg;
    return *this;
  }
  Type & set__nom(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->nom = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    examen_interface::msg::Num_<ContainerAllocator> *;
  using ConstRawPtr =
    const examen_interface::msg::Num_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<examen_interface::msg::Num_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<examen_interface::msg::Num_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      examen_interface::msg::Num_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<examen_interface::msg::Num_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      examen_interface::msg::Num_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<examen_interface::msg::Num_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<examen_interface::msg::Num_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<examen_interface::msg::Num_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__examen_interface__msg__Num
    std::shared_ptr<examen_interface::msg::Num_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__examen_interface__msg__Num
    std::shared_ptr<examen_interface::msg::Num_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Num_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    if (this->nom != other.nom) {
      return false;
    }
    return true;
  }
  bool operator!=(const Num_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Num_

// alias to use template instance with default allocator
using Num =
  examen_interface::msg::Num_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace examen_interface

#endif  // EXAMEN_INTERFACE__MSG__DETAIL__NUM__STRUCT_HPP_
