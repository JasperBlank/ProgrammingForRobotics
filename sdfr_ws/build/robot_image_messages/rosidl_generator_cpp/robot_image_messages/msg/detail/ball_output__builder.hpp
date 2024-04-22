// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_image_messages:msg/BallOutput.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BALL_OUTPUT__BUILDER_HPP_
#define ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BALL_OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_image_messages/msg/detail/ball_output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_image_messages
{

namespace msg
{

namespace builder
{

class Init_BallOutput_ball_check
{
public:
  explicit Init_BallOutput_ball_check(::robot_image_messages::msg::BallOutput & msg)
  : msg_(msg)
  {}
  ::robot_image_messages::msg::BallOutput ball_check(::robot_image_messages::msg::BallOutput::_ball_check_type arg)
  {
    msg_.ball_check = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_image_messages::msg::BallOutput msg_;
};

class Init_BallOutput_bottom_right
{
public:
  explicit Init_BallOutput_bottom_right(::robot_image_messages::msg::BallOutput & msg)
  : msg_(msg)
  {}
  Init_BallOutput_ball_check bottom_right(::robot_image_messages::msg::BallOutput::_bottom_right_type arg)
  {
    msg_.bottom_right = std::move(arg);
    return Init_BallOutput_ball_check(msg_);
  }

private:
  ::robot_image_messages::msg::BallOutput msg_;
};

class Init_BallOutput_top_left
{
public:
  Init_BallOutput_top_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BallOutput_bottom_right top_left(::robot_image_messages::msg::BallOutput::_top_left_type arg)
  {
    msg_.top_left = std::move(arg);
    return Init_BallOutput_bottom_right(msg_);
  }

private:
  ::robot_image_messages::msg::BallOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_image_messages::msg::BallOutput>()
{
  return robot_image_messages::msg::builder::Init_BallOutput_top_left();
}

}  // namespace robot_image_messages

#endif  // ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BALL_OUTPUT__BUILDER_HPP_
