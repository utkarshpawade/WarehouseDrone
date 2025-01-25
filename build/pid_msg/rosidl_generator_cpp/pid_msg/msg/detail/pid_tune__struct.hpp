// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pid_msg:msg/PIDTune.idl
// generated code does not contain a copyright notice

#ifndef PID_MSG__MSG__DETAIL__PID_TUNE__STRUCT_HPP_
#define PID_MSG__MSG__DETAIL__PID_TUNE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pid_msg__msg__PIDTune __attribute__((deprecated))
#else
# define DEPRECATED__pid_msg__msg__PIDTune __declspec(deprecated)
#endif

namespace pid_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PIDTune_
{
  using Type = PIDTune_<ContainerAllocator>;

  explicit PIDTune_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp = 0;
      this->ki = 0;
      this->kd = 0;
    }
  }

  explicit PIDTune_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp = 0;
      this->ki = 0;
      this->kd = 0;
    }
  }

  // field types and members
  using _kp_type =
    int16_t;
  _kp_type kp;
  using _ki_type =
    int16_t;
  _ki_type ki;
  using _kd_type =
    int16_t;
  _kd_type kd;

  // setters for named parameter idiom
  Type & set__kp(
    const int16_t & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__ki(
    const int16_t & _arg)
  {
    this->ki = _arg;
    return *this;
  }
  Type & set__kd(
    const int16_t & _arg)
  {
    this->kd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pid_msg::msg::PIDTune_<ContainerAllocator> *;
  using ConstRawPtr =
    const pid_msg::msg::PIDTune_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pid_msg::msg::PIDTune_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pid_msg::msg::PIDTune_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pid_msg::msg::PIDTune_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pid_msg::msg::PIDTune_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pid_msg::msg::PIDTune_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pid_msg::msg::PIDTune_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pid_msg::msg::PIDTune_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pid_msg::msg::PIDTune_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pid_msg__msg__PIDTune
    std::shared_ptr<pid_msg::msg::PIDTune_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pid_msg__msg__PIDTune
    std::shared_ptr<pid_msg::msg::PIDTune_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PIDTune_ & other) const
  {
    if (this->kp != other.kp) {
      return false;
    }
    if (this->ki != other.ki) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    return true;
  }
  bool operator!=(const PIDTune_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PIDTune_

// alias to use template instance with default allocator
using PIDTune =
  pid_msg::msg::PIDTune_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pid_msg

#endif  // PID_MSG__MSG__DETAIL__PID_TUNE__STRUCT_HPP_
