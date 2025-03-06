// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from recursos:srv/Coordenadas.idl
// generated code does not contain a copyright notice

#ifndef RECURSOS__SRV__DETAIL__COORDENADAS__STRUCT_H_
#define RECURSOS__SRV__DETAIL__COORDENADAS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Coordenadas in the package recursos.
typedef struct recursos__srv__Coordenadas_Request
{
  double x1;
  double y1;
  double x2;
  double y2;
} recursos__srv__Coordenadas_Request;

// Struct for a sequence of recursos__srv__Coordenadas_Request.
typedef struct recursos__srv__Coordenadas_Request__Sequence
{
  recursos__srv__Coordenadas_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} recursos__srv__Coordenadas_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Coordenadas in the package recursos.
typedef struct recursos__srv__Coordenadas_Response
{
  double xm;
  double ym;
} recursos__srv__Coordenadas_Response;

// Struct for a sequence of recursos__srv__Coordenadas_Response.
typedef struct recursos__srv__Coordenadas_Response__Sequence
{
  recursos__srv__Coordenadas_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} recursos__srv__Coordenadas_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RECURSOS__SRV__DETAIL__COORDENADAS__STRUCT_H_
