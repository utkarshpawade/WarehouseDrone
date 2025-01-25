// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from swift_msgs:msg/SwiftMsgs.idl
// generated code does not contain a copyright notice
#include "swift_msgs/msg/detail/swift_msgs__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "swift_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "swift_msgs/msg/detail/swift_msgs__struct.h"
#include "swift_msgs/msg/detail/swift_msgs__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SwiftMsgs__ros_msg_type = swift_msgs__msg__SwiftMsgs;

static bool _SwiftMsgs__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SwiftMsgs__ros_msg_type * ros_message = static_cast<const _SwiftMsgs__ros_msg_type *>(untyped_ros_message);
  // Field name: rc_roll
  {
    cdr << ros_message->rc_roll;
  }

  // Field name: rc_pitch
  {
    cdr << ros_message->rc_pitch;
  }

  // Field name: rc_yaw
  {
    cdr << ros_message->rc_yaw;
  }

  // Field name: rc_throttle
  {
    cdr << ros_message->rc_throttle;
  }

  // Field name: rc_aux1
  {
    cdr << ros_message->rc_aux1;
  }

  // Field name: rc_aux2
  {
    cdr << ros_message->rc_aux2;
  }

  // Field name: rc_aux3
  {
    cdr << ros_message->rc_aux3;
  }

  // Field name: rc_aux4
  {
    cdr << ros_message->rc_aux4;
  }

  // Field name: drone_index
  {
    cdr << ros_message->drone_index;
  }

  return true;
}

static bool _SwiftMsgs__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SwiftMsgs__ros_msg_type * ros_message = static_cast<_SwiftMsgs__ros_msg_type *>(untyped_ros_message);
  // Field name: rc_roll
  {
    cdr >> ros_message->rc_roll;
  }

  // Field name: rc_pitch
  {
    cdr >> ros_message->rc_pitch;
  }

  // Field name: rc_yaw
  {
    cdr >> ros_message->rc_yaw;
  }

  // Field name: rc_throttle
  {
    cdr >> ros_message->rc_throttle;
  }

  // Field name: rc_aux1
  {
    cdr >> ros_message->rc_aux1;
  }

  // Field name: rc_aux2
  {
    cdr >> ros_message->rc_aux2;
  }

  // Field name: rc_aux3
  {
    cdr >> ros_message->rc_aux3;
  }

  // Field name: rc_aux4
  {
    cdr >> ros_message->rc_aux4;
  }

  // Field name: drone_index
  {
    cdr >> ros_message->drone_index;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swift_msgs
size_t get_serialized_size_swift_msgs__msg__SwiftMsgs(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SwiftMsgs__ros_msg_type * ros_message = static_cast<const _SwiftMsgs__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rc_roll
  {
    size_t item_size = sizeof(ros_message->rc_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_pitch
  {
    size_t item_size = sizeof(ros_message->rc_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_yaw
  {
    size_t item_size = sizeof(ros_message->rc_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_throttle
  {
    size_t item_size = sizeof(ros_message->rc_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_aux1
  {
    size_t item_size = sizeof(ros_message->rc_aux1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_aux2
  {
    size_t item_size = sizeof(ros_message->rc_aux2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_aux3
  {
    size_t item_size = sizeof(ros_message->rc_aux3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_aux4
  {
    size_t item_size = sizeof(ros_message->rc_aux4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drone_index
  {
    size_t item_size = sizeof(ros_message->drone_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SwiftMsgs__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_swift_msgs__msg__SwiftMsgs(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swift_msgs
size_t max_serialized_size_swift_msgs__msg__SwiftMsgs(
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

  // member: rc_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc_throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc_aux1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc_aux2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc_aux3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc_aux4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: drone_index
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
    using DataType = swift_msgs__msg__SwiftMsgs;
    is_plain =
      (
      offsetof(DataType, drone_index) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SwiftMsgs__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_swift_msgs__msg__SwiftMsgs(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SwiftMsgs = {
  "swift_msgs::msg",
  "SwiftMsgs",
  _SwiftMsgs__cdr_serialize,
  _SwiftMsgs__cdr_deserialize,
  _SwiftMsgs__get_serialized_size,
  _SwiftMsgs__max_serialized_size
};

static rosidl_message_type_support_t _SwiftMsgs__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SwiftMsgs,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swift_msgs, msg, SwiftMsgs)() {
  return &_SwiftMsgs__type_support;
}

#if defined(__cplusplus)
}
#endif
