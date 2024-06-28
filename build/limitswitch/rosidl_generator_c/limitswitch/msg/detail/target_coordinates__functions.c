// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from limitswitch:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice
#include "limitswitch/msg/detail/target_coordinates__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
limitswitch__msg__TargetCoordinates__init(limitswitch__msg__TargetCoordinates * msg)
{
  if (!msg) {
    return false;
  }
  // rail
  // front_left
  // front_right
  return true;
}

void
limitswitch__msg__TargetCoordinates__fini(limitswitch__msg__TargetCoordinates * msg)
{
  if (!msg) {
    return;
  }
  // rail
  // front_left
  // front_right
}

bool
limitswitch__msg__TargetCoordinates__are_equal(const limitswitch__msg__TargetCoordinates * lhs, const limitswitch__msg__TargetCoordinates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rail
  if (lhs->rail != rhs->rail) {
    return false;
  }
  // front_left
  if (lhs->front_left != rhs->front_left) {
    return false;
  }
  // front_right
  if (lhs->front_right != rhs->front_right) {
    return false;
  }
  return true;
}

bool
limitswitch__msg__TargetCoordinates__copy(
  const limitswitch__msg__TargetCoordinates * input,
  limitswitch__msg__TargetCoordinates * output)
{
  if (!input || !output) {
    return false;
  }
  // rail
  output->rail = input->rail;
  // front_left
  output->front_left = input->front_left;
  // front_right
  output->front_right = input->front_right;
  return true;
}

limitswitch__msg__TargetCoordinates *
limitswitch__msg__TargetCoordinates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limitswitch__msg__TargetCoordinates * msg = (limitswitch__msg__TargetCoordinates *)allocator.allocate(sizeof(limitswitch__msg__TargetCoordinates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limitswitch__msg__TargetCoordinates));
  bool success = limitswitch__msg__TargetCoordinates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limitswitch__msg__TargetCoordinates__destroy(limitswitch__msg__TargetCoordinates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limitswitch__msg__TargetCoordinates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limitswitch__msg__TargetCoordinates__Sequence__init(limitswitch__msg__TargetCoordinates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limitswitch__msg__TargetCoordinates * data = NULL;

  if (size) {
    data = (limitswitch__msg__TargetCoordinates *)allocator.zero_allocate(size, sizeof(limitswitch__msg__TargetCoordinates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limitswitch__msg__TargetCoordinates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limitswitch__msg__TargetCoordinates__fini(&data[i - 1]);
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
limitswitch__msg__TargetCoordinates__Sequence__fini(limitswitch__msg__TargetCoordinates__Sequence * array)
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
      limitswitch__msg__TargetCoordinates__fini(&array->data[i]);
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

limitswitch__msg__TargetCoordinates__Sequence *
limitswitch__msg__TargetCoordinates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limitswitch__msg__TargetCoordinates__Sequence * array = (limitswitch__msg__TargetCoordinates__Sequence *)allocator.allocate(sizeof(limitswitch__msg__TargetCoordinates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limitswitch__msg__TargetCoordinates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limitswitch__msg__TargetCoordinates__Sequence__destroy(limitswitch__msg__TargetCoordinates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limitswitch__msg__TargetCoordinates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limitswitch__msg__TargetCoordinates__Sequence__are_equal(const limitswitch__msg__TargetCoordinates__Sequence * lhs, const limitswitch__msg__TargetCoordinates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limitswitch__msg__TargetCoordinates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limitswitch__msg__TargetCoordinates__Sequence__copy(
  const limitswitch__msg__TargetCoordinates__Sequence * input,
  limitswitch__msg__TargetCoordinates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limitswitch__msg__TargetCoordinates);
    limitswitch__msg__TargetCoordinates * data =
      (limitswitch__msg__TargetCoordinates *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limitswitch__msg__TargetCoordinates__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          limitswitch__msg__TargetCoordinates__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limitswitch__msg__TargetCoordinates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
