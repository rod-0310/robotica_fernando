// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from examen_interface:srv/Kinematics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "examen_interface/srv/detail/kinematics__rosidl_typesupport_introspection_c.h"
#include "examen_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "examen_interface/srv/detail/kinematics__functions.h"
#include "examen_interface/srv/detail/kinematics__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void examen_interface__srv__Kinematics_Request__rosidl_typesupport_introspection_c__Kinematics_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  examen_interface__srv__Kinematics_Request__init(message_memory);
}

void examen_interface__srv__Kinematics_Request__rosidl_typesupport_introspection_c__Kinematics_Request_fini_function(void * message_memory)
{
  examen_interface__srv__Kinematics_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember examen_interface__srv__Kinematics_Request__rosidl_typesupport_introspection_c__Kinematics_Request_message_member_array[4] = {
  {
    "theta1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(examen_interface__srv__Kinematics_Request, theta1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(examen_interface__srv__Kinematics_Request, theta2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(examen_interface__srv__Kinematics_Request, theta3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(examen_interface__srv__Kinematics_Request, theta4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers examen_interface__srv__Kinematics_Request__rosidl_typesupport_introspection_c__Kinematics_Request_message_members = {
  "examen_interface__srv",  // message namespace
  "Kinematics_Request",  // message name
  4,  // number of fields
  sizeof(examen_interface__srv__Kinematics_Request),
  examen_interface__srv__Kinematics_Request__rosidl_typesupport_introspection_c__Kinematics_Request_message_member_array,  // message members
  examen_interface__srv__Kinematics_Request__rosidl_typesupport_introspection_c__Kinematics_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  examen_interface__srv__Kinematics_Request__rosidl_typesupport_introspection_c__Kinematics_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t examen_interface__srv__Kinematics_Request__rosidl_typesupport_introspection_c__Kinematics_Request_message_type_support_handle = {
  0,
  &examen_interface__srv__Kinematics_Request__rosidl_typesupport_introspection_c__Kinematics_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_examen_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, examen_interface, srv, Kinematics_Request)() {
  if (!examen_interface__srv__Kinematics_Request__rosidl_typesupport_introspection_c__Kinematics_Request_message_type_support_handle.typesupport_identifier) {
    examen_interface__srv__Kinematics_Request__rosidl_typesupport_introspection_c__Kinematics_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &examen_interface__srv__Kinematics_Request__rosidl_typesupport_introspection_c__Kinematics_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "examen_interface/srv/detail/kinematics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "examen_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "examen_interface/srv/detail/kinematics__functions.h"
// already included above
// #include "examen_interface/srv/detail/kinematics__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void examen_interface__srv__Kinematics_Response__rosidl_typesupport_introspection_c__Kinematics_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  examen_interface__srv__Kinematics_Response__init(message_memory);
}

void examen_interface__srv__Kinematics_Response__rosidl_typesupport_introspection_c__Kinematics_Response_fini_function(void * message_memory)
{
  examen_interface__srv__Kinematics_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember examen_interface__srv__Kinematics_Response__rosidl_typesupport_introspection_c__Kinematics_Response_message_member_array[1] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(examen_interface__srv__Kinematics_Response, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers examen_interface__srv__Kinematics_Response__rosidl_typesupport_introspection_c__Kinematics_Response_message_members = {
  "examen_interface__srv",  // message namespace
  "Kinematics_Response",  // message name
  1,  // number of fields
  sizeof(examen_interface__srv__Kinematics_Response),
  examen_interface__srv__Kinematics_Response__rosidl_typesupport_introspection_c__Kinematics_Response_message_member_array,  // message members
  examen_interface__srv__Kinematics_Response__rosidl_typesupport_introspection_c__Kinematics_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  examen_interface__srv__Kinematics_Response__rosidl_typesupport_introspection_c__Kinematics_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t examen_interface__srv__Kinematics_Response__rosidl_typesupport_introspection_c__Kinematics_Response_message_type_support_handle = {
  0,
  &examen_interface__srv__Kinematics_Response__rosidl_typesupport_introspection_c__Kinematics_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_examen_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, examen_interface, srv, Kinematics_Response)() {
  examen_interface__srv__Kinematics_Response__rosidl_typesupport_introspection_c__Kinematics_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!examen_interface__srv__Kinematics_Response__rosidl_typesupport_introspection_c__Kinematics_Response_message_type_support_handle.typesupport_identifier) {
    examen_interface__srv__Kinematics_Response__rosidl_typesupport_introspection_c__Kinematics_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &examen_interface__srv__Kinematics_Response__rosidl_typesupport_introspection_c__Kinematics_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "examen_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "examen_interface/srv/detail/kinematics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers examen_interface__srv__detail__kinematics__rosidl_typesupport_introspection_c__Kinematics_service_members = {
  "examen_interface__srv",  // service namespace
  "Kinematics",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // examen_interface__srv__detail__kinematics__rosidl_typesupport_introspection_c__Kinematics_Request_message_type_support_handle,
  NULL  // response message
  // examen_interface__srv__detail__kinematics__rosidl_typesupport_introspection_c__Kinematics_Response_message_type_support_handle
};

static rosidl_service_type_support_t examen_interface__srv__detail__kinematics__rosidl_typesupport_introspection_c__Kinematics_service_type_support_handle = {
  0,
  &examen_interface__srv__detail__kinematics__rosidl_typesupport_introspection_c__Kinematics_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, examen_interface, srv, Kinematics_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, examen_interface, srv, Kinematics_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_examen_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, examen_interface, srv, Kinematics)() {
  if (!examen_interface__srv__detail__kinematics__rosidl_typesupport_introspection_c__Kinematics_service_type_support_handle.typesupport_identifier) {
    examen_interface__srv__detail__kinematics__rosidl_typesupport_introspection_c__Kinematics_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)examen_interface__srv__detail__kinematics__rosidl_typesupport_introspection_c__Kinematics_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, examen_interface, srv, Kinematics_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, examen_interface, srv, Kinematics_Response)()->data;
  }

  return &examen_interface__srv__detail__kinematics__rosidl_typesupport_introspection_c__Kinematics_service_type_support_handle;
}
