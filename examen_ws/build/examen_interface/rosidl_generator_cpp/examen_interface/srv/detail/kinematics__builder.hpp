// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from examen_interface:srv/Kinematics.idl
// generated code does not contain a copyright notice

#ifndef EXAMEN_INTERFACE__SRV__DETAIL__KINEMATICS__BUILDER_HPP_
#define EXAMEN_INTERFACE__SRV__DETAIL__KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "examen_interface/srv/detail/kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace examen_interface
{

namespace srv
{

namespace builder
{

class Init_Kinematics_Request_theta4
{
public:
  explicit Init_Kinematics_Request_theta4(::examen_interface::srv::Kinematics_Request & msg)
  : msg_(msg)
  {}
  ::examen_interface::srv::Kinematics_Request theta4(::examen_interface::srv::Kinematics_Request::_theta4_type arg)
  {
    msg_.theta4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::examen_interface::srv::Kinematics_Request msg_;
};

class Init_Kinematics_Request_theta3
{
public:
  explicit Init_Kinematics_Request_theta3(::examen_interface::srv::Kinematics_Request & msg)
  : msg_(msg)
  {}
  Init_Kinematics_Request_theta4 theta3(::examen_interface::srv::Kinematics_Request::_theta3_type arg)
  {
    msg_.theta3 = std::move(arg);
    return Init_Kinematics_Request_theta4(msg_);
  }

private:
  ::examen_interface::srv::Kinematics_Request msg_;
};

class Init_Kinematics_Request_theta2
{
public:
  explicit Init_Kinematics_Request_theta2(::examen_interface::srv::Kinematics_Request & msg)
  : msg_(msg)
  {}
  Init_Kinematics_Request_theta3 theta2(::examen_interface::srv::Kinematics_Request::_theta2_type arg)
  {
    msg_.theta2 = std::move(arg);
    return Init_Kinematics_Request_theta3(msg_);
  }

private:
  ::examen_interface::srv::Kinematics_Request msg_;
};

class Init_Kinematics_Request_theta1
{
public:
  Init_Kinematics_Request_theta1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Kinematics_Request_theta2 theta1(::examen_interface::srv::Kinematics_Request::_theta1_type arg)
  {
    msg_.theta1 = std::move(arg);
    return Init_Kinematics_Request_theta2(msg_);
  }

private:
  ::examen_interface::srv::Kinematics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::examen_interface::srv::Kinematics_Request>()
{
  return examen_interface::srv::builder::Init_Kinematics_Request_theta1();
}

}  // namespace examen_interface


namespace examen_interface
{

namespace srv
{

namespace builder
{

class Init_Kinematics_Response_pose
{
public:
  Init_Kinematics_Response_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::examen_interface::srv::Kinematics_Response pose(::examen_interface::srv::Kinematics_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::examen_interface::srv::Kinematics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::examen_interface::srv::Kinematics_Response>()
{
  return examen_interface::srv::builder::Init_Kinematics_Response_pose();
}

}  // namespace examen_interface

#endif  // EXAMEN_INTERFACE__SRV__DETAIL__KINEMATICS__BUILDER_HPP_
