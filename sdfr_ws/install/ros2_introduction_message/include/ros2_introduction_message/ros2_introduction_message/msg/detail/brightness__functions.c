// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_introduction_message:msg/Brightness.idl
// generated code does not contain a copyright notice
#include "ros2_introduction_message/msg/detail/brightness__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `brightness_classification`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2_introduction_message__msg__Brightness__init(ros2_introduction_message__msg__Brightness * msg)
{
  if (!msg) {
    return false;
  }
  // brightness_level
  // brightness_classification
  if (!rosidl_runtime_c__String__init(&msg->brightness_classification)) {
    ros2_introduction_message__msg__Brightness__fini(msg);
    return false;
  }
  return true;
}

void
ros2_introduction_message__msg__Brightness__fini(ros2_introduction_message__msg__Brightness * msg)
{
  if (!msg) {
    return;
  }
  // brightness_level
  // brightness_classification
  rosidl_runtime_c__String__fini(&msg->brightness_classification);
}

bool
ros2_introduction_message__msg__Brightness__are_equal(const ros2_introduction_message__msg__Brightness * lhs, const ros2_introduction_message__msg__Brightness * rhs)
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
ros2_introduction_message__msg__Brightness__copy(
  const ros2_introduction_message__msg__Brightness * input,
  ros2_introduction_message__msg__Brightness * output)
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

ros2_introduction_message__msg__Brightness *
ros2_introduction_message__msg__Brightness__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_introduction_message__msg__Brightness * msg = (ros2_introduction_message__msg__Brightness *)allocator.allocate(sizeof(ros2_introduction_message__msg__Brightness), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_introduction_message__msg__Brightness));
  bool success = ros2_introduction_message__msg__Brightness__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_introduction_message__msg__Brightness__destroy(ros2_introduction_message__msg__Brightness * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_introduction_message__msg__Brightness__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_introduction_message__msg__Brightness__Sequence__init(ros2_introduction_message__msg__Brightness__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_introduction_message__msg__Brightness * data = NULL;

  if (size) {
    data = (ros2_introduction_message__msg__Brightness *)allocator.zero_allocate(size, sizeof(ros2_introduction_message__msg__Brightness), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_introduction_message__msg__Brightness__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_introduction_message__msg__Brightness__fini(&data[i - 1]);
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
ros2_introduction_message__msg__Brightness__Sequence__fini(ros2_introduction_message__msg__Brightness__Sequence * array)
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
      ros2_introduction_message__msg__Brightness__fini(&array->data[i]);
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

ros2_introduction_message__msg__Brightness__Sequence *
ros2_introduction_message__msg__Brightness__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_introduction_message__msg__Brightness__Sequence * array = (ros2_introduction_message__msg__Brightness__Sequence *)allocator.allocate(sizeof(ros2_introduction_message__msg__Brightness__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_introduction_message__msg__Brightness__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_introduction_message__msg__Brightness__Sequence__destroy(ros2_introduction_message__msg__Brightness__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_introduction_message__msg__Brightness__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_introduction_message__msg__Brightness__Sequence__are_equal(const ros2_introduction_message__msg__Brightness__Sequence * lhs, const ros2_introduction_message__msg__Brightness__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_introduction_message__msg__Brightness__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_introduction_message__msg__Brightness__Sequence__copy(
  const ros2_introduction_message__msg__Brightness__Sequence * input,
  ros2_introduction_message__msg__Brightness__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_introduction_message__msg__Brightness);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_introduction_message__msg__Brightness * data =
      (ros2_introduction_message__msg__Brightness *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_introduction_message__msg__Brightness__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_introduction_message__msg__Brightness__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_introduction_message__msg__Brightness__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
