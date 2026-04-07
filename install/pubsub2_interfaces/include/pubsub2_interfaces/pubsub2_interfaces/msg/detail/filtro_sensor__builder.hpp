// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pubsub2_interfaces:msg/FiltroSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pubsub2_interfaces/msg/filtro_sensor.hpp"


#ifndef PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__BUILDER_HPP_
#define PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pubsub2_interfaces/msg/detail/filtro_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pubsub2_interfaces
{

namespace msg
{

namespace builder
{

class Init_FiltroSensor_name
{
public:
  explicit Init_FiltroSensor_name(::pubsub2_interfaces::msg::FiltroSensor & msg)
  : msg_(msg)
  {}
  ::pubsub2_interfaces::msg::FiltroSensor name(::pubsub2_interfaces::msg::FiltroSensor::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pubsub2_interfaces::msg::FiltroSensor msg_;
};

class Init_FiltroSensor_sensor_value
{
public:
  Init_FiltroSensor_sensor_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FiltroSensor_name sensor_value(::pubsub2_interfaces::msg::FiltroSensor::_sensor_value_type arg)
  {
    msg_.sensor_value = std::move(arg);
    return Init_FiltroSensor_name(msg_);
  }

private:
  ::pubsub2_interfaces::msg::FiltroSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pubsub2_interfaces::msg::FiltroSensor>()
{
  return pubsub2_interfaces::msg::builder::Init_FiltroSensor_sensor_value();
}

}  // namespace pubsub2_interfaces

#endif  // PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__BUILDER_HPP_
