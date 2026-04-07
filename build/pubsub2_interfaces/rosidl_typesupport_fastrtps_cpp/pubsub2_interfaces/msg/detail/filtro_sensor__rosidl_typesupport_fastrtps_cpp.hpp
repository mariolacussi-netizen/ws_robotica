// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from pubsub2_interfaces:msg/FiltroSensor.idl
// generated code does not contain a copyright notice

#ifndef PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pubsub2_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "pubsub2_interfaces/msg/detail/filtro_sensor__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace pubsub2_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pubsub2_interfaces
cdr_serialize(
  const pubsub2_interfaces::msg::FiltroSensor & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pubsub2_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pubsub2_interfaces::msg::FiltroSensor & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pubsub2_interfaces
get_serialized_size(
  const pubsub2_interfaces::msg::FiltroSensor & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pubsub2_interfaces
max_serialized_size_FiltroSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pubsub2_interfaces
cdr_serialize_key(
  const pubsub2_interfaces::msg::FiltroSensor & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pubsub2_interfaces
get_serialized_size_key(
  const pubsub2_interfaces::msg::FiltroSensor & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pubsub2_interfaces
max_serialized_size_key_FiltroSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pubsub2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pubsub2_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pubsub2_interfaces, msg, FiltroSensor)();

#ifdef __cplusplus
}
#endif

#endif  // PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
