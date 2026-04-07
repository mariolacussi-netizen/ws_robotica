// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pubsub2_interfaces:msg/FiltroSensor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pubsub2_interfaces/msg/detail/filtro_sensor__rosidl_typesupport_introspection_c.h"
#include "pubsub2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pubsub2_interfaces/msg/detail/filtro_sensor__functions.h"
#include "pubsub2_interfaces/msg/detail/filtro_sensor__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pubsub2_interfaces__msg__FiltroSensor__rosidl_typesupport_introspection_c__FiltroSensor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pubsub2_interfaces__msg__FiltroSensor__init(message_memory);
}

void pubsub2_interfaces__msg__FiltroSensor__rosidl_typesupport_introspection_c__FiltroSensor_fini_function(void * message_memory)
{
  pubsub2_interfaces__msg__FiltroSensor__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pubsub2_interfaces__msg__FiltroSensor__rosidl_typesupport_introspection_c__FiltroSensor_message_member_array[2] = {
  {
    "sensor_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pubsub2_interfaces__msg__FiltroSensor, sensor_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pubsub2_interfaces__msg__FiltroSensor, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pubsub2_interfaces__msg__FiltroSensor__rosidl_typesupport_introspection_c__FiltroSensor_message_members = {
  "pubsub2_interfaces__msg",  // message namespace
  "FiltroSensor",  // message name
  2,  // number of fields
  sizeof(pubsub2_interfaces__msg__FiltroSensor),
  false,  // has_any_key_member_
  pubsub2_interfaces__msg__FiltroSensor__rosidl_typesupport_introspection_c__FiltroSensor_message_member_array,  // message members
  pubsub2_interfaces__msg__FiltroSensor__rosidl_typesupport_introspection_c__FiltroSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  pubsub2_interfaces__msg__FiltroSensor__rosidl_typesupport_introspection_c__FiltroSensor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pubsub2_interfaces__msg__FiltroSensor__rosidl_typesupport_introspection_c__FiltroSensor_message_type_support_handle = {
  0,
  &pubsub2_interfaces__msg__FiltroSensor__rosidl_typesupport_introspection_c__FiltroSensor_message_members,
  get_message_typesupport_handle_function,
  &pubsub2_interfaces__msg__FiltroSensor__get_type_hash,
  &pubsub2_interfaces__msg__FiltroSensor__get_type_description,
  &pubsub2_interfaces__msg__FiltroSensor__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pubsub2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pubsub2_interfaces, msg, FiltroSensor)() {
  if (!pubsub2_interfaces__msg__FiltroSensor__rosidl_typesupport_introspection_c__FiltroSensor_message_type_support_handle.typesupport_identifier) {
    pubsub2_interfaces__msg__FiltroSensor__rosidl_typesupport_introspection_c__FiltroSensor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pubsub2_interfaces__msg__FiltroSensor__rosidl_typesupport_introspection_c__FiltroSensor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
