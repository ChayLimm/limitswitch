// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from limitswitch:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__FUNCTIONS_H_
#define LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "limitswitch/msg/rosidl_generator_c__visibility_control.h"

#include "limitswitch/msg/detail/target_coordinates__struct.h"

/// Initialize msg/TargetCoordinates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limitswitch__msg__TargetCoordinates
 * )) before or use
 * limitswitch__msg__TargetCoordinates__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limitswitch
bool
limitswitch__msg__TargetCoordinates__init(limitswitch__msg__TargetCoordinates * msg);

/// Finalize msg/TargetCoordinates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limitswitch
void
limitswitch__msg__TargetCoordinates__fini(limitswitch__msg__TargetCoordinates * msg);

/// Create msg/TargetCoordinates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limitswitch__msg__TargetCoordinates__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limitswitch
limitswitch__msg__TargetCoordinates *
limitswitch__msg__TargetCoordinates__create();

/// Destroy msg/TargetCoordinates message.
/**
 * It calls
 * limitswitch__msg__TargetCoordinates__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limitswitch
void
limitswitch__msg__TargetCoordinates__destroy(limitswitch__msg__TargetCoordinates * msg);

/// Check for msg/TargetCoordinates message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limitswitch
bool
limitswitch__msg__TargetCoordinates__are_equal(const limitswitch__msg__TargetCoordinates * lhs, const limitswitch__msg__TargetCoordinates * rhs);

/// Copy a msg/TargetCoordinates message.
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
ROSIDL_GENERATOR_C_PUBLIC_limitswitch
bool
limitswitch__msg__TargetCoordinates__copy(
  const limitswitch__msg__TargetCoordinates * input,
  limitswitch__msg__TargetCoordinates * output);

/// Initialize array of msg/TargetCoordinates messages.
/**
 * It allocates the memory for the number of elements and calls
 * limitswitch__msg__TargetCoordinates__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limitswitch
bool
limitswitch__msg__TargetCoordinates__Sequence__init(limitswitch__msg__TargetCoordinates__Sequence * array, size_t size);

/// Finalize array of msg/TargetCoordinates messages.
/**
 * It calls
 * limitswitch__msg__TargetCoordinates__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limitswitch
void
limitswitch__msg__TargetCoordinates__Sequence__fini(limitswitch__msg__TargetCoordinates__Sequence * array);

/// Create array of msg/TargetCoordinates messages.
/**
 * It allocates the memory for the array and calls
 * limitswitch__msg__TargetCoordinates__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limitswitch
limitswitch__msg__TargetCoordinates__Sequence *
limitswitch__msg__TargetCoordinates__Sequence__create(size_t size);

/// Destroy array of msg/TargetCoordinates messages.
/**
 * It calls
 * limitswitch__msg__TargetCoordinates__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limitswitch
void
limitswitch__msg__TargetCoordinates__Sequence__destroy(limitswitch__msg__TargetCoordinates__Sequence * array);

/// Check for msg/TargetCoordinates message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limitswitch
bool
limitswitch__msg__TargetCoordinates__Sequence__are_equal(const limitswitch__msg__TargetCoordinates__Sequence * lhs, const limitswitch__msg__TargetCoordinates__Sequence * rhs);

/// Copy an array of msg/TargetCoordinates messages.
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
ROSIDL_GENERATOR_C_PUBLIC_limitswitch
bool
limitswitch__msg__TargetCoordinates__Sequence__copy(
  const limitswitch__msg__TargetCoordinates__Sequence * input,
  limitswitch__msg__TargetCoordinates__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LIMITSWITCH__MSG__DETAIL__TARGET_COORDINATES__FUNCTIONS_H_
