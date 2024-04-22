// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_image_messages:msg/BallOutput.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BALL_OUTPUT__TRAITS_HPP_
#define ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BALL_OUTPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_image_messages/msg/detail/ball_output__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_image_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const BallOutput & msg,
  std::ostream & out)
{
  out << "{";
  // member: top_left
  {
    if (msg.top_left.size() == 0) {
      out << "top_left: []";
    } else {
      out << "top_left: [";
      size_t pending_items = msg.top_left.size();
      for (auto item : msg.top_left) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bottom_right
  {
    if (msg.bottom_right.size() == 0) {
      out << "bottom_right: []";
    } else {
      out << "bottom_right: [";
      size_t pending_items = msg.bottom_right.size();
      for (auto item : msg.bottom_right) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  // member: top_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.top_left.size() == 0) {
      out << "top_left: []\n";
    } else {
      out << "top_left:\n";
      for (auto item : msg.top_left) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bottom_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bottom_right.size() == 0) {
      out << "bottom_right: []\n";
    } else {
      out << "bottom_right:\n";
      for (auto item : msg.bottom_right) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

}  // namespace robot_image_messages

namespace rosidl_generator_traits
{

[[deprecated("use robot_image_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_image_messages::msg::BallOutput & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_image_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_image_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_image_messages::msg::BallOutput & msg)
{
  return robot_image_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_image_messages::msg::BallOutput>()
{
  return "robot_image_messages::msg::BallOutput";
}

template<>
inline const char * name<robot_image_messages::msg::BallOutput>()
{
  return "robot_image_messages/msg/BallOutput";
}

template<>
struct has_fixed_size<robot_image_messages::msg::BallOutput>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_image_messages::msg::BallOutput>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_image_messages::msg::BallOutput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BALL_OUTPUT__TRAITS_HPP_
