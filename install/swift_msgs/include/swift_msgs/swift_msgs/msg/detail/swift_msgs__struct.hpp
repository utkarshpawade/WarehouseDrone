// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swift_msgs:msg/SwiftMsgs.idl
// generated code does not contain a copyright notice

#ifndef SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__STRUCT_HPP_
#define SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__swift_msgs__msg__SwiftMsgs __attribute__((deprecated))
#else
# define DEPRECATED__swift_msgs__msg__SwiftMsgs __declspec(deprecated)
#endif

namespace swift_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SwiftMsgs_
{
  using Type = SwiftMsgs_<ContainerAllocator>;

  explicit SwiftMsgs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rc_roll = 0ll;
      this->rc_pitch = 0ll;
      this->rc_yaw = 0ll;
      this->rc_throttle = 0ll;
      this->rc_aux1 = 0ll;
      this->rc_aux2 = 0ll;
      this->rc_aux3 = 0ll;
      this->rc_aux4 = 0ll;
      this->drone_index = 0ll;
    }
  }

  explicit SwiftMsgs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rc_roll = 0ll;
      this->rc_pitch = 0ll;
      this->rc_yaw = 0ll;
      this->rc_throttle = 0ll;
      this->rc_aux1 = 0ll;
      this->rc_aux2 = 0ll;
      this->rc_aux3 = 0ll;
      this->rc_aux4 = 0ll;
      this->drone_index = 0ll;
    }
  }

  // field types and members
  using _rc_roll_type =
    int64_t;
  _rc_roll_type rc_roll;
  using _rc_pitch_type =
    int64_t;
  _rc_pitch_type rc_pitch;
  using _rc_yaw_type =
    int64_t;
  _rc_yaw_type rc_yaw;
  using _rc_throttle_type =
    int64_t;
  _rc_throttle_type rc_throttle;
  using _rc_aux1_type =
    int64_t;
  _rc_aux1_type rc_aux1;
  using _rc_aux2_type =
    int64_t;
  _rc_aux2_type rc_aux2;
  using _rc_aux3_type =
    int64_t;
  _rc_aux3_type rc_aux3;
  using _rc_aux4_type =
    int64_t;
  _rc_aux4_type rc_aux4;
  using _drone_index_type =
    int64_t;
  _drone_index_type drone_index;

  // setters for named parameter idiom
  Type & set__rc_roll(
    const int64_t & _arg)
  {
    this->rc_roll = _arg;
    return *this;
  }
  Type & set__rc_pitch(
    const int64_t & _arg)
  {
    this->rc_pitch = _arg;
    return *this;
  }
  Type & set__rc_yaw(
    const int64_t & _arg)
  {
    this->rc_yaw = _arg;
    return *this;
  }
  Type & set__rc_throttle(
    const int64_t & _arg)
  {
    this->rc_throttle = _arg;
    return *this;
  }
  Type & set__rc_aux1(
    const int64_t & _arg)
  {
    this->rc_aux1 = _arg;
    return *this;
  }
  Type & set__rc_aux2(
    const int64_t & _arg)
  {
    this->rc_aux2 = _arg;
    return *this;
  }
  Type & set__rc_aux3(
    const int64_t & _arg)
  {
    this->rc_aux3 = _arg;
    return *this;
  }
  Type & set__rc_aux4(
    const int64_t & _arg)
  {
    this->rc_aux4 = _arg;
    return *this;
  }
  Type & set__drone_index(
    const int64_t & _arg)
  {
    this->drone_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swift_msgs::msg::SwiftMsgs_<ContainerAllocator> *;
  using ConstRawPtr =
    const swift_msgs::msg::SwiftMsgs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swift_msgs::msg::SwiftMsgs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swift_msgs::msg::SwiftMsgs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swift_msgs::msg::SwiftMsgs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swift_msgs::msg::SwiftMsgs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swift_msgs::msg::SwiftMsgs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swift_msgs::msg::SwiftMsgs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swift_msgs::msg::SwiftMsgs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swift_msgs::msg::SwiftMsgs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swift_msgs__msg__SwiftMsgs
    std::shared_ptr<swift_msgs::msg::SwiftMsgs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swift_msgs__msg__SwiftMsgs
    std::shared_ptr<swift_msgs::msg::SwiftMsgs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwiftMsgs_ & other) const
  {
    if (this->rc_roll != other.rc_roll) {
      return false;
    }
    if (this->rc_pitch != other.rc_pitch) {
      return false;
    }
    if (this->rc_yaw != other.rc_yaw) {
      return false;
    }
    if (this->rc_throttle != other.rc_throttle) {
      return false;
    }
    if (this->rc_aux1 != other.rc_aux1) {
      return false;
    }
    if (this->rc_aux2 != other.rc_aux2) {
      return false;
    }
    if (this->rc_aux3 != other.rc_aux3) {
      return false;
    }
    if (this->rc_aux4 != other.rc_aux4) {
      return false;
    }
    if (this->drone_index != other.drone_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwiftMsgs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwiftMsgs_

// alias to use template instance with default allocator
using SwiftMsgs =
  swift_msgs::msg::SwiftMsgs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swift_msgs

#endif  // SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__STRUCT_HPP_
