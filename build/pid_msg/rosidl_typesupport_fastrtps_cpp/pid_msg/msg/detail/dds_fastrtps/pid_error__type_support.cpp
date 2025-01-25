// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from pid_msg:msg/PIDError.idl
// generated code does not contain a copyright notice
#include "pid_msg/msg/detail/pid_error__rosidl_typesupport_fastrtps_cpp.hpp"
#include "pid_msg/msg/detail/pid_error__struct.hpp"

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

namespace pid_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pid_msg
cdr_serialize(
  const pid_msg::msg::PIDError & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: roll_error
  cdr << ros_message.roll_error;
  // Member: pitch_error
  cdr << ros_message.pitch_error;
  // Member: throttle_error
  cdr << ros_message.throttle_error;
  // Member: yaw_error
  cdr << ros_message.yaw_error;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pid_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pid_msg::msg::PIDError & ros_message)
{
  // Member: roll_error
  cdr >> ros_message.roll_error;

  // Member: pitch_error
  cdr >> ros_message.pitch_error;

  // Member: throttle_error
  cdr >> ros_message.throttle_error;

  // Member: yaw_error
  cdr >> ros_message.yaw_error;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pid_msg
get_serialized_size(
  const pid_msg::msg::PIDError & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: roll_error
  {
    size_t item_size = sizeof(ros_message.roll_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_error
  {
    size_t item_size = sizeof(ros_message.pitch_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_error
  {
    size_t item_size = sizeof(ros_message.throttle_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_error
  {
    size_t item_size = sizeof(ros_message.yaw_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pid_msg
max_serialized_size_PIDError(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: roll_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: throttle_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pid_msg::msg::PIDError;
    is_plain =
      (
      offsetof(DataType, yaw_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PIDError__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pid_msg::msg::PIDError *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PIDError__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pid_msg::msg::PIDError *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PIDError__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pid_msg::msg::PIDError *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PIDError__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PIDError(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PIDError__callbacks = {
  "pid_msg::msg",
  "PIDError",
  _PIDError__cdr_serialize,
  _PIDError__cdr_deserialize,
  _PIDError__get_serialized_size,
  _PIDError__max_serialized_size
};

static rosidl_message_type_support_t _PIDError__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PIDError__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pid_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pid_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<pid_msg::msg::PIDError>()
{
  return &pid_msg::msg::typesupport_fastrtps_cpp::_PIDError__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pid_msg, msg, PIDError)() {
  return &pid_msg::msg::typesupport_fastrtps_cpp::_PIDError__handle;
}

#ifdef __cplusplus
}
#endif
