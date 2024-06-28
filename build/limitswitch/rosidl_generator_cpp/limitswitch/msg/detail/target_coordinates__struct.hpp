// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from limitswitch:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__STRUCT_HPP_
#define LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__limitswitch__msg__TargetCoordinates __attribute__((deprecated))
#else
# define DEPRECATED__limitswitch__msg__TargetCoordinates __declspec(deprecated)
#endif

namespace limitswitch
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetCoordinates_
{
  using Type = TargetCoordinates_<ContainerAllocator>;

  explicit TargetCoordinates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rail = false;
      this->front_left = false;
      this->front_right = false;
    }
  }

  explicit TargetCoordinates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rail = false;
      this->front_left = false;
      this->front_right = false;
    }
  }

  // field types and members
  using _rail_type =
    bool;
  _rail_type rail;
  using _front_left_type =
    bool;
  _front_left_type front_left;
  using _front_right_type =
    bool;
  _front_right_type front_right;

  // setters for named parameter idiom
  Type & set__rail(
    const bool & _arg)
  {
    this->rail = _arg;
    return *this;
  }
  Type & set__front_left(
    const bool & _arg)
  {
    this->front_left = _arg;
    return *this;
  }
  Type & set__front_right(
    const bool & _arg)
  {
    this->front_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    limitswitch::msg::TargetCoordinates_<ContainerAllocator> *;
  using ConstRawPtr =
    const limitswitch::msg::TargetCoordinates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<limitswitch::msg::TargetCoordinates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<limitswitch::msg::TargetCoordinates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      limitswitch::msg::TargetCoordinates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<limitswitch::msg::TargetCoordinates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      limitswitch::msg::TargetCoordinates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<limitswitch::msg::TargetCoordinates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<limitswitch::msg::TargetCoordinates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<limitswitch::msg::TargetCoordinates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__limitswitch__msg__TargetCoordinates
    std::shared_ptr<limitswitch::msg::TargetCoordinates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__limitswitch__msg__TargetCoordinates
    std::shared_ptr<limitswitch::msg::TargetCoordinates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetCoordinates_ & other) const
  {
    if (this->rail != other.rail) {
      return false;
    }
    if (this->front_left != other.front_left) {
      return false;
    }
    if (this->front_right != other.front_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetCoordinates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetCoordinates_

// alias to use template instance with default allocator
using TargetCoordinates =
  limitswitch::msg::TargetCoordinates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace limitswitch

#endif  // LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__STRUCT_HPP_
