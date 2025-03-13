// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from examen_interface:srv/Kinematics.idl
// generated code does not contain a copyright notice
#include "examen_interface/srv/detail/kinematics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
examen_interface__srv__Kinematics_Request__init(examen_interface__srv__Kinematics_Request * msg)
{
  if (!msg) {
    return false;
  }
  // theta1
  // theta2
  // theta3
  // theta4
  return true;
}

void
examen_interface__srv__Kinematics_Request__fini(examen_interface__srv__Kinematics_Request * msg)
{
  if (!msg) {
    return;
  }
  // theta1
  // theta2
  // theta3
  // theta4
}

bool
examen_interface__srv__Kinematics_Request__are_equal(const examen_interface__srv__Kinematics_Request * lhs, const examen_interface__srv__Kinematics_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // theta1
  if (lhs->theta1 != rhs->theta1) {
    return false;
  }
  // theta2
  if (lhs->theta2 != rhs->theta2) {
    return false;
  }
  // theta3
  if (lhs->theta3 != rhs->theta3) {
    return false;
  }
  // theta4
  if (lhs->theta4 != rhs->theta4) {
    return false;
  }
  return true;
}

bool
examen_interface__srv__Kinematics_Request__copy(
  const examen_interface__srv__Kinematics_Request * input,
  examen_interface__srv__Kinematics_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // theta1
  output->theta1 = input->theta1;
  // theta2
  output->theta2 = input->theta2;
  // theta3
  output->theta3 = input->theta3;
  // theta4
  output->theta4 = input->theta4;
  return true;
}

examen_interface__srv__Kinematics_Request *
examen_interface__srv__Kinematics_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  examen_interface__srv__Kinematics_Request * msg = (examen_interface__srv__Kinematics_Request *)allocator.allocate(sizeof(examen_interface__srv__Kinematics_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(examen_interface__srv__Kinematics_Request));
  bool success = examen_interface__srv__Kinematics_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
examen_interface__srv__Kinematics_Request__destroy(examen_interface__srv__Kinematics_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    examen_interface__srv__Kinematics_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
examen_interface__srv__Kinematics_Request__Sequence__init(examen_interface__srv__Kinematics_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  examen_interface__srv__Kinematics_Request * data = NULL;

  if (size) {
    data = (examen_interface__srv__Kinematics_Request *)allocator.zero_allocate(size, sizeof(examen_interface__srv__Kinematics_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = examen_interface__srv__Kinematics_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        examen_interface__srv__Kinematics_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
examen_interface__srv__Kinematics_Request__Sequence__fini(examen_interface__srv__Kinematics_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      examen_interface__srv__Kinematics_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

examen_interface__srv__Kinematics_Request__Sequence *
examen_interface__srv__Kinematics_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  examen_interface__srv__Kinematics_Request__Sequence * array = (examen_interface__srv__Kinematics_Request__Sequence *)allocator.allocate(sizeof(examen_interface__srv__Kinematics_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = examen_interface__srv__Kinematics_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
examen_interface__srv__Kinematics_Request__Sequence__destroy(examen_interface__srv__Kinematics_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    examen_interface__srv__Kinematics_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
examen_interface__srv__Kinematics_Request__Sequence__are_equal(const examen_interface__srv__Kinematics_Request__Sequence * lhs, const examen_interface__srv__Kinematics_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!examen_interface__srv__Kinematics_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
examen_interface__srv__Kinematics_Request__Sequence__copy(
  const examen_interface__srv__Kinematics_Request__Sequence * input,
  examen_interface__srv__Kinematics_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(examen_interface__srv__Kinematics_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    examen_interface__srv__Kinematics_Request * data =
      (examen_interface__srv__Kinematics_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!examen_interface__srv__Kinematics_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          examen_interface__srv__Kinematics_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!examen_interface__srv__Kinematics_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
examen_interface__srv__Kinematics_Response__init(examen_interface__srv__Kinematics_Response * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    examen_interface__srv__Kinematics_Response__fini(msg);
    return false;
  }
  return true;
}

void
examen_interface__srv__Kinematics_Response__fini(examen_interface__srv__Kinematics_Response * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
examen_interface__srv__Kinematics_Response__are_equal(const examen_interface__srv__Kinematics_Response * lhs, const examen_interface__srv__Kinematics_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
examen_interface__srv__Kinematics_Response__copy(
  const examen_interface__srv__Kinematics_Response * input,
  examen_interface__srv__Kinematics_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

examen_interface__srv__Kinematics_Response *
examen_interface__srv__Kinematics_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  examen_interface__srv__Kinematics_Response * msg = (examen_interface__srv__Kinematics_Response *)allocator.allocate(sizeof(examen_interface__srv__Kinematics_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(examen_interface__srv__Kinematics_Response));
  bool success = examen_interface__srv__Kinematics_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
examen_interface__srv__Kinematics_Response__destroy(examen_interface__srv__Kinematics_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    examen_interface__srv__Kinematics_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
examen_interface__srv__Kinematics_Response__Sequence__init(examen_interface__srv__Kinematics_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  examen_interface__srv__Kinematics_Response * data = NULL;

  if (size) {
    data = (examen_interface__srv__Kinematics_Response *)allocator.zero_allocate(size, sizeof(examen_interface__srv__Kinematics_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = examen_interface__srv__Kinematics_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        examen_interface__srv__Kinematics_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
examen_interface__srv__Kinematics_Response__Sequence__fini(examen_interface__srv__Kinematics_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      examen_interface__srv__Kinematics_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

examen_interface__srv__Kinematics_Response__Sequence *
examen_interface__srv__Kinematics_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  examen_interface__srv__Kinematics_Response__Sequence * array = (examen_interface__srv__Kinematics_Response__Sequence *)allocator.allocate(sizeof(examen_interface__srv__Kinematics_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = examen_interface__srv__Kinematics_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
examen_interface__srv__Kinematics_Response__Sequence__destroy(examen_interface__srv__Kinematics_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    examen_interface__srv__Kinematics_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
examen_interface__srv__Kinematics_Response__Sequence__are_equal(const examen_interface__srv__Kinematics_Response__Sequence * lhs, const examen_interface__srv__Kinematics_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!examen_interface__srv__Kinematics_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
examen_interface__srv__Kinematics_Response__Sequence__copy(
  const examen_interface__srv__Kinematics_Response__Sequence * input,
  examen_interface__srv__Kinematics_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(examen_interface__srv__Kinematics_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    examen_interface__srv__Kinematics_Response * data =
      (examen_interface__srv__Kinematics_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!examen_interface__srv__Kinematics_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          examen_interface__srv__Kinematics_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!examen_interface__srv__Kinematics_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
