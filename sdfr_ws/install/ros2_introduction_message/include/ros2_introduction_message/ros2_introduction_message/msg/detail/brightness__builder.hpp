// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_introduction_message:msg/Brightness.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTRODUCTION_MESSAGE__MSG__DETAIL__BRIGHTNESS__BUILDER_HPP_
#define ROS2_INTRODUCTION_MESSAGE__MSG__DETAIL__BRIGHTNESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_introduction_message/msg/detail/brightness__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_introduction_message
{

namespace msg
{

namespace builder
{

class Init_Brightness_brightness_classification
{
public:
  explicit Init_Brightness_brightness_classification(::ros2_introduction_message::msg::Brightness & msg)
  : msg_(msg)
  {}
  ::ros2_introduction_message::msg::Brightness brightness_classification(::ros2_introduction_message::msg::Brightness::_brightness_classification_type arg)
  {
    msg_.brightness_classification = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_introduction_message::msg::Brightness msg_;
};

class Init_Brightness_brightness_level
{
public:
  Init_Brightness_brightness_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Brightness_brightness_classification brightness_level(::ros2_introduction_message::msg::Brightness::_brightness_level_type arg)
  {
    msg_.brightness_level = std::move(arg);
    return Init_Brightness_brightness_classification(msg_);
  }

private:
  ::ros2_introduction_message::msg::Brightness msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_introduction_message::msg::Brightness>()
{
  return ros2_introduction_message::msg::builder::Init_Brightness_brightness_level();
}

}  // namespace ros2_introduction_message

#endif  // ROS2_INTRODUCTION_MESSAGE__MSG__DETAIL__BRIGHTNESS__BUILDER_HPP_
