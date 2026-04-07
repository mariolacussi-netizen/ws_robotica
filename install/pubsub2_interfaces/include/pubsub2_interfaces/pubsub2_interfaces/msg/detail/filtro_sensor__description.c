// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pubsub2_interfaces:msg/FiltroSensor.idl
// generated code does not contain a copyright notice

#include "pubsub2_interfaces/msg/detail/filtro_sensor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
const rosidl_type_hash_t *
pubsub2_interfaces__msg__FiltroSensor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0x6c, 0x64, 0xb6, 0xa3, 0x0c, 0xf3, 0x8c,
      0xfa, 0xbc, 0x0a, 0xa0, 0x87, 0x4c, 0xc6, 0xb4,
      0x68, 0x8f, 0x49, 0xaf, 0x01, 0x4c, 0xca, 0x3a,
      0x64, 0x27, 0xe5, 0x2d, 0xb8, 0xcb, 0xbd, 0x19,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char pubsub2_interfaces__msg__FiltroSensor__TYPE_NAME[] = "pubsub2_interfaces/msg/FiltroSensor";

// Define type names, field names, and default values
static char pubsub2_interfaces__msg__FiltroSensor__FIELD_NAME__sensor_value[] = "sensor_value";
static char pubsub2_interfaces__msg__FiltroSensor__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field pubsub2_interfaces__msg__FiltroSensor__FIELDS[] = {
  {
    {pubsub2_interfaces__msg__FiltroSensor__FIELD_NAME__sensor_value, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pubsub2_interfaces__msg__FiltroSensor__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pubsub2_interfaces__msg__FiltroSensor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pubsub2_interfaces__msg__FiltroSensor__TYPE_NAME, 35, 35},
      {pubsub2_interfaces__msg__FiltroSensor__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 sensor_value\n"
  "string name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pubsub2_interfaces__msg__FiltroSensor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pubsub2_interfaces__msg__FiltroSensor__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pubsub2_interfaces__msg__FiltroSensor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pubsub2_interfaces__msg__FiltroSensor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
