// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from limitswitch:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "limitswitch/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "limitswitch/msg/detail/target_coordinates__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_limitswitch
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  limitswitch::msg::TargetCoordinates & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_limitswitch
get_serialized_size(
  const limitswitch::msg::TargetCoordinates & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_limitswitch
max_serialized_size_TargetCoordinates(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace limitswitch

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_limitswitch
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, limitswitch, msg, TargetCoordinates)();

#ifdef __cplusplus
}
#endif

#endif  // LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
