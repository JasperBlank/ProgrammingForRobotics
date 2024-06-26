// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_introduction_message:msg/Brightness.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_introduction_message/msg/detail/brightness__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros2_introduction_message
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Brightness_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_introduction_message::msg::Brightness(_init);
}

void Brightness_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_introduction_message::msg::Brightness *>(message_memory);
  typed_message->~Brightness();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Brightness_message_member_array[2] = {
  {
    "brightness_level",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_introduction_message::msg::Brightness, brightness_level),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "brightness_classification",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_introduction_message::msg::Brightness, brightness_classification),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Brightness_message_members = {
  "ros2_introduction_message::msg",  // message namespace
  "Brightness",  // message name
  2,  // number of fields
  sizeof(ros2_introduction_message::msg::Brightness),
  Brightness_message_member_array,  // message members
  Brightness_init_function,  // function to initialize message memory (memory has to be allocated)
  Brightness_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Brightness_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Brightness_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros2_introduction_message


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_introduction_message::msg::Brightness>()
{
  return &::ros2_introduction_message::msg::rosidl_typesupport_introspection_cpp::Brightness_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_introduction_message, msg, Brightness)() {
  return &::ros2_introduction_message::msg::rosidl_typesupport_introspection_cpp::Brightness_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
