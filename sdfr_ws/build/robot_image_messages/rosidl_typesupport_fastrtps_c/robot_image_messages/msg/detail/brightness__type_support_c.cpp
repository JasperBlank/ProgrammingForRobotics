// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robot_image_messages:msg/Brightness.idl
// generated code does not contain a copyright notice
#include "robot_image_messages/msg/detail/brightness__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robot_image_messages/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot_image_messages/msg/detail/brightness__struct.h"
#include "robot_image_messages/msg/detail/brightness__functions.h"
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

#include "rosidl_runtime_c/string.h"  // brightness_classification
#include "rosidl_runtime_c/string_functions.h"  // brightness_classification

// forward declare type support functions


using _Brightness__ros_msg_type = robot_image_messages__msg__Brightness;

static bool _Brightness__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Brightness__ros_msg_type * ros_message = static_cast<const _Brightness__ros_msg_type *>(untyped_ros_message);
  // Field name: brightness_level
  {
    cdr << ros_message->brightness_level;
  }

  // Field name: brightness_classification
  {
    const rosidl_runtime_c__String * str = &ros_message->brightness_classification;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Brightness__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Brightness__ros_msg_type * ros_message = static_cast<_Brightness__ros_msg_type *>(untyped_ros_message);
  // Field name: brightness_level
  {
    cdr >> ros_message->brightness_level;
  }

  // Field name: brightness_classification
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->brightness_classification.data) {
      rosidl_runtime_c__String__init(&ros_message->brightness_classification);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->brightness_classification,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'brightness_classification'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_image_messages
size_t get_serialized_size_robot_image_messages__msg__Brightness(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Brightness__ros_msg_type * ros_message = static_cast<const _Brightness__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name brightness_level
  {
    size_t item_size = sizeof(ros_message->brightness_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brightness_classification
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->brightness_classification.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Brightness__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robot_image_messages__msg__Brightness(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_image_messages
size_t max_serialized_size_robot_image_messages__msg__Brightness(
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

  // member: brightness_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brightness_classification
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robot_image_messages__msg__Brightness;
    is_plain =
      (
      offsetof(DataType, brightness_classification) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Brightness__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robot_image_messages__msg__Brightness(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Brightness = {
  "robot_image_messages::msg",
  "Brightness",
  _Brightness__cdr_serialize,
  _Brightness__cdr_deserialize,
  _Brightness__get_serialized_size,
  _Brightness__max_serialized_size
};

static rosidl_message_type_support_t _Brightness__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Brightness,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_image_messages, msg, Brightness)() {
  return &_Brightness__type_support;
}

#if defined(__cplusplus)
}
#endif
