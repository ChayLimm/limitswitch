// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from limitswitch:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice
#include "limitswitch/msg/detail/target_coordinates__rosidl_typesupport_fastrtps_cpp.hpp"
#include "limitswitch/msg/detail/target_coordinates__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace limitswitch
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_limitswitch
cdr_serialize(
  const limitswitch::msg::TargetCoordinates & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rail
  cdr << (ros_message.rail ? true : false);
  // Member: front_left
  cdr << (ros_message.front_left ? true : false);
  // Member: front_right
  cdr << (ros_message.front_right ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_limitswitch
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  limitswitch::msg::TargetCoordinates & ros_message)
{
  // Member: rail
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rail = tmp ? true : false;
  }

  // Member: front_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.front_left = tmp ? true : false;
  }

  // Member: front_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.front_right = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_limitswitch
get_serialized_size(
  const limitswitch::msg::TargetCoordinates & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rail
  {
    size_t item_size = sizeof(ros_message.rail);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_left
  {
    size_t item_size = sizeof(ros_message.front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_right
  {
    size_t item_size = sizeof(ros_message.front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_limitswitch
max_serialized_size_TargetCoordinates(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: rail
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: front_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: front_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _TargetCoordinates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const limitswitch::msg::TargetCoordinates *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TargetCoordinates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<limitswitch::msg::TargetCoordinates *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TargetCoordinates__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const limitswitch::msg::TargetCoordinates *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TargetCoordinates__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TargetCoordinates(full_bounded, 0);
}

static message_type_support_callbacks_t _TargetCoordinates__callbacks = {
  "limitswitch::msg",
  "TargetCoordinates",
  _TargetCoordinates__cdr_serialize,
  _TargetCoordinates__cdr_deserialize,
  _TargetCoordinates__get_serialized_size,
  _TargetCoordinates__max_serialized_size
};

static rosidl_message_type_support_t _TargetCoordinates__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TargetCoordinates__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace limitswitch

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_limitswitch
const rosidl_message_type_support_t *
get_message_type_support_handle<limitswitch::msg::TargetCoordinates>()
{
  return &limitswitch::msg::typesupport_fastrtps_cpp::_TargetCoordinates__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, limitswitch, msg, TargetCoordinates)() {
  return &limitswitch::msg::typesupport_fastrtps_cpp::_TargetCoordinates__handle;
}

#ifdef __cplusplus
}
#endif
