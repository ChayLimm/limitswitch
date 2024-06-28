// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from limitswitch:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice
#include "limitswitch/msg/detail/target_coordinates__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "limitswitch/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "limitswitch/msg/detail/target_coordinates__struct.h"
#include "limitswitch/msg/detail/target_coordinates__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TargetCoordinates__ros_msg_type = limitswitch__msg__TargetCoordinates;

static bool _TargetCoordinates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TargetCoordinates__ros_msg_type * ros_message = static_cast<const _TargetCoordinates__ros_msg_type *>(untyped_ros_message);
  // Field name: rail
  {
    cdr << (ros_message->rail ? true : false);
  }

  // Field name: front_left
  {
    cdr << (ros_message->front_left ? true : false);
  }

  // Field name: front_right
  {
    cdr << (ros_message->front_right ? true : false);
  }

  return true;
}

static bool _TargetCoordinates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TargetCoordinates__ros_msg_type * ros_message = static_cast<_TargetCoordinates__ros_msg_type *>(untyped_ros_message);
  // Field name: rail
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rail = tmp ? true : false;
  }

  // Field name: front_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->front_left = tmp ? true : false;
  }

  // Field name: front_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->front_right = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_limitswitch
size_t get_serialized_size_limitswitch__msg__TargetCoordinates(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TargetCoordinates__ros_msg_type * ros_message = static_cast<const _TargetCoordinates__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rail
  {
    size_t item_size = sizeof(ros_message->rail);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_left
  {
    size_t item_size = sizeof(ros_message->front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_right
  {
    size_t item_size = sizeof(ros_message->front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TargetCoordinates__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_limitswitch__msg__TargetCoordinates(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_limitswitch
size_t max_serialized_size_limitswitch__msg__TargetCoordinates(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: rail
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: front_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: front_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TargetCoordinates__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_limitswitch__msg__TargetCoordinates(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TargetCoordinates = {
  "limitswitch::msg",
  "TargetCoordinates",
  _TargetCoordinates__cdr_serialize,
  _TargetCoordinates__cdr_deserialize,
  _TargetCoordinates__get_serialized_size,
  _TargetCoordinates__max_serialized_size
};

static rosidl_message_type_support_t _TargetCoordinates__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TargetCoordinates,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, limitswitch, msg, TargetCoordinates)() {
  return &_TargetCoordinates__type_support;
}

#if defined(__cplusplus)
}
#endif
