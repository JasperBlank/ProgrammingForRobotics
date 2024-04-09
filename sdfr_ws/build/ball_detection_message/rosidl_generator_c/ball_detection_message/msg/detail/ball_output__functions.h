// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ball_detection_message:msg/BallOutput.idl
// generated code does not contain a copyright notice

#ifndef BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__FUNCTIONS_H_
#define BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ball_detection_message/msg/rosidl_generator_c__visibility_control.h"

#include "ball_detection_message/msg/detail/ball_output__struct.h"

/// Initialize msg/BallOutput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ball_detection_message__msg__BallOutput
 * )) before or use
 * ball_detection_message__msg__BallOutput__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ball_detection_message
bool
ball_detection_message__msg__BallOutput__init(ball_detection_message__msg__BallOutput * msg);

/// Finalize msg/BallOutput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ball_detection_message
void
ball_detection_message__msg__BallOutput__fini(ball_detection_message__msg__BallOutput * msg);

/// Create msg/BallOutput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ball_detection_message__msg__BallOutput__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ball_detection_message
ball_detection_message__msg__BallOutput *
ball_detection_message__msg__BallOutput__create();

/// Destroy msg/BallOutput message.
/**
 * It calls
 * ball_detection_message__msg__BallOutput__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ball_detection_message
void
ball_detection_message__msg__BallOutput__destroy(ball_detection_message__msg__BallOutput * msg);

/// Check for msg/BallOutput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ball_detection_message
bool
ball_detection_message__msg__BallOutput__are_equal(const ball_detection_message__msg__BallOutput * lhs, const ball_detection_message__msg__BallOutput * rhs);

/// Copy a msg/BallOutput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ball_detection_message
bool
ball_detection_message__msg__BallOutput__copy(
  const ball_detection_message__msg__BallOutput * input,
  ball_detection_message__msg__BallOutput * output);

/// Initialize array of msg/BallOutput messages.
/**
 * It allocates the memory for the number of elements and calls
 * ball_detection_message__msg__BallOutput__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ball_detection_message
bool
ball_detection_message__msg__BallOutput__Sequence__init(ball_detection_message__msg__BallOutput__Sequence * array, size_t size);

/// Finalize array of msg/BallOutput messages.
/**
 * It calls
 * ball_detection_message__msg__BallOutput__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ball_detection_message
void
ball_detection_message__msg__BallOutput__Sequence__fini(ball_detection_message__msg__BallOutput__Sequence * array);

/// Create array of msg/BallOutput messages.
/**
 * It allocates the memory for the array and calls
 * ball_detection_message__msg__BallOutput__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ball_detection_message
ball_detection_message__msg__BallOutput__Sequence *
ball_detection_message__msg__BallOutput__Sequence__create(size_t size);

/// Destroy array of msg/BallOutput messages.
/**
 * It calls
 * ball_detection_message__msg__BallOutput__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ball_detection_message
void
ball_detection_message__msg__BallOutput__Sequence__destroy(ball_detection_message__msg__BallOutput__Sequence * array);

/// Check for msg/BallOutput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ball_detection_message
bool
ball_detection_message__msg__BallOutput__Sequence__are_equal(const ball_detection_message__msg__BallOutput__Sequence * lhs, const ball_detection_message__msg__BallOutput__Sequence * rhs);

/// Copy an array of msg/BallOutput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ball_detection_message
bool
ball_detection_message__msg__BallOutput__Sequence__copy(
  const ball_detection_message__msg__BallOutput__Sequence * input,
  ball_detection_message__msg__BallOutput__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__FUNCTIONS_H_
