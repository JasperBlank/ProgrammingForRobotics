// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_image_messages:msg/BallOutput.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BALL_OUTPUT__STRUCT_H_
#define ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BALL_OUTPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BallOutput in the package robot_image_messages.
/**
  * Bounding box
  * Coordinates of top left corner
 */
typedef struct robot_image_messages__msg__BallOutput
{
  int32_t top_left[2];
  /// Coordinates of bottom right corner
  int32_t bottom_right[2];
  /// Check ball's presence
  bool ball_check;
} robot_image_messages__msg__BallOutput;

// Struct for a sequence of robot_image_messages__msg__BallOutput.
typedef struct robot_image_messages__msg__BallOutput__Sequence
{
  robot_image_messages__msg__BallOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_image_messages__msg__BallOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BALL_OUTPUT__STRUCT_H_
