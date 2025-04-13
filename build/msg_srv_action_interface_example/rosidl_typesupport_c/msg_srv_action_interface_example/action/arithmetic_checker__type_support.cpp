// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from msg_srv_action_interface_example:action/ArithmeticChecker.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
#include "msg_srv_action_interface_example/action/detail/arithmetic_checker__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace msg_srv_action_interface_example
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ArithmeticChecker_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArithmeticChecker_Goal_type_support_ids_t;

static const _ArithmeticChecker_Goal_type_support_ids_t _ArithmeticChecker_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArithmeticChecker_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArithmeticChecker_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArithmeticChecker_Goal_type_support_symbol_names_t _ArithmeticChecker_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_action_interface_example, action, ArithmeticChecker_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_example, action, ArithmeticChecker_Goal)),
  }
};

typedef struct _ArithmeticChecker_Goal_type_support_data_t
{
  void * data[2];
} _ArithmeticChecker_Goal_type_support_data_t;

static _ArithmeticChecker_Goal_type_support_data_t _ArithmeticChecker_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArithmeticChecker_Goal_message_typesupport_map = {
  2,
  "msg_srv_action_interface_example",
  &_ArithmeticChecker_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ArithmeticChecker_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ArithmeticChecker_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArithmeticChecker_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArithmeticChecker_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msg_srv_action_interface_example

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msg_srv_action_interface_example, action, ArithmeticChecker_Goal)() {
  return &::msg_srv_action_interface_example::action::rosidl_typesupport_c::ArithmeticChecker_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msg_srv_action_interface_example
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ArithmeticChecker_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArithmeticChecker_Result_type_support_ids_t;

static const _ArithmeticChecker_Result_type_support_ids_t _ArithmeticChecker_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArithmeticChecker_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArithmeticChecker_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArithmeticChecker_Result_type_support_symbol_names_t _ArithmeticChecker_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_action_interface_example, action, ArithmeticChecker_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_example, action, ArithmeticChecker_Result)),
  }
};

typedef struct _ArithmeticChecker_Result_type_support_data_t
{
  void * data[2];
} _ArithmeticChecker_Result_type_support_data_t;

static _ArithmeticChecker_Result_type_support_data_t _ArithmeticChecker_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArithmeticChecker_Result_message_typesupport_map = {
  2,
  "msg_srv_action_interface_example",
  &_ArithmeticChecker_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ArithmeticChecker_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ArithmeticChecker_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArithmeticChecker_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArithmeticChecker_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msg_srv_action_interface_example

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msg_srv_action_interface_example, action, ArithmeticChecker_Result)() {
  return &::msg_srv_action_interface_example::action::rosidl_typesupport_c::ArithmeticChecker_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msg_srv_action_interface_example
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ArithmeticChecker_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArithmeticChecker_Feedback_type_support_ids_t;

static const _ArithmeticChecker_Feedback_type_support_ids_t _ArithmeticChecker_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArithmeticChecker_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArithmeticChecker_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArithmeticChecker_Feedback_type_support_symbol_names_t _ArithmeticChecker_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_action_interface_example, action, ArithmeticChecker_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_example, action, ArithmeticChecker_Feedback)),
  }
};

typedef struct _ArithmeticChecker_Feedback_type_support_data_t
{
  void * data[2];
} _ArithmeticChecker_Feedback_type_support_data_t;

static _ArithmeticChecker_Feedback_type_support_data_t _ArithmeticChecker_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArithmeticChecker_Feedback_message_typesupport_map = {
  2,
  "msg_srv_action_interface_example",
  &_ArithmeticChecker_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ArithmeticChecker_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ArithmeticChecker_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArithmeticChecker_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArithmeticChecker_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msg_srv_action_interface_example

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msg_srv_action_interface_example, action, ArithmeticChecker_Feedback)() {
  return &::msg_srv_action_interface_example::action::rosidl_typesupport_c::ArithmeticChecker_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msg_srv_action_interface_example
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ArithmeticChecker_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArithmeticChecker_SendGoal_Request_type_support_ids_t;

static const _ArithmeticChecker_SendGoal_Request_type_support_ids_t _ArithmeticChecker_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArithmeticChecker_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArithmeticChecker_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArithmeticChecker_SendGoal_Request_type_support_symbol_names_t _ArithmeticChecker_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal_Request)),
  }
};

