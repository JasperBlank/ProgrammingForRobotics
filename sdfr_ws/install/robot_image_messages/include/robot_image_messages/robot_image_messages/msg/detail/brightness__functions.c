// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_image_messages:msg/Brightness.idl
// generated code does not contain a copyright notice
#include "robot_image_messages/msg/detail/brightness__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `brightness_classification`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_image_messages__msg__Brightness__init(robot_image_messages__msg__Brightness * msg)
{
  if (!msg) {
    return false;
  }
  // brightness_level
  // brightness_classification
  if (!rosidl_runtime_c__String__init(&msg->brightness_classification)) {
    robot_image_messages__msg__Brightness__fini(msg);
    return false;
  }
  return true;
}

void
robot_image_messages__msg__Brightness__fini(robot_image_messages__msg__Brightness * msg)
{
  if (!msg) {
    return;
  }
  // brightness_level
  // brightness_classification
  rosidl_runtime_c__String__fini(&msg->brightness_classification);
}

bool
robot_image_messages__msg__Brightness__are_equal(const robot_image_messages__msg__Brightness * lhs, const robot_image_messages__msg__Brightness * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // brightness_level
  if (lhs->brightness_level != rhs->brightness_level) {
    return false;
  }
  // brightness_classification
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->brightness_classification), &(rhs->brightness_classification)))
  {
    return false;
  }
  return true;
}

bool
robot_image_messages__msg__Brightness__copy(
  const robot_image_messages__msg__Brightness * input,
  robot_image_messages__msg__Brightness * output)
{
  if (!input || !output) {
    return false;
  }
  // brightness_level
  output->brightness_level = input->brightness_level;
  // brightness_classification
  if (!rosidl_runtime_c__String__copy(
      &(input->brightness_classification), &(output->brightness_classification)))
  {
    return false;
  }
  return true;
}

robot_image_messages__msg__Brightness *
robot_image_messages__msg__Brightness__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_image_messages__msg__Brightness * msg = (robot_image_messages__msg__Brightness *)allocator.allocate(sizeof(robot_image_messages__msg__Brightness), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_image_messages__msg__Brightness));
  bool success = robot_image_messages__msg__Brightness__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_image_messages__msg__Brightness__destroy(robot_image_messages__msg__Brightness * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_image_messages__msg__Brightness__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_image_messages__msg__Brightness__Sequence__init(robot_image_messages__msg__Brightness__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_image_messages__msg__Brightness * data = NULL;

  if (size) {
    data = (robot_image_messages__msg__Brightness *)allocator.zero_allocate(size, sizeof(robot_image_messages__msg__Brightness), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_image_messages__msg__Brightness__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_image_messages__msg__Brightness__fini(&data[i - 1]);
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
robot_image_messages__msg__Brightness__Sequence__fini(robot_image_messages__msg__Brightness__Sequence * array)
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
      robot_image_messages__msg__Brightness__fini(&array->data[i]);
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

robot_image_messages__msg__Brightness__Sequence *
robot_image_messages__msg__Brightness__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_image_messages__msg__Brightness__Sequence * array = (robot_image_messages__msg__Brightness__Sequence *)allocator.allocate(sizeof(robot_image_messages__msg__Brightness__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_image_messages__msg__Brightness__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_image_messages__msg__Brightness__Sequence__destroy(robot_image_messages__msg__Brightness__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_image_messages__msg__Brightness__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_image_messages__msg__Brightness__Sequence__are_equal(const robot_image_messages__msg__Brightness__Sequence * lhs, const robot_image_messages__msg__Brightness__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_image_messages__msg__Brightness__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_image_messages__msg__Brightness__Sequence__copy(
  const robot_image_messages__msg__Brightness__Sequence * input,
  robot_image_messages__msg__Brightness__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_image_messages__msg__Brightness);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_image_messages__msg__Brightness * data =
      (robot_image_messages__msg__Brightness *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_image_messages__msg__Brightness__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_image_messages__msg__Brightness__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_image_messages__msg__Brightness__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
