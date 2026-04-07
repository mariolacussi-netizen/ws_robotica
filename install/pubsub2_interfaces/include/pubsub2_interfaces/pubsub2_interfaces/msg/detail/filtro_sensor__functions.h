// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pubsub2_interfaces:msg/FiltroSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pubsub2_interfaces/msg/filtro_sensor.h"


#ifndef PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__FUNCTIONS_H_
#define PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "pubsub2_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "pubsub2_interfaces/msg/detail/filtro_sensor__struct.h"

/// Initialize msg/FiltroSensor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pubsub2_interfaces__msg__FiltroSensor
 * )) before or use
 * pubsub2_interfaces__msg__FiltroSensor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
bool
pubsub2_interfaces__msg__FiltroSensor__init(pubsub2_interfaces__msg__FiltroSensor * msg);

/// Finalize msg/FiltroSensor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
void
pubsub2_interfaces__msg__FiltroSensor__fini(pubsub2_interfaces__msg__FiltroSensor * msg);

/// Create msg/FiltroSensor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pubsub2_interfaces__msg__FiltroSensor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
pubsub2_interfaces__msg__FiltroSensor *
pubsub2_interfaces__msg__FiltroSensor__create(void);

/// Destroy msg/FiltroSensor message.
/**
 * It calls
 * pubsub2_interfaces__msg__FiltroSensor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
void
pubsub2_interfaces__msg__FiltroSensor__destroy(pubsub2_interfaces__msg__FiltroSensor * msg);

/// Check for msg/FiltroSensor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
bool
pubsub2_interfaces__msg__FiltroSensor__are_equal(const pubsub2_interfaces__msg__FiltroSensor * lhs, const pubsub2_interfaces__msg__FiltroSensor * rhs);

/// Copy a msg/FiltroSensor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
bool
pubsub2_interfaces__msg__FiltroSensor__copy(
  const pubsub2_interfaces__msg__FiltroSensor * input,
  pubsub2_interfaces__msg__FiltroSensor * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
const rosidl_type_hash_t *
pubsub2_interfaces__msg__FiltroSensor__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
pubsub2_interfaces__msg__FiltroSensor__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
const rosidl_runtime_c__type_description__TypeSource *
pubsub2_interfaces__msg__FiltroSensor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
pubsub2_interfaces__msg__FiltroSensor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/FiltroSensor messages.
/**
 * It allocates the memory for the number of elements and calls
 * pubsub2_interfaces__msg__FiltroSensor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
bool
pubsub2_interfaces__msg__FiltroSensor__Sequence__init(pubsub2_interfaces__msg__FiltroSensor__Sequence * array, size_t size);

/// Finalize array of msg/FiltroSensor messages.
/**
 * It calls
 * pubsub2_interfaces__msg__FiltroSensor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
void
pubsub2_interfaces__msg__FiltroSensor__Sequence__fini(pubsub2_interfaces__msg__FiltroSensor__Sequence * array);

/// Create array of msg/FiltroSensor messages.
/**
 * It allocates the memory for the array and calls
 * pubsub2_interfaces__msg__FiltroSensor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
pubsub2_interfaces__msg__FiltroSensor__Sequence *
pubsub2_interfaces__msg__FiltroSensor__Sequence__create(size_t size);

/// Destroy array of msg/FiltroSensor messages.
/**
 * It calls
 * pubsub2_interfaces__msg__FiltroSensor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
void
pubsub2_interfaces__msg__FiltroSensor__Sequence__destroy(pubsub2_interfaces__msg__FiltroSensor__Sequence * array);

/// Check for msg/FiltroSensor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
bool
pubsub2_interfaces__msg__FiltroSensor__Sequence__are_equal(const pubsub2_interfaces__msg__FiltroSensor__Sequence * lhs, const pubsub2_interfaces__msg__FiltroSensor__Sequence * rhs);

/// Copy an array of msg/FiltroSensor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub2_interfaces
bool
pubsub2_interfaces__msg__FiltroSensor__Sequence__copy(
  const pubsub2_interfaces__msg__FiltroSensor__Sequence * input,
  pubsub2_interfaces__msg__FiltroSensor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PUBSUB2_INTERFACES__MSG__DETAIL__FILTRO_SENSOR__FUNCTIONS_H_
