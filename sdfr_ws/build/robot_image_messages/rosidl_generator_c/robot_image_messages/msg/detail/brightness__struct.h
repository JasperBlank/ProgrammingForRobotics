// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_image_messages:msg/Brightness.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BRIGHTNESS__STRUCT_H_
#define ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BRIGHTNESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'brightness_classification'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Brightness in the package robot_image_messages.
typedef struct robot_image_messages__msg__Brightness
{
  uint8_t brightness_level;
  rosidl_runtime_c__String brightness_classification;
} robot_image_messages__msg__Brightness;

// Struct for a sequence of robot_image_messages__msg__Brightness.
typedef struct robot_image_messages__msg__Brightness__Sequence
{
  robot_image_messages__msg__Brightness * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_image_messages__msg__Brightness__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BRIGHTNESS__STRUCT_H_
