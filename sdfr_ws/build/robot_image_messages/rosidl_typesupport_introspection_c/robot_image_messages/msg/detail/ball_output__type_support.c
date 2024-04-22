// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_image_messages:msg/BallOutput.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_image_messages/msg/detail/ball_output__rosidl_typesupport_introspection_c.h"
#include "robot_image_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_image_messages/msg/detail/ball_output__functions.h"
#include "robot_image_messages/msg/detail/ball_output__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__BallOutput_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_image_messages__msg__BallOutput__init(message_memory);
}

void robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__BallOutput_fini_function(void * message_memory)
{
  robot_image_messages__msg__BallOutput__fini(message_memory);
}

size_t robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__size_function__BallOutput__top_left(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__get_const_function__BallOutput__top_left(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__get_function__BallOutput__top_left(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__fetch_function__BallOutput__top_left(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__get_const_function__BallOutput__top_left(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__assign_function__BallOutput__top_left(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__get_function__BallOutput__top_left(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

size_t robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__size_function__BallOutput__bottom_right(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__get_const_function__BallOutput__bottom_right(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__get_function__BallOutput__bottom_right(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__fetch_function__BallOutput__bottom_right(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__get_const_function__BallOutput__bottom_right(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__assign_function__BallOutput__bottom_right(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__get_function__BallOutput__bottom_right(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__BallOutput_message_member_array[3] = {
  {
    "top_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(robot_image_messages__msg__BallOutput, top_left),  // bytes offset in struct
    NULL,  // default value
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__size_function__BallOutput__top_left,  // size() function pointer
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__get_const_function__BallOutput__top_left,  // get_const(index) function pointer
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__get_function__BallOutput__top_left,  // get(index) function pointer
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__fetch_function__BallOutput__top_left,  // fetch(index, &value) function pointer
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__assign_function__BallOutput__top_left,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bottom_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(robot_image_messages__msg__BallOutput, bottom_right),  // bytes offset in struct
    NULL,  // default value
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__size_function__BallOutput__bottom_right,  // size() function pointer
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__get_const_function__BallOutput__bottom_right,  // get_const(index) function pointer
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__get_function__BallOutput__bottom_right,  // get(index) function pointer
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__fetch_function__BallOutput__bottom_right,  // fetch(index, &value) function pointer
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__assign_function__BallOutput__bottom_right,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ball_check",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_image_messages__msg__BallOutput, ball_check),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__BallOutput_message_members = {
  "robot_image_messages__msg",  // message namespace
  "BallOutput",  // message name
  3,  // number of fields
  sizeof(robot_image_messages__msg__BallOutput),
  robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__BallOutput_message_member_array,  // message members
  robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__BallOutput_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__BallOutput_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__BallOutput_message_type_support_handle = {
  0,
  &robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__BallOutput_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_image_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_image_messages, msg, BallOutput)() {
  if (!robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__BallOutput_message_type_support_handle.typesupport_identifier) {
    robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__BallOutput_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_image_messages__msg__BallOutput__rosidl_typesupport_introspection_c__BallOutput_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
