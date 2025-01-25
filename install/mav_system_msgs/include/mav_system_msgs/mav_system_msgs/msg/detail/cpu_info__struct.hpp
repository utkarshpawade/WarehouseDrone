// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mav_system_msgs:msg/CpuInfo.idl
// generated code does not contain a copyright notice

#ifndef MAV_SYSTEM_MSGS__MSG__DETAIL__CPU_INFO__STRUCT_HPP_
#define MAV_SYSTEM_MSGS__MSG__DETAIL__CPU_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'heaviest_processes'
#include "mav_system_msgs/msg/detail/process_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mav_system_msgs__msg__CpuInfo __attribute__((deprecated))
#else
# define DEPRECATED__mav_system_msgs__msg__CpuInfo __declspec(deprecated)
#endif

namespace mav_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CpuInfo_
{
  using Type = CpuInfo_<ContainerAllocator>;

  explicit CpuInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit CpuInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cpu_percent_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _cpu_percent_type cpu_percent;
  using _heaviest_processes_type =
    std::vector<mav_system_msgs::msg::ProcessInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mav_system_msgs::msg::ProcessInfo_<ContainerAllocator>>>;
  _heaviest_processes_type heaviest_processes;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cpu_percent(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->cpu_percent = _arg;
    return *this;
  }
  Type & set__heaviest_processes(
    const std::vector<mav_system_msgs::msg::ProcessInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mav_system_msgs::msg::ProcessInfo_<ContainerAllocator>>> & _arg)
  {
    this->heaviest_processes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mav_system_msgs::msg::CpuInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const mav_system_msgs::msg::CpuInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mav_system_msgs::msg::CpuInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mav_system_msgs::msg::CpuInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mav_system_msgs::msg::CpuInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mav_system_msgs::msg::CpuInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mav_system_msgs::msg::CpuInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mav_system_msgs::msg::CpuInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mav_system_msgs::msg::CpuInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mav_system_msgs::msg::CpuInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mav_system_msgs__msg__CpuInfo
    std::shared_ptr<mav_system_msgs::msg::CpuInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mav_system_msgs__msg__CpuInfo
    std::shared_ptr<mav_system_msgs::msg::CpuInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CpuInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cpu_percent != other.cpu_percent) {
      return false;
    }
    if (this->heaviest_processes != other.heaviest_processes) {
      return false;
    }
    return true;
  }
  bool operator!=(const CpuInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CpuInfo_

// alias to use template instance with default allocator
using CpuInfo =
  mav_system_msgs::msg::CpuInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mav_system_msgs

#endif  // MAV_SYSTEM_MSGS__MSG__DETAIL__CPU_INFO__STRUCT_HPP_
