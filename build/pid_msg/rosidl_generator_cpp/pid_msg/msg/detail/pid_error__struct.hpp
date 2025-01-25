// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pid_msg:msg/PIDError.idl
// generated code does not contain a copyright notice

#ifndef PID_MSG__MSG__DETAIL__PID_ERROR__STRUCT_HPP_
#define PID_MSG__MSG__DETAIL__PID_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pid_msg__msg__PIDError __attribute__((deprecated))
#else
# define DEPRECATED__pid_msg__msg__PIDError __declspec(deprecated)
#endif

namespace pid_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PIDError_
{
  using Type = PIDError_<ContainerAllocator>;

  explicit PIDError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll_error = 0.0f;
      this->pitch_error = 0.0f;
      this->throttle_error = 0.0f;
      this->yaw_error = 0.0f;
    }
  }

  explicit PIDError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll_error = 0.0f;
      this->pitch_error = 0.0f;
      this->throttle_error = 0.0f;
      this->yaw_error = 0.0f;
    }
  }

  // field types and members
  using _roll_error_type =
    float;
  _roll_error_type roll_error;
  using _pitch_error_type =
    float;
  _pitch_error_type pitch_error;
  using _throttle_error_type =
    float;
  _throttle_error_type throttle_error;
  using _yaw_error_type =
    float;
  _yaw_error_type yaw_error;

  // setters for named parameter idiom
  Type & set__roll_error(
    const float & _arg)
  {
    this->roll_error = _arg;
    return *this;
  }
  Type & set__pitch_error(
    const float & _arg)
  {
    this->pitch_error = _arg;
    return *this;
  }
  Type & set__throttle_error(
    const float & _arg)
  {
    this->throttle_error = _arg;
    return *this;
  }
  Type & set__yaw_error(
    const float & _arg)
  {
    this->yaw_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pid_msg::msg::PIDError_<ContainerAllocator> *;
  using ConstRawPtr =
    const pid_msg::msg::PIDError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pid_msg::msg::PIDError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pid_msg::msg::PIDError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pid_msg::msg::PIDError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pid_msg::msg::PIDError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pid_msg::msg::PIDError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pid_msg::msg::PIDError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pid_msg::msg::PIDError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pid_msg::msg::PIDError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pid_msg__msg__PIDError
    std::shared_ptr<pid_msg::msg::PIDError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pid_msg__msg__PIDError
    std::shared_ptr<pid_msg::msg::PIDError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PIDError_ & other) const
  {
    if (this->roll_error != other.roll_error) {
      return false;
    }
    if (this->pitch_error != other.pitch_error) {
      return false;
    }
    if (this->throttle_error != other.throttle_error) {
      return false;
    }
    if (this->yaw_error != other.yaw_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const PIDError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PIDError_

// alias to use template instance with default allocator
using PIDError =
  pid_msg::msg::PIDError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pid_msg

#endif  // PID_MSG__MSG__DETAIL__PID_ERROR__STRUCT_HPP_
