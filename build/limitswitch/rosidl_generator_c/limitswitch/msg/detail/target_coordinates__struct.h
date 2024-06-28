// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from limitswitch:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__STRUCT_H_
#define LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TargetCoordinates in the package limitswitch.
typedef struct limitswitch__msg__TargetCoordinates
{
  bool rail;
  bool front_left;
  bool front_right;
} limitswitch__msg__TargetCoordinates;

// Struct for a sequence of limitswitch__msg__TargetCoordinates.
typedef struct limitswitch__msg__TargetCoordinates__Sequence
{
  limitswitch__msg__TargetCoordinates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limitswitch__msg__TargetCoordinates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__STRUCT_H_
