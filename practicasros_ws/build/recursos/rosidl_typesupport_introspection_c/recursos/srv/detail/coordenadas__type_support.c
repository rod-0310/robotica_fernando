// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from recursos:srv/Coordenadas.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "recursos/srv/detail/coordenadas__rosidl_typesupport_introspection_c.h"
#include "recursos/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "recursos/srv/detail/coordenadas__functions.h"
#include "recursos/srv/detail/coordenadas__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void recursos__srv__Coordenadas_Request__rosidl_typesupport_introspection_c__Coordenadas_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  recursos__srv__Coordenadas_Request__init(message_memory);
}

void recursos__srv__Coordenadas_Request__rosidl_typesupport_introspection_c__Coordenadas_Request_fini_function(void * message_memory)
{
  recursos__srv__Coordenadas_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember recursos__srv__Coordenadas_Request__rosidl_typesupport_introspection_c__Coordenadas_Request_message_member_array[4] = {
  {
    "x1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(recursos__srv__Coordenadas_Request, x1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(recursos__srv__Coordenadas_Request, y1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(recursos__srv__Coordenadas_Request, x2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(recursos__srv__Coordenadas_Request, y2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers recursos__srv__Coordenadas_Request__rosidl_typesupport_introspection_c__Coordenadas_Request_message_members = {
  "recursos__srv",  // message namespace
  "Coordenadas_Request",  // message name
  4,  // number of fields
  sizeof(recursos__srv__Coordenadas_Request),
  recursos__srv__Coordenadas_Request__rosidl_typesupport_introspection_c__Coordenadas_Request_message_member_array,  // message members
  recursos__srv__Coordenadas_Request__rosidl_typesupport_introspection_c__Coordenadas_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  recursos__srv__Coordenadas_Request__rosidl_typesupport_introspection_c__Coordenadas_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t recursos__srv__Coordenadas_Request__rosidl_typesupport_introspection_c__Coordenadas_Request_message_type_support_handle = {
  0,
  &recursos__srv__Coordenadas_Request__rosidl_typesupport_introspection_c__Coordenadas_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_recursos
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, recursos, srv, Coordenadas_Request)() {
  if (!recursos__srv__Coordenadas_Request__rosidl_typesupport_introspection_c__Coordenadas_Request_message_type_support_handle.typesupport_identifier) {
    recursos__srv__Coordenadas_Request__rosidl_typesupport_introspection_c__Coordenadas_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &recursos__srv__Coordenadas_Request__rosidl_typesupport_introspection_c__Coordenadas_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "recursos/srv/detail/coordenadas__rosidl_typesupport_introspection_c.h"
// already included above
// #include "recursos/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "recursos/srv/detail/coordenadas__functions.h"
// already included above
// #include "recursos/srv/detail/coordenadas__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void recursos__srv__Coordenadas_Response__rosidl_typesupport_introspection_c__Coordenadas_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  recursos__srv__Coordenadas_Response__init(message_memory);
}

void recursos__srv__Coordenadas_Response__rosidl_typesupport_introspection_c__Coordenadas_Response_fini_function(void * message_memory)
{
  recursos__srv__Coordenadas_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember recursos__srv__Coordenadas_Response__rosidl_typesupport_introspection_c__Coordenadas_Response_message_member_array[2] = {
  {
    "xm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(recursos__srv__Coordenadas_Response, xm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ym",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(recursos__srv__Coordenadas_Response, ym),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers recursos__srv__Coordenadas_Response__rosidl_typesupport_introspection_c__Coordenadas_Response_message_members = {
  "recursos__srv",  // message namespace
  "Coordenadas_Response",  // message name
  2,  // number of fields
  sizeof(recursos__srv__Coordenadas_Response),
  recursos__srv__Coordenadas_Response__rosidl_typesupport_introspection_c__Coordenadas_Response_message_member_array,  // message members
  recursos__srv__Coordenadas_Response__rosidl_typesupport_introspection_c__Coordenadas_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  recursos__srv__Coordenadas_Response__rosidl_typesupport_introspection_c__Coordenadas_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t recursos__srv__Coordenadas_Response__rosidl_typesupport_introspection_c__Coordenadas_Response_message_type_support_handle = {
  0,
  &recursos__srv__Coordenadas_Response__rosidl_typesupport_introspection_c__Coordenadas_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_recursos
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, recursos, srv, Coordenadas_Response)() {
  if (!recursos__srv__Coordenadas_Response__rosidl_typesupport_introspection_c__Coordenadas_Response_message_type_support_handle.typesupport_identifier) {
    recursos__srv__Coordenadas_Response__rosidl_typesupport_introspection_c__Coordenadas_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &recursos__srv__Coordenadas_Response__rosidl_typesupport_introspection_c__Coordenadas_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "recursos/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "recursos/srv/detail/coordenadas__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers recursos__srv__detail__coordenadas__rosidl_typesupport_introspection_c__Coordenadas_service_members = {
  "recursos__srv",  // service namespace
  "Coordenadas",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // recursos__srv__detail__coordenadas__rosidl_typesupport_introspection_c__Coordenadas_Request_message_type_support_handle,
  NULL  // response message
  // recursos__srv__detail__coordenadas__rosidl_typesupport_introspection_c__Coordenadas_Response_message_type_support_handle
};

static rosidl_service_type_support_t recursos__srv__detail__coordenadas__rosidl_typesupport_introspection_c__Coordenadas_service_type_support_handle = {
  0,
  &recursos__srv__detail__coordenadas__rosidl_typesupport_introspection_c__Coordenadas_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, recursos, srv, Coordenadas_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, recursos, srv, Coordenadas_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_recursos
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, recursos, srv, Coordenadas)() {
  if (!recursos__srv__detail__coordenadas__rosidl_typesupport_introspection_c__Coordenadas_service_type_support_handle.typesupport_identifier) {
    recursos__srv__detail__coordenadas__rosidl_typesupport_introspection_c__Coordenadas_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)recursos__srv__detail__coordenadas__rosidl_typesupport_introspection_c__Coordenadas_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, recursos, srv, Coordenadas_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, recursos, srv, Coordenadas_Response)()->data;
  }

  return &recursos__srv__detail__coordenadas__rosidl_typesupport_introspection_c__Coordenadas_service_type_support_handle;
}
