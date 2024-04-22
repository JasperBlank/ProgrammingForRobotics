// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_image_messages:msg/BallOutput.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_image_messages/msg/detail/ball_output__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_image_messages
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BallOutput_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_image_messages::msg::BallOutput(_init);
}

void BallOutput_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_image_messages::msg::BallOutput *>(message_memory);
  typed_message->~BallOutput();
}

size_t size_function__BallOutput__top_left(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__BallOutput__top_left(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__BallOutput__top_left(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__BallOutput__top_left(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__BallOutput__top_left(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__BallOutput__top_left(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__BallOutput__top_left(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__BallOutput__bottom_right(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__BallOutput__bottom_right(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__BallOutput__bottom_right(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__BallOutput__bottom_right(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__BallOutput__bottom_right(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__BallOutput__bottom_right(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__BallOutput__bottom_right(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BallOutput_message_member_array[3] = {
  {
    "top_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(robot_image_messages::msg::BallOutput, top_left),  // bytes offset in struct
    nullptr,  // default value
    size_function__BallOutput__top_left,  // size() function pointer
    get_const_function__BallOutput__top_left,  // get_const(index) function pointer
    get_function__BallOutput__top_left,  // get(index) function pointer
    fetch_function__BallOutput__top_left,  // fetch(index, &value) function pointer
    assign_function__BallOutput__top_left,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bottom_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(robot_image_messages::msg::BallOutput, bottom_right),  // bytes offset in struct
    nullptr,  // default value
    size_function__BallOutput__bottom_right,  // size() function pointer
    get_const_function__BallOutput__bottom_right,  // get_const(index) function pointer
    get_function__BallOutput__bottom_right,  // get(index) function pointer
    fetch_function__BallOutput__bottom_right,  // fetch(index, &value) function pointer
    assign_function__BallOutput__bottom_right,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ball_check",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_image_messages::msg::BallOutput, ball_check),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BallOutput_message_members = {
  "robot_image_messages::msg",  // message namespace
  "BallOutput",  // message name
  3,  // number of fields
  sizeof(robot_image_messages::msg::BallOutput),
  BallOutput_message_member_array,  // message members
  BallOutput_init_function,  // function to initialize message memory (memory has to be allocated)
  BallOutput_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BallOutput_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BallOutput_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot_image_messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_image_messages::msg::BallOutput>()
{
  return &::robot_image_messages::msg::rosidl_typesupport_introspection_cpp::BallOutput_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_image_messages, msg, BallOutput)() {
  return &::robot_image_messages::msg::rosidl_typesupport_introspection_cpp::BallOutput_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
