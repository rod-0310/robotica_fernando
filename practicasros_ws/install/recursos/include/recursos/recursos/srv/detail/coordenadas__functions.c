// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from recursos:srv/Coordenadas.idl
// generated code does not contain a copyright notice
#include "recursos/srv/detail/coordenadas__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
recursos__srv__Coordenadas_Request__init(recursos__srv__Coordenadas_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x1
  // y1
  // x2
  // y2
  return true;
}

void
recursos__srv__Coordenadas_Request__fini(recursos__srv__Coordenadas_Request * msg)
{
  if (!msg) {
    return;
  }
  // x1
  // y1
  // x2
  // y2
}

bool
recursos__srv__Coordenadas_Request__are_equal(const recursos__srv__Coordenadas_Request * lhs, const recursos__srv__Coordenadas_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x1
  if (lhs->x1 != rhs->x1) {
    return false;
  }
  // y1
  if (lhs->y1 != rhs->y1) {
    return false;
  }
  // x2
  if (lhs->x2 != rhs->x2) {
    return false;
  }
  // y2
  if (lhs->y2 != rhs->y2) {
    return false;
  }
  return true;
}

bool
recursos__srv__Coordenadas_Request__copy(
  const recursos__srv__Coordenadas_Request * input,
  recursos__srv__Coordenadas_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x1
  output->x1 = input->x1;
  // y1
  output->y1 = input->y1;
  // x2
  output->x2 = input->x2;
  // y2
  output->y2 = input->y2;
  return true;
}

recursos__srv__Coordenadas_Request *
recursos__srv__Coordenadas_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  recursos__srv__Coordenadas_Request * msg = (recursos__srv__Coordenadas_Request *)allocator.allocate(sizeof(recursos__srv__Coordenadas_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(recursos__srv__Coordenadas_Request));
  bool success = recursos__srv__Coordenadas_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
recursos__srv__Coordenadas_Request__destroy(recursos__srv__Coordenadas_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    recursos__srv__Coordenadas_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
recursos__srv__Coordenadas_Request__Sequence__init(recursos__srv__Coordenadas_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  recursos__srv__Coordenadas_Request * data = NULL;

  if (size) {
    data = (recursos__srv__Coordenadas_Request *)allocator.zero_allocate(size, sizeof(recursos__srv__Coordenadas_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = recursos__srv__Coordenadas_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        recursos__srv__Coordenadas_Request__fini(&data[i - 1]);
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
recursos__srv__Coordenadas_Request__Sequence__fini(recursos__srv__Coordenadas_Request__Sequence * array)
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
      recursos__srv__Coordenadas_Request__fini(&array->data[i]);
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

recursos__srv__Coordenadas_Request__Sequence *
recursos__srv__Coordenadas_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  recursos__srv__Coordenadas_Request__Sequence * array = (recursos__srv__Coordenadas_Request__Sequence *)allocator.allocate(sizeof(recursos__srv__Coordenadas_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = recursos__srv__Coordenadas_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
recursos__srv__Coordenadas_Request__Sequence__destroy(recursos__srv__Coordenadas_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    recursos__srv__Coordenadas_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
recursos__srv__Coordenadas_Request__Sequence__are_equal(const recursos__srv__Coordenadas_Request__Sequence * lhs, const recursos__srv__Coordenadas_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!recursos__srv__Coordenadas_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
recursos__srv__Coordenadas_Request__Sequence__copy(
  const recursos__srv__Coordenadas_Request__Sequence * input,
  recursos__srv__Coordenadas_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(recursos__srv__Coordenadas_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    recursos__srv__Coordenadas_Request * data =
      (recursos__srv__Coordenadas_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!recursos__srv__Coordenadas_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          recursos__srv__Coordenadas_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!recursos__srv__Coordenadas_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
recursos__srv__Coordenadas_Response__init(recursos__srv__Coordenadas_Response * msg)
{
  if (!msg) {
    return false;
  }
  // xm
  // ym
  return true;
}

void
recursos__srv__Coordenadas_Response__fini(recursos__srv__Coordenadas_Response * msg)
{
  if (!msg) {
    return;
  }
  // xm
  // ym
}

bool
recursos__srv__Coordenadas_Response__are_equal(const recursos__srv__Coordenadas_Response * lhs, const recursos__srv__Coordenadas_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // xm
  if (lhs->xm != rhs->xm) {
    return false;
  }
  // ym
  if (lhs->ym != rhs->ym) {
    return false;
  }
  return true;
}

bool
recursos__srv__Coordenadas_Response__copy(
  const recursos__srv__Coordenadas_Response * input,
  recursos__srv__Coordenadas_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // xm
  output->xm = input->xm;
  // ym
  output->ym = input->ym;
  return true;
}

recursos__srv__Coordenadas_Response *
recursos__srv__Coordenadas_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  recursos__srv__Coordenadas_Response * msg = (recursos__srv__Coordenadas_Response *)allocator.allocate(sizeof(recursos__srv__Coordenadas_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(recursos__srv__Coordenadas_Response));
  bool success = recursos__srv__Coordenadas_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
recursos__srv__Coordenadas_Response__destroy(recursos__srv__Coordenadas_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    recursos__srv__Coordenadas_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
recursos__srv__Coordenadas_Response__Sequence__init(recursos__srv__Coordenadas_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  recursos__srv__Coordenadas_Response * data = NULL;

  if (size) {
    data = (recursos__srv__Coordenadas_Response *)allocator.zero_allocate(size, sizeof(recursos__srv__Coordenadas_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = recursos__srv__Coordenadas_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        recursos__srv__Coordenadas_Response__fini(&data[i - 1]);
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
recursos__srv__Coordenadas_Response__Sequence__fini(recursos__srv__Coordenadas_Response__Sequence * array)
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
      recursos__srv__Coordenadas_Response__fini(&array->data[i]);
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

recursos__srv__Coordenadas_Response__Sequence *
recursos__srv__Coordenadas_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  recursos__srv__Coordenadas_Response__Sequence * array = (recursos__srv__Coordenadas_Response__Sequence *)allocator.allocate(sizeof(recursos__srv__Coordenadas_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = recursos__srv__Coordenadas_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
recursos__srv__Coordenadas_Response__Sequence__destroy(recursos__srv__Coordenadas_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    recursos__srv__Coordenadas_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
recursos__srv__Coordenadas_Response__Sequence__are_equal(const recursos__srv__Coordenadas_Response__Sequence * lhs, const recursos__srv__Coordenadas_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!recursos__srv__Coordenadas_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
recursos__srv__Coordenadas_Response__Sequence__copy(
  const recursos__srv__Coordenadas_Response__Sequence * input,
  recursos__srv__Coordenadas_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(recursos__srv__Coordenadas_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    recursos__srv__Coordenadas_Response * data =
      (recursos__srv__Coordenadas_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!recursos__srv__Coordenadas_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          recursos__srv__Coordenadas_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!recursos__srv__Coordenadas_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
