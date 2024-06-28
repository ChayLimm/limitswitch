// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limitswitch:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__TRAITS_HPP_
#define LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__TRAITS_HPP_

#include "limitswitch/msg/detail/target_coordinates__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<limitswitch::msg::TargetCoordinates>()
{
  return "limitswitch::msg::TargetCoordinates";
}

template<>
inline const char * name<limitswitch::msg::TargetCoordinates>()
{
  return "limitswitch/msg/TargetCoordinates";
}

template<>
struct has_fixed_size<limitswitch::msg::TargetCoordinates>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<limitswitch::msg::TargetCoordinates>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<limitswitch::msg::TargetCoordinates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__TRAITS_HPP_
