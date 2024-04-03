// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ball_detection_message:msg/BallOutput.idl
// generated code does not contain a copyright notice

#ifndef BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__BUILDER_HPP_
#define BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ball_detection_message/msg/detail/ball_output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ball_detection_message
{

namespace msg
{

namespace builder
{

class Init_BallOutput_ball_check
{
public:
  explicit Init_BallOutput_ball_check(::ball_detection_message::msg::BallOutput & msg)
  : msg_(msg)
  {}
  ::ball_detection_message::msg::BallOutput ball_check(::ball_detection_message::msg::BallOutput::_ball_check_type arg)
  {
    msg_.ball_check = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ball_detection_message::msg::BallOutput msg_;
};

class Init_BallOutput_y_2
{
public:
  explicit Init_BallOutput_y_2(::ball_detection_message::msg::BallOutput & msg)
  : msg_(msg)
  {}
  Init_BallOutput_ball_check y_2(::ball_detection_message::msg::BallOutput::_y_2_type arg)
  {
    msg_.y_2 = std::move(arg);
    return Init_BallOutput_ball_check(msg_);
  }

private:
  ::ball_detection_message::msg::BallOutput msg_;
};

class Init_BallOutput_x_2
{
public:
  explicit Init_BallOutput_x_2(::ball_detection_message::msg::BallOutput & msg)
  : msg_(msg)
  {}
  Init_BallOutput_y_2 x_2(::ball_detection_message::msg::BallOutput::_x_2_type arg)
  {
    msg_.x_2 = std::move(arg);
    return Init_BallOutput_y_2(msg_);
  }

private:
  ::ball_detection_message::msg::BallOutput msg_;
};

class Init_BallOutput_y_1
{
public:
  explicit Init_BallOutput_y_1(::ball_detection_message::msg::BallOutput & msg)
  : msg_(msg)
  {}
  Init_BallOutput_x_2 y_1(::ball_detection_message::msg::BallOutput::_y_1_type arg)
  {
    msg_.y_1 = std::move(arg);
    return Init_BallOutput_x_2(msg_);
  }

private:
  ::ball_detection_message::msg::BallOutput msg_;
};

class Init_BallOutput_x_1
{
public:
  Init_BallOutput_x_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BallOutput_y_1 x_1(::ball_detection_message::msg::BallOutput::_x_1_type arg)
  {
    msg_.x_1 = std::move(arg);
    return Init_BallOutput_y_1(msg_);
  }

private:
  ::ball_detection_message::msg::BallOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ball_detection_message::msg::BallOutput>()
{
  return ball_detection_message::msg::builder::Init_BallOutput_x_1();
}

}  // namespace ball_detection_message

#endif  // BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__BUILDER_HPP_
