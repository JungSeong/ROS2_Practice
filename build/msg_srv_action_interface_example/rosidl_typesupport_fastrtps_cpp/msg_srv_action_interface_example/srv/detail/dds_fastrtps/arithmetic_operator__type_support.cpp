// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from msg_srv_action_interface_example:srv/ArithmeticOperator.idl
// generated code does not contain a copyright notice
#include "msg_srv_action_interface_example/srv/detail/arithmetic_operator__rosidl_typesupport_fastrtps_cpp.hpp"
#include "msg_srv_action_interface_example/srv/detail/arithmetic_operator__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace msg_srv_action_interface_example
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_serialize(
  const msg_srv_action_interface_example::srv::ArithmeticOperator_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: arithmetic_operator
  cdr << ros_message.arithmetic_operator;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_srv_action_interface_example::srv::ArithmeticOperator_Request & ros_message)
{
  // Member: arithmetic_operator
  cdr >> ros_message.arithmetic_operator;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_example
get_serialized_size(
  const msg_srv_action_interface_example::srv::ArithmeticOperator_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: arithmetic_operator
  {
    size_t item_size = sizeof(ros_message.arithmetic_operator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_example
max_serialized_size_ArithmeticOperator_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: arithmetic_operator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = msg_srv_action_interface_example::srv::ArithmeticOperator_Request;
    is_plain =
      (
      offsetof(DataType, arithmetic_operator) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ArithmeticOperator_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::srv::ArithmeticOperator_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArithmeticOperator_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_srv_action_interface_example::srv::ArithmeticOperator_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArithmeticOperator_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::srv::ArithmeticOperator_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArithmeticOperator_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArithmeticOperator_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArithmeticOperator_Request__callbacks = {
  "msg_srv_action_interface_example::srv",
  "ArithmeticOperator_Request",
  _ArithmeticOperator_Request__cdr_serialize,
  _ArithmeticOperator_Request__cdr_deserialize,
  _ArithmeticOperator_Request__get_serialized_size,
  _ArithmeticOperator_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticOperator_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArithmeticOperator_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_example::srv::ArithmeticOperator_Request>()
{
  return &msg_srv_action_interface_example::srv::typesupport_fastrtps_cpp::_ArithmeticOperator_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_srv_action_interface_example, srv, ArithmeticOperator_Request)() {
  return &msg_srv_action_interface_example::srv::typesupport_fastrtps_cpp::_ArithmeticOperator_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace msg_srv_action_interface_example
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_serialize(
  const msg_srv_action_interface_example::srv::ArithmeticOperator_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: arithmetic_result
  cdr << ros_message.arithmetic_result;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_srv_action_interface_example::srv::ArithmeticOperator_Response & ros_message)
{
  // Member: arithmetic_result
  cdr >> ros_message.arithmetic_result;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_example
get_serialized_size(
  const msg_srv_action_interface_example::srv::ArithmeticOperator_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: arithmetic_result
  {
    size_t item_size = sizeof(ros_message.arithmetic_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_example
max_serialized_size_ArithmeticOperator_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: arithmetic_result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = msg_srv_action_interface_example::srv::ArithmeticOperator_Response;
    is_plain =
      (
      offsetof(DataType, arithmetic_result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ArithmeticOperator_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::srv::ArithmeticOperator_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArithmeticOperator_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_srv_action_interface_example::srv::ArithmeticOperator_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArithmeticOperator_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_example::srv::ArithmeticOperator_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArithmeticOperator_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArithmeticOperator_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArithmeticOperator_Response__callbacks = {
  "msg_srv_action_interface_example::srv",
  "ArithmeticOperator_Response",
  _ArithmeticOperator_Response__cdr_serialize,
  _ArithmeticOperator_Response__cdr_deserialize,
  _ArithmeticOperator_Response__get_serialized_size,
  _ArithmeticOperator_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticOperator_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArithmeticOperator_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_example::srv::ArithmeticOperator_Response>()
{
  return &msg_srv_action_interface_example::srv::typesupport_fastrtps_cpp::_ArithmeticOperator_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_srv_action_interface_example, srv, ArithmeticOperator_Response)() {
  return &msg_srv_action_interface_example::srv::typesupport_fastrtps_cpp::_ArithmeticOperator_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace msg_srv_action_interface_example
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ArithmeticOperator__callbacks = {
  "msg_srv_action_interface_example::srv",
  "ArithmeticOperator",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_srv_action_interface_example, srv, ArithmeticOperator_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_srv_action_interface_example, srv, ArithmeticOperator_Response)(),
};

static rosidl_service_type_support_t _ArithmeticOperator__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArithmeticOperator__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace msg_srv_action_interface_example

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msg_srv_action_interface_example
const rosidl_service_type_support_t *
get_service_type_support_handle<msg_srv_action_interface_example::srv::ArithmeticOperator>()
{
  return &msg_srv_action_interface_example::srv::typesupport_fastrtps_cpp::_ArithmeticOperator__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_srv_action_interface_example, srv, ArithmeticOperator)() {
  return &msg_srv_action_interface_example::srv::typesupport_fastrtps_cpp::_ArithmeticOperator__handle;
}

#ifdef __cplusplus
}
#endif
