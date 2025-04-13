// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msg_srv_action_interface_example:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__FUNCTIONS_H_
#define MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msg_srv_action_interface_example/msg/rosidl_generator_c__visibility_control.h"

#include "msg_srv_action_interface_example/msg/detail/arithmetic_argument__struct.h"

/// Initialize msg/ArithmeticArgument message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_srv_action_interface_example__msg__ArithmeticArgument
 * )) before or use
 * msg_srv_action_interface_example__msg__ArithmeticArgument__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__msg__ArithmeticArgument__init(msg_srv_action_interface_example__msg__ArithmeticArgument * msg);

/// Finalize msg/ArithmeticArgument message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__msg__ArithmeticArgument__fini(msg_srv_action_interface_example__msg__ArithmeticArgument * msg);

/// Create msg/ArithmeticArgument message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_srv_action_interface_example__msg__ArithmeticArgument__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__msg__ArithmeticArgument *
msg_srv_action_interface_example__msg__ArithmeticArgument__create();

/// Destroy msg/ArithmeticArgument message.
/**
 * It calls
 * msg_srv_action_interface_example__msg__ArithmeticArgument__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__msg__ArithmeticArgument__destroy(msg_srv_action_interface_example__msg__ArithmeticArgument * msg);

/// Check for msg/ArithmeticArgument message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__msg__ArithmeticArgument__are_equal(const msg_srv_action_interface_example__msg__ArithmeticArgument * lhs, const msg_srv_action_interface_example__msg__ArithmeticArgument * rhs);

/// Copy a msg/ArithmeticArgument message.
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
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__msg__ArithmeticArgument__copy(
  const msg_srv_action_interface_example__msg__ArithmeticArgument * input,
  msg_srv_action_interface_example__msg__ArithmeticArgument * output);

/// Initialize array of msg/ArithmeticArgument messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_srv_action_interface_example__msg__ArithmeticArgument__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence__init(msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence * array, size_t size);

/// Finalize array of msg/ArithmeticArgument messages.
/**
 * It calls
 * msg_srv_action_interface_example__msg__ArithmeticArgument__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence__fini(msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence * array);

/// Create array of msg/ArithmeticArgument messages.
/**
 * It allocates the memory for the array and calls
 * msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence *
msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence__create(size_t size);

/// Destroy array of msg/ArithmeticArgument messages.
/**
 * It calls
 * msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence__destroy(msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence * array);

/// Check for msg/ArithmeticArgument message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence__are_equal(const msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence * lhs, const msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence * rhs);

/// Copy an array of msg/ArithmeticArgument messages.
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
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence__copy(
  const msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence * input,
  msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__FUNCTIONS_H_