typedef struct _ArithmeticChecker_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ArithmeticChecker_SendGoal_Request_type_support_data_t;

static _ArithmeticChecker_SendGoal_Request_type_support_data_t _ArithmeticChecker_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArithmeticChecker_SendGoal_Request_message_typesupport_map = {
  2,
  "msg_srv_action_interface_example",
  &_ArithmeticChecker_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ArithmeticChecker_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ArithmeticChecker_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArithmeticChecker_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArithmeticChecker_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msg_srv_action_interface_example

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal_Request)() {
  return &::msg_srv_action_interface_example::action::rosidl_typesupport_c::ArithmeticChecker_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msg_srv_action_interface_example
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ArithmeticChecker_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArithmeticChecker_SendGoal_Response_type_support_ids_t;

static const _ArithmeticChecker_SendGoal_Response_type_support_ids_t _ArithmeticChecker_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArithmeticChecker_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArithmeticChecker_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArithmeticChecker_SendGoal_Response_type_support_symbol_names_t _ArithmeticChecker_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal_Response)),
  }
};

typedef struct _ArithmeticChecker_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ArithmeticChecker_SendGoal_Response_type_support_data_t;

static _ArithmeticChecker_SendGoal_Response_type_support_data_t _ArithmeticChecker_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArithmeticChecker_SendGoal_Response_message_typesupport_map = {
  2,
  "msg_srv_action_interface_example",
  &_ArithmeticChecker_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ArithmeticChecker_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ArithmeticChecker_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArithmeticChecker_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArithmeticChecker_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msg_srv_action_interface_example

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal_Response)() {
  return &::msg_srv_action_interface_example::action::rosidl_typesupport_c::ArithmeticChecker_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msg_srv_action_interface_example
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ArithmeticChecker_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArithmeticChecker_SendGoal_type_support_ids_t;

static const _ArithmeticChecker_SendGoal_type_support_ids_t _ArithmeticChecker_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArithmeticChecker_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArithmeticChecker_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArithmeticChecker_SendGoal_type_support_symbol_names_t _ArithmeticChecker_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal)),
  }
};

typedef struct _ArithmeticChecker_SendGoal_type_support_data_t
{
  void * data[2];
} _ArithmeticChecker_SendGoal_type_support_data_t;

static _ArithmeticChecker_SendGoal_type_support_data_t _ArithmeticChecker_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArithmeticChecker_SendGoal_service_typesupport_map = {
  2,
  "msg_srv_action_interface_example",
  &_ArithmeticChecker_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ArithmeticChecker_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ArithmeticChecker_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ArithmeticChecker_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArithmeticChecker_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msg_srv_action_interface_example

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal)() {
  return &::msg_srv_action_interface_example::action::rosidl_typesupport_c::ArithmeticChecker_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msg_srv_action_interface_example
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ArithmeticChecker_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArithmeticChecker_GetResult_Request_type_support_ids_t;

static const _ArithmeticChecker_GetResult_Request_type_support_ids_t _ArithmeticChecker_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArithmeticChecker_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArithmeticChecker_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArithmeticChecker_GetResult_Request_type_support_symbol_names_t _ArithmeticChecker_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult_Request)),
  }
};

typedef struct _ArithmeticChecker_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ArithmeticChecker_GetResult_Request_type_support_data_t;

static _ArithmeticChecker_GetResult_Request_type_support_data_t _ArithmeticChecker_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArithmeticChecker_GetResult_Request_message_typesupport_map = {
  2,
  "msg_srv_action_interface_example",
  &_ArithmeticChecker_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ArithmeticChecker_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ArithmeticChecker_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArithmeticChecker_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArithmeticChecker_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msg_srv_action_interface_example

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult_Request)() {
  return &::msg_srv_action_interface_example::action::rosidl_typesupport_c::ArithmeticChecker_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msg_srv_action_interface_example
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ArithmeticChecker_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArithmeticChecker_GetResult_Response_type_support_ids_t;

static const _ArithmeticChecker_GetResult_Response_type_support_ids_t _ArithmeticChecker_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArithmeticChecker_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArithmeticChecker_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArithmeticChecker_GetResult_Response_type_support_symbol_names_t _ArithmeticChecker_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult_Response)),
  }
};

