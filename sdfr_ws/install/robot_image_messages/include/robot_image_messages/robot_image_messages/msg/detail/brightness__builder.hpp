// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_image_messages:msg/Brightness.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BRIGHTNESS__BUILDER_HPP_
#define ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BRIGHTNESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_image_messages/msg/detail/brightness__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_image_messages
{

namespace msg
{

namespace builder
{

class Init_Brightness_brightness_classification
{
public:
  explicit Init_Brightness_brightness_classification(::robot_image_messages::msg::Brightness & msg)
  : msg_(msg)
  {}
  ::robot_image_messages::msg::Brightness brightness_classification(::robot_image_messages::msg::Brightness::_brightness_classification_type arg)
  {
    msg_.brightness_classification = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_image_messages::msg::Brightness msg_;
};

class Init_Brightness_brightness_level
{
public:
  Init_Brightness_brightness_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Brightness_brightness_classification brightness_level(::robot_image_messages::msg::Brightness::_brightness_level_type arg)
  {
    msg_.brightness_level = std::move(arg);
    return Init_Brightness_brightness_classification(msg_);
  }

private:
  ::robot_image_messages::msg::Brightness msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_image_messages::msg::Brightness>()
{
  return robot_image_messages::msg::builder::Init_Brightness_brightness_level();
}

}  // namespace robot_image_messages

#endif  // ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BRIGHTNESS__BUILDER_HPP_
