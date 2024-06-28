// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from limitswitch:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__BUILDER_HPP_
#define LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__BUILDER_HPP_

#include "limitswitch/msg/detail/target_coordinates__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace limitswitch
{

namespace msg
{

namespace builder
{

class Init_TargetCoordinates_front_right
{
public:
  explicit Init_TargetCoordinates_front_right(::limitswitch::msg::TargetCoordinates & msg)
  : msg_(msg)
  {}
  ::limitswitch::msg::TargetCoordinates front_right(::limitswitch::msg::TargetCoordinates::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limitswitch::msg::TargetCoordinates msg_;
};

class Init_TargetCoordinates_front_left
{
public:
  explicit Init_TargetCoordinates_front_left(::limitswitch::msg::TargetCoordinates & msg)
  : msg_(msg)
  {}
  Init_TargetCoordinates_front_right front_left(::limitswitch::msg::TargetCoordinates::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_TargetCoordinates_front_right(msg_);
  }

private:
  ::limitswitch::msg::TargetCoordinates msg_;
};

class Init_TargetCoordinates_rail
{
public:
  Init_TargetCoordinates_rail()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetCoordinates_front_left rail(::limitswitch::msg::TargetCoordinates::_rail_type arg)
  {
    msg_.rail = std::move(arg);
    return Init_TargetCoordinates_front_left(msg_);
  }

private:
  ::limitswitch::msg::TargetCoordinates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::limitswitch::msg::TargetCoordinates>()
{
  return limitswitch::msg::builder::Init_TargetCoordinates_rail();
}

}  // namespace limitswitch

#endif  // LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__BUILDER_HPP_