typedef struct _ArithmeticChecker_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ArithmeticChecker_GetResult_Response_type_support_data_t;

static _ArithmeticChecker_GetResult_Response_type_support_data_t _ArithmeticChecker_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArithmeticChecker_GetResult_Response_message_typesupport_map = {
  2,
  "msg_srv_action_interface_example",
  &_ArithmeticChecker_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ArithmeticChecker_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ArithmeticChecker_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArithmeticChecker_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArithmeticChecker_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msg_srv_action_interface_example

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult_Response)() {
  return &::msg_srv_action_interface_example::action::rosidl_typesupport_c::ArithmeticChecker_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msg_srv_action_interface_example
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ArithmeticChecker_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArithmeticChecker_GetResult_type_support_ids_t;

static const _ArithmeticChecker_GetResult_type_support_ids_t _ArithmeticChecker_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArithmeticChecker_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArithmeticChecker_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArithmeticChecker_GetResult_type_support_symbol_names_t _ArithmeticChecker_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult)),
  }
};

typedef struct _ArithmeticChecker_GetResult_type_support_data_t
{
  void * data[2];
} _ArithmeticChecker_GetResult_type_support_data_t;

static _ArithmeticChecker_GetResult_type_support_data_t _ArithmeticChecker_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArithmeticChecker_GetResult_service_typesupport_map = {
  2,
  "msg_srv_action_interface_example",
  &_ArithmeticChecker_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ArithmeticChecker_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ArithmeticChecker_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ArithmeticChecker_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArithmeticChecker_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msg_srv_action_interface_example

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult)() {
  return &::msg_srv_action_interface_example::action::rosidl_typesupport_c::ArithmeticChecker_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msg_srv_action_interface_example
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ArithmeticChecker_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArithmeticChecker_FeedbackMessage_type_support_ids_t;

static const _ArithmeticChecker_FeedbackMessage_type_support_ids_t _ArithmeticChecker_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArithmeticChecker_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArithmeticChecker_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArithmeticChecker_FeedbackMessage_type_support_symbol_names_t _ArithmeticChecker_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_action_interface_example, action, ArithmeticChecker_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_example, action, ArithmeticChecker_FeedbackMessage)),
  }
};

typedef struct _ArithmeticChecker_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ArithmeticChecker_FeedbackMessage_type_support_data_t;

static _ArithmeticChecker_FeedbackMessage_type_support_data_t _ArithmeticChecker_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArithmeticChecker_FeedbackMessage_message_typesupport_map = {
  2,
  "msg_srv_action_interface_example",
  &_ArithmeticChecker_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ArithmeticChecker_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ArithmeticChecker_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArithmeticChecker_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArithmeticChecker_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace msg_srv_action_interface_example

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, msg_srv_action_interface_example, action, ArithmeticChecker_FeedbackMessage)() {
  return &::msg_srv_action_interface_example::action::rosidl_typesupport_c::ArithmeticChecker_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "msg_srv_action_interface_example/action/arithmetic_checker.h"
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__type_support.h"

static rosidl_action_type_support_t _msg_srv_action_interface_example__action__ArithmeticChecker__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, msg_srv_action_interface_example, action, ArithmeticChecker)()
{
  // Thread-safe by always writing the same values to the static struct
  _msg_srv_action_interface_example__action__ArithmeticChecker__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, msg_srv_action_interface_example, action, ArithmeticChecker_SendGoal)();
  _msg_srv_action_interface_example__action__ArithmeticChecker__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, msg_srv_action_interface_example, action, ArithmeticChecker_GetResult)();
  _msg_srv_action_interface_example__action__ArithmeticChecker__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _msg_srv_action_interface_example__action__ArithmeticChecker__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, msg_srv_action_interface_example, action, ArithmeticChecker_FeedbackMessage)();
  _msg_srv_action_interface_example__action__ArithmeticChecker__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_msg_srv_action_interface_example__action__ArithmeticChecker__typesupport_c;
}

#ifdef __cplusplus
}
#endif
