// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ball_detection_message:msg/BallOutput.idl
// generated code does not contain a copyright notice

#ifndef BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__STRUCT_HPP_
#define BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ball_detection_message__msg__BallOutput __attribute__((deprecated))
#else
# define DEPRECATED__ball_detection_message__msg__BallOutput __declspec(deprecated)
#endif

namespace ball_detection_message
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
      this->x_1 = 0ul;
      this->y_1 = 0ul;
      this->x_2 = 0ul;
      this->y_2 = 0ul;
      this->ball_check = false;
    }
  }

  explicit BallOutput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_1 = 0ul;
      this->y_1 = 0ul;
      this->x_2 = 0ul;
      this->y_2 = 0ul;
      this->ball_check = false;
    }
  }

  // field types and members
  using _x_1_type =
    uint32_t;
  _x_1_type x_1;
  using _y_1_type =
    uint32_t;
  _y_1_type y_1;
  using _x_2_type =
    uint32_t;
  _x_2_type x_2;
  using _y_2_type =
    uint32_t;
  _y_2_type y_2;
  using _ball_check_type =
    bool;
  _ball_check_type ball_check;

  // setters for named parameter idiom
  Type & set__x_1(
    const uint32_t & _arg)
  {
    this->x_1 = _arg;
    return *this;
  }
  Type & set__y_1(
    const uint32_t & _arg)
  {
    this->y_1 = _arg;
    return *this;
  }
  Type & set__x_2(
    const uint32_t & _arg)
  {
    this->x_2 = _arg;
    return *this;
  }
  Type & set__y_2(
    const uint32_t & _arg)
  {
    this->y_2 = _arg;
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
    ball_detection_message::msg::BallOutput_<ContainerAllocator> *;
  using ConstRawPtr =
    const ball_detection_message::msg::BallOutput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ball_detection_message::msg::BallOutput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ball_detection_message::msg::BallOutput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ball_detection_message::msg::BallOutput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ball_detection_message::msg::BallOutput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ball_detection_message::msg::BallOutput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ball_detection_message::msg::BallOutput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ball_detection_message::msg::BallOutput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ball_detection_message::msg::BallOutput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ball_detection_message__msg__BallOutput
    std::shared_ptr<ball_detection_message::msg::BallOutput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ball_detection_message__msg__BallOutput
    std::shared_ptr<ball_detection_message::msg::BallOutput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BallOutput_ & other) const
  {
    if (this->x_1 != other.x_1) {
      return false;
    }
    if (this->y_1 != other.y_1) {
      return false;
    }
    if (this->x_2 != other.x_2) {
      return false;
    }
    if (this->y_2 != other.y_2) {
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
  ball_detection_message::msg::BallOutput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ball_detection_message

#endif  // BALL_DETECTION_MESSAGE__MSG__DETAIL__BALL_OUTPUT__STRUCT_HPP_
