// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ball_detection_message:msg/BallOutput.idl
// generated code does not contain a copyright notice

#ifndef BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__STRUCT_H_
#define BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BallOutput in the package ball_detection_message.
/**
  * Bounding box
 */
typedef struct ball_detection_message__msg__BallOutput
{
  /// x coordinate of corner 1
  uint32_t x_1;
  /// y coordinate of corner 1
  uint32_t y_1;
  /// x coordinate of corner 2
  uint32_t x_2;
  /// y coordinate of corner 2
  uint32_t y_2;
  /// Check ball's presence
  bool ball_check;
} ball_detection_message__msg__BallOutput;

// Struct for a sequence of ball_detection_message__msg__BallOutput.
typedef struct ball_detection_message__msg__BallOutput__Sequence
{
  ball_detection_message__msg__BallOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ball_detection_message__msg__BallOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__STRUCT_H_
