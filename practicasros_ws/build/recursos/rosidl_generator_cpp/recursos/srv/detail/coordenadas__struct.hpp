// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from recursos:srv/Coordenadas.idl
// generated code does not contain a copyright notice

#ifndef RECURSOS__SRV__DETAIL__COORDENADAS__STRUCT_HPP_
#define RECURSOS__SRV__DETAIL__COORDENADAS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__recursos__srv__Coordenadas_Request __attribute__((deprecated))
#else
# define DEPRECATED__recursos__srv__Coordenadas_Request __declspec(deprecated)
#endif

namespace recursos
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Coordenadas_Request_
{
  using Type = Coordenadas_Request_<ContainerAllocator>;

  explicit Coordenadas_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0;
      this->y1 = 0.0;
      this->x2 = 0.0;
      this->y2 = 0.0;
    }
  }

  explicit Coordenadas_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0;
      this->y1 = 0.0;
      this->x2 = 0.0;
      this->y2 = 0.0;
    }
  }

  // field types and members
  using _x1_type =
    double;
  _x1_type x1;
  using _y1_type =
    double;
  _y1_type y1;
  using _x2_type =
    double;
  _x2_type x2;
  using _y2_type =
    double;
  _y2_type y2;

  // setters for named parameter idiom
  Type & set__x1(
    const double & _arg)
  {
    this->x1 = _arg;
    return *this;
  }
  Type & set__y1(
    const double & _arg)
  {
    this->y1 = _arg;
    return *this;
  }
  Type & set__x2(
    const double & _arg)
  {
    this->x2 = _arg;
    return *this;
  }
  Type & set__y2(
    const double & _arg)
  {
    this->y2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    recursos::srv::Coordenadas_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const recursos::srv::Coordenadas_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<recursos::srv::Coordenadas_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<recursos::srv::Coordenadas_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      recursos::srv::Coordenadas_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<recursos::srv::Coordenadas_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      recursos::srv::Coordenadas_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<recursos::srv::Coordenadas_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<recursos::srv::Coordenadas_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<recursos::srv::Coordenadas_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__recursos__srv__Coordenadas_Request
    std::shared_ptr<recursos::srv::Coordenadas_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__recursos__srv__Coordenadas_Request
    std::shared_ptr<recursos::srv::Coordenadas_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coordenadas_Request_ & other) const
  {
    if (this->x1 != other.x1) {
      return false;
    }
    if (this->y1 != other.y1) {
      return false;
    }
    if (this->x2 != other.x2) {
      return false;
    }
    if (this->y2 != other.y2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Coordenadas_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coordenadas_Request_

// alias to use template instance with default allocator
using Coordenadas_Request =
  recursos::srv::Coordenadas_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace recursos


#ifndef _WIN32
# define DEPRECATED__recursos__srv__Coordenadas_Response __attribute__((deprecated))
#else
# define DEPRECATED__recursos__srv__Coordenadas_Response __declspec(deprecated)
#endif

namespace recursos
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Coordenadas_Response_
{
  using Type = Coordenadas_Response_<ContainerAllocator>;

  explicit Coordenadas_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xm = 0.0;
      this->ym = 0.0;
    }
  }

  explicit Coordenadas_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xm = 0.0;
      this->ym = 0.0;
    }
  }

  // field types and members
  using _xm_type =
    double;
  _xm_type xm;
  using _ym_type =
    double;
  _ym_type ym;

  // setters for named parameter idiom
  Type & set__xm(
    const double & _arg)
  {
    this->xm = _arg;
    return *this;
  }
  Type & set__ym(
    const double & _arg)
  {
    this->ym = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    recursos::srv::Coordenadas_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const recursos::srv::Coordenadas_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<recursos::srv::Coordenadas_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<recursos::srv::Coordenadas_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      recursos::srv::Coordenadas_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<recursos::srv::Coordenadas_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      recursos::srv::Coordenadas_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<recursos::srv::Coordenadas_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<recursos::srv::Coordenadas_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<recursos::srv::Coordenadas_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__recursos__srv__Coordenadas_Response
    std::shared_ptr<recursos::srv::Coordenadas_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__recursos__srv__Coordenadas_Response
    std::shared_ptr<recursos::srv::Coordenadas_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coordenadas_Response_ & other) const
  {
    if (this->xm != other.xm) {
      return false;
    }
    if (this->ym != other.ym) {
      return false;
    }
    return true;
  }
  bool operator!=(const Coordenadas_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coordenadas_Response_

// alias to use template instance with default allocator
using Coordenadas_Response =
  recursos::srv::Coordenadas_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace recursos

namespace recursos
{

namespace srv
{

struct Coordenadas
{
  using Request = recursos::srv::Coordenadas_Request;
  using Response = recursos::srv::Coordenadas_Response;
};

}  // namespace srv

}  // namespace recursos

#endif  // RECURSOS__SRV__DETAIL__COORDENADAS__STRUCT_HPP_
