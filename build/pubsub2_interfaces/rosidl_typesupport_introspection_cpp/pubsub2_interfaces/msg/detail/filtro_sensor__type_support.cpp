// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pubsub2_interfaces:msg/FiltroSensor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pubsub2_interfaces/msg/detail/filtro_sensor__functions.h"
#include "pubsub2_interfaces/msg/detail/filtro_sensor__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pubsub2_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FiltroSensor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pubsub2_interfaces::msg::FiltroSensor(_init);
}

void FiltroSensor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pubsub2_interfaces::msg::FiltroSensor *>(message_memory);
  typed_message->~FiltroSensor();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FiltroSensor_message_member_array[2] = {
  {
    "sensor_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pubsub2_interfaces::msg::FiltroSensor, sensor_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pubsub2_interfaces::msg::FiltroSensor, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FiltroSensor_message_members = {
  "pubsub2_interfaces::msg",  // message namespace
  "FiltroSensor",  // message name
  2,  // number of fields
  sizeof(pubsub2_interfaces::msg::FiltroSensor),
  false,  // has_any_key_member_
  FiltroSensor_message_member_array,  // message members
  FiltroSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  FiltroSensor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FiltroSensor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FiltroSensor_message_members,
  get_message_typesupport_handle_function,
  &pubsub2_interfaces__msg__FiltroSensor__get_type_hash,
  &pubsub2_interfaces__msg__FiltroSensor__get_type_description,
  &pubsub2_interfaces__msg__FiltroSensor__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pubsub2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pubsub2_interfaces::msg::FiltroSensor>()
{
  return &::pubsub2_interfaces::msg::rosidl_typesupport_introspection_cpp::FiltroSensor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pubsub2_interfaces, msg, FiltroSensor)() {
  return &::pubsub2_interfaces::msg::rosidl_typesupport_introspection_cpp::FiltroSensor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
