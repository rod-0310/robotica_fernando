// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from examen_interface:msg/Num.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "examen_interface/msg/detail/num__rosidl_typesupport_introspection_c.h"
#include "examen_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "examen_interface/msg/detail/num__functions.h"
#include "examen_interface/msg/detail/num__struct.h"


// Include directives for member types
// Member `nom`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void examen_interface__msg__Num__rosidl_typesupport_introspection_c__Num_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  examen_interface__msg__Num__init(message_memory);
}

void examen_interface__msg__Num__rosidl_typesupport_introspection_c__Num_fini_function(void * message_memory)
{
  examen_interface__msg__Num__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember examen_interface__msg__Num__rosidl_typesupport_introspection_c__Num_message_member_array[2] = {
  {
    "num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(examen_interface__msg__Num, num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(examen_interface__msg__Num, nom),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers examen_interface__msg__Num__rosidl_typesupport_introspection_c__Num_message_members = {
  "examen_interface__msg",  // message namespace
  "Num",  // message name
  2,  // number of fields
  sizeof(examen_interface__msg__Num),
  examen_interface__msg__Num__rosidl_typesupport_introspection_c__Num_message_member_array,  // message members
  examen_interface__msg__Num__rosidl_typesupport_introspection_c__Num_init_function,  // function to initialize message memory (memory has to be allocated)
  examen_interface__msg__Num__rosidl_typesupport_introspection_c__Num_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t examen_interface__msg__Num__rosidl_typesupport_introspection_c__Num_message_type_support_handle = {
  0,
  &examen_interface__msg__Num__rosidl_typesupport_introspection_c__Num_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_examen_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, examen_interface, msg, Num)() {
  if (!examen_interface__msg__Num__rosidl_typesupport_introspection_c__Num_message_type_support_handle.typesupport_identifier) {
    examen_interface__msg__Num__rosidl_typesupport_introspection_c__Num_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &examen_interface__msg__Num__rosidl_typesupport_introspection_c__Num_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
