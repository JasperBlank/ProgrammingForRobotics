// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ball_detection_message:msg/BallOutput.idl
// generated code does not contain a copyright notice

#ifndef BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__TRAITS_HPP_
#define BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ball_detection_message/msg/detail/ball_output__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ball_detection_message
{

namespace msg
{

inline void to_flow_style_yaml(
  const BallOutput & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_1
  {
    out << "x_1: ";
    rosidl_generator_traits::value_to_yaml(msg.x_1, out);
    out << ", ";
  }

  // member: y_1
  {
    out << "y_1: ";
    rosidl_generator_traits::value_to_yaml(msg.y_1, out);
    out << ", ";
  }

  // member: x_2
  {
    out << "x_2: ";
    rosidl_generator_traits::value_to_yaml(msg.x_2, out);
    out << ", ";
  }

  // member: y_2
  {
    out << "y_2: ";
    rosidl_generator_traits::value_to_yaml(msg.y_2, out);
    out << ", ";
  }

  // member: ball_check
  {
    out << "ball_check: ";
    rosidl_generator_traits::value_to_yaml(msg.ball_check, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BallOutput & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_1: ";
    rosidl_generator_traits::value_to_yaml(msg.x_1, out);
    out << "\n";
  }

  // member: y_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_1: ";
    rosidl_generator_traits::value_to_yaml(msg.y_1, out);
    out << "\n";
  }

  // member: x_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_2: ";
    rosidl_generator_traits::value_to_yaml(msg.x_2, out);
    out << "\n";
  }

  // member: y_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_2: ";
    rosidl_generator_traits::value_to_yaml(msg.y_2, out);
    out << "\n";
  }

  // member: ball_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ball_check: ";
    rosidl_generator_traits::value_to_yaml(msg.ball_check, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BallOutput & msg, bool use_flow_style = false)
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

}  // namespace ball_detection_message

namespace rosidl_generator_traits
{

[[deprecated("use ball_detection_message::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ball_detection_message::msg::BallOutput & msg,
  std::ostream & out, size_t indentation = 0)
{
  ball_detection_message::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ball_detection_message::msg::to_yaml() instead")]]
inline std::string to_yaml(const ball_detection_message::msg::BallOutput & msg)
{
  return ball_detection_message::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ball_detection_message::msg::BallOutput>()
{
  return "ball_detection_message::msg::BallOutput";
}

template<>
inline const char * name<ball_detection_message::msg::BallOutput>()
{
  return "ball_detection_message/msg/BallOutput";
}

template<>
struct has_fixed_size<ball_detection_message::msg::BallOutput>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ball_detection_message::msg::BallOutput>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ball_detection_message::msg::BallOutput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__TRAITS_HPP_
