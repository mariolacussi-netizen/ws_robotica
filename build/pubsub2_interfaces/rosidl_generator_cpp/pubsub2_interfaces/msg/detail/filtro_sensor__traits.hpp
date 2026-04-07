// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pubsub2_interfaces:msg/FiltroSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pubsub2_interfaces/msg/filtro_sensor.hpp"


#ifndef PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__TRAITS_HPP_
#define PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pubsub2_interfaces/msg/detail/filtro_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pubsub2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const FiltroSensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_value
  {
    out << "sensor_value: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_value, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FiltroSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_value: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_value, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FiltroSensor & msg, bool use_flow_style = false)
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

}  // namespace pubsub2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pubsub2_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pubsub2_interfaces::msg::FiltroSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  pubsub2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pubsub2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const pubsub2_interfaces::msg::FiltroSensor & msg)
{
  return pubsub2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pubsub2_interfaces::msg::FiltroSensor>()
{
  return "pubsub2_interfaces::msg::FiltroSensor";
}

template<>
inline const char * name<pubsub2_interfaces::msg::FiltroSensor>()
{
  return "pubsub2_interfaces/msg/FiltroSensor";
}

template<>
struct has_fixed_size<pubsub2_interfaces::msg::FiltroSensor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pubsub2_interfaces::msg::FiltroSensor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pubsub2_interfaces::msg::FiltroSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__TRAITS_HPP_
