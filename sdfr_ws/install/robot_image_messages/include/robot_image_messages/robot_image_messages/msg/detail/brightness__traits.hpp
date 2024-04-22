// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_image_messages:msg/Brightness.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BRIGHTNESS__TRAITS_HPP_
#define ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BRIGHTNESS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_image_messages/msg/detail/brightness__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_image_messages
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

}  // namespace robot_image_messages

namespace rosidl_generator_traits
{

[[deprecated("use robot_image_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_image_messages::msg::Brightness & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_image_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_image_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_image_messages::msg::Brightness & msg)
{
  return robot_image_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_image_messages::msg::Brightness>()
{
  return "robot_image_messages::msg::Brightness";
}

template<>
inline const char * name<robot_image_messages::msg::Brightness>()
{
  return "robot_image_messages/msg/Brightness";
}

template<>
struct has_fixed_size<robot_image_messages::msg::Brightness>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_image_messages::msg::Brightness>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_image_messages::msg::Brightness>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BRIGHTNESS__TRAITS_HPP_
