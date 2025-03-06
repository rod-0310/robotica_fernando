// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from recursos:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef RECURSOS__MSG__DETAIL__NUM__STRUCT_H_
#define RECURSOS__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Num in the package recursos.
typedef struct recursos__msg__Num
{
  int64_t num;
  int8_t two;
} recursos__msg__Num;

// Struct for a sequence of recursos__msg__Num.
typedef struct recursos__msg__Num__Sequence
{
  recursos__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} recursos__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RECURSOS__MSG__DETAIL__NUM__STRUCT_H_
