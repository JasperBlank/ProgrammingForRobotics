// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_image_messages:msg/BallOutput.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BALL_OUTPUT__STRUCT_HPP_
#define ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BALL_OUTPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_image_messages__msg__BallOutput __attribute__((deprecated))
#else
# define DEPRECATED__robot_image_messages__msg__BallOutput __declspec(deprecated)
#endif

namespace robot_image_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BallOutput_
{
  using Type = BallOutput_<ContainerAllocator>;

  explicit BallOutput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->top_left.begin(), this->top_left.end(), 0l);
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->bottom_right.begin(), this->bottom_right.end(), 0l);
      this->ball_check = false;
    }
  }

  explicit BallOutput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : top_left(_alloc),
    bottom_right(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->top_left.begin(), this->top_left.end(), 0l);
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->bottom_right.begin(), this->bottom_right.end(), 0l);
      this->ball_check = false;
    }
  }

  // field types and members
  using _top_left_type =
    std::array<int32_t, 2>;
  _top_left_type top_left;
  using _bottom_right_type =
    std::array<int32_t, 2>;
  _bottom_right_type bottom_right;
  using _ball_check_type =
    bool;
  _ball_check_type ball_check;

  // setters for named parameter idiom
  Type & set__top_left(
    const std::array<int32_t, 2> & _arg)
  {
    this->top_left = _arg;
    return *this;
  }
  Type & set__bottom_right(
    const std::array<int32_t, 2> & _arg)
  {
    this->bottom_right = _arg;
    return *this;
  }
  Type & set__ball_check(
    const bool & _arg)
  {
    this->ball_check = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_image_messages::msg::BallOutput_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_image_messages::msg::BallOutput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_image_messages::msg::BallOutput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_image_messages::msg::BallOutput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_image_messages::msg::BallOutput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_image_messages::msg::BallOutput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_image_messages::msg::BallOutput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_image_messages::msg::BallOutput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_image_messages::msg::BallOutput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_image_messages::msg::BallOutput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_image_messages__msg__BallOutput
    std::shared_ptr<robot_image_messages::msg::BallOutput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_image_messages__msg__BallOutput
    std::shared_ptr<robot_image_messages::msg::BallOutput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BallOutput_ & other) const
  {
    if (this->top_left != other.top_left) {
      return false;
    }
    if (this->bottom_right != other.bottom_right) {
      return false;
    }
    if (this->ball_check != other.ball_check) {
      return false;
    }
    return true;
  }
  bool operator!=(const BallOutput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BallOutput_

// alias to use template instance with default allocator
using BallOutput =
  robot_image_messages::msg::BallOutput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_image_messages

#endif  // ROBOT_IMAGE_MESSAGES__MSG__DETAIL__BALL_OUTPUT__STRUCT_HPP_
