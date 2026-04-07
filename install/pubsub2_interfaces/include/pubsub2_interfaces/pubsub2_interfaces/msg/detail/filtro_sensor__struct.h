// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pubsub2_interfaces:msg/FiltroSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pubsub2_interfaces/msg/filtro_sensor.h"


#ifndef PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__STRUCT_H_
#define PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FiltroSensor in the package pubsub2_interfaces.
typedef struct pubsub2_interfaces__msg__FiltroSensor
{
  double sensor_value;
  rosidl_runtime_c__String name;
} pubsub2_interfaces__msg__FiltroSensor;

// Struct for a sequence of pubsub2_interfaces__msg__FiltroSensor.
typedef struct pubsub2_interfaces__msg__FiltroSensor__Sequence
{
  pubsub2_interfaces__msg__FiltroSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pubsub2_interfaces__msg__FiltroSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__STRUCT_H_
