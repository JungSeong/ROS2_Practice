// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_srv_action_interface_example:action/ArithmeticChecker.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_EXAMPLE__ACTION__DETAIL__ARITHMETIC_CHECKER__STRUCT_H_
#define MSG_SRV_ACTION_INTERFACE_EXAMPLE__ACTION__DETAIL__ARITHMETIC_CHECKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ArithmeticChecker in the package msg_srv_action_interface_example.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_Goal
{
  float goal_sum;
} msg_srv_action_interface_example__action__ArithmeticChecker_Goal;

// Struct for a sequence of msg_srv_action_interface_example__action__ArithmeticChecker_Goal.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence
{
  msg_srv_action_interface_example__action__ArithmeticChecker_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'all_formula'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ArithmeticChecker in the package msg_srv_action_interface_example.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_Result
{
  rosidl_runtime_c__String__Sequence all_formula;
  float total_sum;
} msg_srv_action_interface_example__action__ArithmeticChecker_Result;

// Struct for a sequence of msg_srv_action_interface_example__action__ArithmeticChecker_Result.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence
{
  msg_srv_action_interface_example__action__ArithmeticChecker_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'formul'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ArithmeticChecker in the package msg_srv_action_interface_example.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_Feedback
{
  rosidl_runtime_c__String__Sequence formul;
} msg_srv_action_interface_example__action__ArithmeticChecker_Feedback;

// Struct for a sequence of msg_srv_action_interface_example__action__ArithmeticChecker_Feedback.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence
{
  msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"

/// Struct defined in action/ArithmeticChecker in the package msg_srv_action_interface_example.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  msg_srv_action_interface_example__action__ArithmeticChecker_Goal goal;
} msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request;

// Struct for a sequence of msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence
{
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ArithmeticChecker in the package msg_srv_action_interface_example.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response;

// Struct for a sequence of msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence
{
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ArithmeticChecker in the package msg_srv_action_interface_example.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request;

// Struct for a sequence of msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence
{
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"

/// Struct defined in action/ArithmeticChecker in the package msg_srv_action_interface_example.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response
{
  int8_t status;
  msg_srv_action_interface_example__action__ArithmeticChecker_Result result;
} msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response;

// Struct for a sequence of msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence
{
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"

/// Struct defined in action/ArithmeticChecker in the package msg_srv_action_interface_example.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  msg_srv_action_interface_example__action__ArithmeticChecker_Feedback feedback;
} msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage;

// Struct for a sequence of msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage.
typedef struct msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence
{
  msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_SRV_ACTION_INTERFACE_EXAMPLE__ACTION__DETAIL__ARITHMETIC_CHECKER__STRUCT_H_
