// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robot_image_messages:msg/BallOutput.idl
// generated code does not contain a copyright notice
#include "robot_image_messages/msg/detail/ball_output__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robot_image_messages/msg/detail/ball_output__struct.hpp"

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

namespace robot_image_messages
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_image_messages
cdr_serialize(
  const robot_image_messages::msg::BallOutput & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: top_left
  {
    cdr << ros_message.top_left;
  }
  // Member: bottom_right
  {
    cdr << ros_message.bottom_right;
  }
  // Member: ball_check
  cdr << (ros_message.ball_check ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_image_messages
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robot_image_messages::msg::BallOutput & ros_message)
{
  // Member: top_left
  {
    cdr >> ros_message.top_left;
  }

  // Member: bottom_right
  {
    cdr >> ros_message.bottom_right;
  }

  // Member: ball_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ball_check = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_image_messages
get_serialized_size(
  const robot_image_messages::msg::BallOutput & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: top_left
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.top_left[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bottom_right
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.bottom_right[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ball_check
  {
    size_t item_size = sizeof(ros_message.ball_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_image_messages
max_serialized_size_BallOutput(
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


  // Member: top_left
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bottom_right
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ball_check
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robot_image_messages::msg::BallOutput;
    is_plain =
      (
      offsetof(DataType, ball_check) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _BallOutput__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robot_image_messages::msg::BallOutput *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BallOutput__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robot_image_messages::msg::BallOutput *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BallOutput__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robot_image_messages::msg::BallOutput *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BallOutput__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BallOutput(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BallOutput__callbacks = {
  "robot_image_messages::msg",
  "BallOutput",
  _BallOutput__cdr_serialize,
  _BallOutput__cdr_deserialize,
  _BallOutput__get_serialized_size,
  _BallOutput__max_serialized_size
};

static rosidl_message_type_support_t _BallOutput__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BallOutput__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robot_image_messages

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robot_image_messages
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_image_messages::msg::BallOutput>()
{
  return &robot_image_messages::msg::typesupport_fastrtps_cpp::_BallOutput__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_image_messages, msg, BallOutput)() {
  return &robot_image_messages::msg::typesupport_fastrtps_cpp::_BallOutput__handle;
}

#ifdef __cplusplus
}
#endif
