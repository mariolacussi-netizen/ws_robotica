// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from pubsub2_interfaces:msg/FiltroSensor.idl
// generated code does not contain a copyright notice
#ifndef PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pubsub2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pubsub2_interfaces/msg/detail/filtro_sensor__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub2_interfaces
bool cdr_serialize_pubsub2_interfaces__msg__FiltroSensor(
  const pubsub2_interfaces__msg__FiltroSensor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub2_interfaces
bool cdr_deserialize_pubsub2_interfaces__msg__FiltroSensor(
  eprosima::fastcdr::Cdr &,
  pubsub2_interfaces__msg__FiltroSensor * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub2_interfaces
size_t get_serialized_size_pubsub2_interfaces__msg__FiltroSensor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub2_interfaces
size_t max_serialized_size_pubsub2_interfaces__msg__FiltroSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub2_interfaces
bool cdr_serialize_key_pubsub2_interfaces__msg__FiltroSensor(
  const pubsub2_interfaces__msg__FiltroSensor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub2_interfaces
size_t get_serialized_size_key_pubsub2_interfaces__msg__FiltroSensor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub2_interfaces
size_t max_serialized_size_key_pubsub2_interfaces__msg__FiltroSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pubsub2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pubsub2_interfaces, msg, FiltroSensor)();

#ifdef __cplusplus
}
#endif

#endif  // PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
