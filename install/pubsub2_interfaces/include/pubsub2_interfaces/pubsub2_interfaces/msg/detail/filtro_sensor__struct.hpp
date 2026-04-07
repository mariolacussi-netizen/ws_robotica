// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pubsub2_interfaces:msg/FiltroSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pubsub2_interfaces/msg/filtro_sensor.hpp"


#ifndef PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__STRUCT_HPP_
#define PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pubsub2_interfaces__msg__FiltroSensor __attribute__((deprecated))
#else
# define DEPRECATED__pubsub2_interfaces__msg__FiltroSensor __declspec(deprecated)
#endif

namespace pubsub2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FiltroSensor_
{
  using Type = FiltroSensor_<ContainerAllocator>;

  explicit FiltroSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_value = 0.0;
      this->name = "";
    }
  }

  explicit FiltroSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_value = 0.0;
      this->name = "";
    }
  }

  // field types and members
  using _sensor_value_type =
    double;
  _sensor_value_type sensor_value;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__sensor_value(
    const double & _arg)
  {
    this->sensor_value = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pubsub2_interfaces::msg::FiltroSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const pubsub2_interfaces::msg::FiltroSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pubsub2_interfaces::msg::FiltroSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pubsub2_interfaces::msg::FiltroSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pubsub2_interfaces::msg::FiltroSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pubsub2_interfaces::msg::FiltroSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pubsub2_interfaces::msg::FiltroSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pubsub2_interfaces::msg::FiltroSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pubsub2_interfaces::msg::FiltroSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pubsub2_interfaces::msg::FiltroSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pubsub2_interfaces__msg__FiltroSensor
    std::shared_ptr<pubsub2_interfaces::msg::FiltroSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pubsub2_interfaces__msg__FiltroSensor
    std::shared_ptr<pubsub2_interfaces::msg::FiltroSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FiltroSensor_ & other) const
  {
    if (this->sensor_value != other.sensor_value) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const FiltroSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FiltroSensor_

// alias to use template instance with default allocator
using FiltroSensor =
  pubsub2_interfaces::msg::FiltroSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pubsub2_interfaces

#endif  // PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__STRUCT_HPP_
