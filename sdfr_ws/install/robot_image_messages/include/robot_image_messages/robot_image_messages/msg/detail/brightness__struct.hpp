// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_image_messages:msg/Brightness.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BRIGHTNESS__STRUCT_HPP_
#define ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BRIGHTNESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_image_messages__msg__Brightness __attribute__((deprecated))
#else
# define DEPRECATED__robot_image_messages__msg__Brightness __declspec(deprecated)
#endif

namespace robot_image_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Brightness_
{
  using Type = Brightness_<ContainerAllocator>;

  explicit Brightness_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightness_level = 0;
      this->brightness_classification = "";
    }
  }

  explicit Brightness_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : brightness_classification(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightness_level = 0;
      this->brightness_classification = "";
    }
  }

  // field types and members
  using _brightness_level_type =
    uint8_t;
  _brightness_level_type brightness_level;
  using _brightness_classification_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _brightness_classification_type brightness_classification;

  // setters for named parameter idiom
  Type & set__brightness_level(
    const uint8_t & _arg)
  {
    this->brightness_level = _arg;
    return *this;
  }
  Type & set__brightness_classification(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->brightness_classification = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_image_messages::msg::Brightness_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_image_messages::msg::Brightness_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_image_messages::msg::Brightness_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_image_messages::msg::Brightness_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_image_messages::msg::Brightness_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_image_messages::msg::Brightness_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_image_messages::msg::Brightness_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_image_messages::msg::Brightness_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_image_messages::msg::Brightness_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_image_messages::msg::Brightness_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_image_messages__msg__Brightness
    std::shared_ptr<robot_image_messages::msg::Brightness_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_image_messages__msg__Brightness
    std::shared_ptr<robot_image_messages::msg::Brightness_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Brightness_ & other) const
  {
    if (this->brightness_level != other.brightness_level) {
      return false;
    }
    if (this->brightness_classification != other.brightness_classification) {
      return false;
    }
    return true;
  }
  bool operator!=(const Brightness_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Brightness_

// alias to use template instance with default allocator
using Brightness =
  robot_image_messages::msg::Brightness_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_image_messages

#endif  // ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BRIGHTNESS__STRUCT_HPP_
