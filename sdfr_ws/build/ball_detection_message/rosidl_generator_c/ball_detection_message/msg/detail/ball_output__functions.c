// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ball_detection_message:msg/BallOutput.idl
// generated code does not contain a copyright notice
#include "ball_detection_message/msg/detail/ball_output__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ball_detection_message__msg__BallOutput__init(ball_detection_message__msg__BallOutput * msg)
{
  if (!msg) {
    return false;
  }
  // x_1
  // y_1
  // x_2
  // y_2
  // ball_check
  return true;
}

void
ball_detection_message__msg__BallOutput__fini(ball_detection_message__msg__BallOutput * msg)
{
  if (!msg) {
    return;
  }
  // x_1
  // y_1
  // x_2
  // y_2
  // ball_check
}

bool
ball_detection_message__msg__BallOutput__are_equal(const ball_detection_message__msg__BallOutput * lhs, const ball_detection_message__msg__BallOutput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_1
  if (lhs->x_1 != rhs->x_1) {
    return false;
  }
  // y_1
  if (lhs->y_1 != rhs->y_1) {
    return false;
  }
  // x_2
  if (lhs->x_2 != rhs->x_2) {
    return false;
  }
  // y_2
  if (lhs->y_2 != rhs->y_2) {
    return false;
  }
  // ball_check
  if (lhs->ball_check != rhs->ball_check) {
    return false;
  }
  return true;
}

bool
ball_detection_message__msg__BallOutput__copy(
  const ball_detection_message__msg__BallOutput * input,
  ball_detection_message__msg__BallOutput * output)
{
  if (!input || !output) {
    return false;
  }
  // x_1
  output->x_1 = input->x_1;
  // y_1
  output->y_1 = input->y_1;
  // x_2
  output->x_2 = input->x_2;
  // y_2
  output->y_2 = input->y_2;
  // ball_check
  output->ball_check = input->ball_check;
  return true;
}

ball_detection_message__msg__BallOutput *
ball_detection_message__msg__BallOutput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ball_detection_message__msg__BallOutput * msg = (ball_detection_message__msg__BallOutput *)allocator.allocate(sizeof(ball_detection_message__msg__BallOutput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ball_detection_message__msg__BallOutput));
  bool success = ball_detection_message__msg__BallOutput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ball_detection_message__msg__BallOutput__destroy(ball_detection_message__msg__BallOutput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ball_detection_message__msg__BallOutput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ball_detection_message__msg__BallOutput__Sequence__init(ball_detection_message__msg__BallOutput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ball_detection_message__msg__BallOutput * data = NULL;

  if (size) {
    data = (ball_detection_message__msg__BallOutput *)allocator.zero_allocate(size, sizeof(ball_detection_message__msg__BallOutput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ball_detection_message__msg__BallOutput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ball_detection_message__msg__BallOutput__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ball_detection_message__msg__BallOutput__Sequence__fini(ball_detection_message__msg__BallOutput__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ball_detection_message__msg__BallOutput__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ball_detection_message__msg__BallOutput__Sequence *
ball_detection_message__msg__BallOutput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ball_detection_message__msg__BallOutput__Sequence * array = (ball_detection_message__msg__BallOutput__Sequence *)allocator.allocate(sizeof(ball_detection_message__msg__BallOutput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ball_detection_message__msg__BallOutput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ball_detection_message__msg__BallOutput__Sequence__destroy(ball_detection_message__msg__BallOutput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ball_detection_message__msg__BallOutput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ball_detection_message__msg__BallOutput__Sequence__are_equal(const ball_detection_message__msg__BallOutput__Sequence * lhs, const ball_detection_message__msg__BallOutput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ball_detection_message__msg__BallOutput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ball_detection_message__msg__BallOutput__Sequence__copy(
  const ball_detection_message__msg__BallOutput__Sequence * input,
  ball_detection_message__msg__BallOutput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ball_detection_message__msg__BallOutput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ball_detection_message__msg__BallOutput * data =
      (ball_detection_message__msg__BallOutput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ball_detection_message__msg__BallOutput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ball_detection_message__msg__BallOutput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ball_detection_message__msg__BallOutput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
