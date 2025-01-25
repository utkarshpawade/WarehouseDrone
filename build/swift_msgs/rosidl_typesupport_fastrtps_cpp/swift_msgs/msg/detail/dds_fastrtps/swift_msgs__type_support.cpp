// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from swift_msgs:msg/SwiftMsgs.idl
// generated code does not contain a copyright notice
#include "swift_msgs/msg/detail/swift_msgs__rosidl_typesupport_fastrtps_cpp.hpp"
#include "swift_msgs/msg/detail/swift_msgs__struct.hpp"

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

namespace swift_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_swift_msgs
cdr_serialize(
  const swift_msgs::msg::SwiftMsgs & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rc_roll
  cdr << ros_message.rc_roll;
  // Member: rc_pitch
  cdr << ros_message.rc_pitch;
  // Member: rc_yaw
  cdr << ros_message.rc_yaw;
  // Member: rc_throttle
  cdr << ros_message.rc_throttle;
  // Member: rc_aux1
  cdr << ros_message.rc_aux1;
  // Member: rc_aux2
  cdr << ros_message.rc_aux2;
  // Member: rc_aux3
  cdr << ros_message.rc_aux3;
  // Member: rc_aux4
  cdr << ros_message.rc_aux4;
  // Member: drone_index
  cdr << ros_message.drone_index;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_swift_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  swift_msgs::msg::SwiftMsgs & ros_message)
{
  // Member: rc_roll
  cdr >> ros_message.rc_roll;

  // Member: rc_pitch
  cdr >> ros_message.rc_pitch;

  // Member: rc_yaw
  cdr >> ros_message.rc_yaw;

  // Member: rc_throttle
  cdr >> ros_message.rc_throttle;

  // Member: rc_aux1
  cdr >> ros_message.rc_aux1;

  // Member: rc_aux2
  cdr >> ros_message.rc_aux2;

  // Member: rc_aux3
  cdr >> ros_message.rc_aux3;

  // Member: rc_aux4
  cdr >> ros_message.rc_aux4;

  // Member: drone_index
  cdr >> ros_message.drone_index;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_swift_msgs
get_serialized_size(
  const swift_msgs::msg::SwiftMsgs & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rc_roll
  {
    size_t item_size = sizeof(ros_message.rc_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_pitch
  {
    size_t item_size = sizeof(ros_message.rc_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_yaw
  {
    size_t item_size = sizeof(ros_message.rc_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_throttle
  {
    size_t item_size = sizeof(ros_message.rc_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_aux1
  {
    size_t item_size = sizeof(ros_message.rc_aux1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_aux2
  {
    size_t item_size = sizeof(ros_message.rc_aux2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_aux3
  {
    size_t item_size = sizeof(ros_message.rc_aux3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_aux4
  {
    size_t item_size = sizeof(ros_message.rc_aux4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drone_index
  {
    size_t item_size = sizeof(ros_message.drone_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_swift_msgs
max_serialized_size_SwiftMsgs(
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


  // Member: rc_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rc_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rc_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rc_throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rc_aux1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rc_aux2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rc_aux3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rc_aux4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: drone_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swift_msgs::msg::SwiftMsgs;
    is_plain =
      (
      offsetof(DataType, drone_index) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SwiftMsgs__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const swift_msgs::msg::SwiftMsgs *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SwiftMsgs__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<swift_msgs::msg::SwiftMsgs *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SwiftMsgs__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const swift_msgs::msg::SwiftMsgs *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SwiftMsgs__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SwiftMsgs(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SwiftMsgs__callbacks = {
  "swift_msgs::msg",
  "SwiftMsgs",
  _SwiftMsgs__cdr_serialize,
  _SwiftMsgs__cdr_deserialize,
  _SwiftMsgs__get_serialized_size,
  _SwiftMsgs__max_serialized_size
};

static rosidl_message_type_support_t _SwiftMsgs__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SwiftMsgs__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace swift_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_swift_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<swift_msgs::msg::SwiftMsgs>()
{
  return &swift_msgs::msg::typesupport_fastrtps_cpp::_SwiftMsgs__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swift_msgs, msg, SwiftMsgs)() {
  return &swift_msgs::msg::typesupport_fastrtps_cpp::_SwiftMsgs__handle;
}

#ifdef __cplusplus
}
#endif
