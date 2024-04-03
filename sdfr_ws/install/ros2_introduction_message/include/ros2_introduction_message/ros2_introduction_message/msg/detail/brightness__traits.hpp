// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_introduction_message:msg/Brightness.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTRODUCTION_MESSAGE__MSG__DETAIL__BRIGHTNESS__TRAITS_HPP_
#define ROS2_INTRODUCTION_MESSAGE__MSG__DETAIL__BRIGHTNESS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_introduction_message/msg/detail/brightness__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_introduction_message
{

namespace msg
{

inline void to_flow_style_yaml(
  const Brightness & msg,
  std::ostream & out)
{
  out << "{";
  // member: brightness_level
  {
    out << "brightness_level: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_level, out);
    out << ", ";
  }

  // member: brightness_classification
  {
    out << "brightness_classification: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_classification, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Brightness & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: brightness_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightness_level: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_level, out);
    out << "\n";
  }

  // member: brightness_classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightness_classification: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_classification, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Brightness & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros2_introduction_message

namespace rosidl_generator_traits
{

[[deprecated("use ros2_introduction_message::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_introduction_message::msg::Brightness & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_introduction_message::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_introduction_message::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_introduction_message::msg::Brightness & msg)
{
  return ros2_introduction_message::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_introduction_message::msg::Brightness>()
{
  return "ros2_introduction_message::msg::Brightness";
}

template<>
inline const char * name<ros2_introduction_message::msg::Brightness>()
{
  return "ros2_introduction_message/msg/Brightness";
}

template<>
struct has_fixed_size<ros2_introduction_message::msg::Brightness>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_introduction_message::msg::Brightness>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_introduction_message::msg::Brightness>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTRODUCTION_MESSAGE__MSG__DETAIL__BRIGHTNESS__TRAITS_HPP_
