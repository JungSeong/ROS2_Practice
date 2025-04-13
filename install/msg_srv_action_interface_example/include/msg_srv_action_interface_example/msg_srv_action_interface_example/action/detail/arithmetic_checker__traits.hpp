// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_srv_action_interface_example:action/ArithmeticChecker.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_EXAMPLE__ACTION__DETAIL__ARITHMETIC_CHECKER__TRAITS_HPP_
#define MSG_SRV_ACTION_INTERFACE_EXAMPLE__ACTION__DETAIL__ARITHMETIC_CHECKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg_srv_action_interface_example
{

namespace action
{

inline void to_flow_style_yaml(
  const ArithmeticChecker_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_sum
  {
    out << "goal_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArithmeticChecker_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArithmeticChecker_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_generator_traits
{

[[deprecated("use msg_srv_action_interface_example::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_srv_action_interface_example::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_srv_action_interface_example::action::to_yaml() instead")]]
inline std::string to_yaml(const msg_srv_action_interface_example::action::ArithmeticChecker_Goal & msg)
{
  return msg_srv_action_interface_example::action::to_yaml(msg);
}

template<>
inline const char * data_type<msg_srv_action_interface_example::action::ArithmeticChecker_Goal>()
{
  return "msg_srv_action_interface_example::action::ArithmeticChecker_Goal";
}

template<>
inline const char * name<msg_srv_action_interface_example::action::ArithmeticChecker_Goal>()
{
  return "msg_srv_action_interface_example/action/ArithmeticChecker_Goal";
}

template<>
struct has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg_srv_action_interface_example::action::ArithmeticChecker_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace msg_srv_action_interface_example
{

namespace action
{

inline void to_flow_style_yaml(
  const ArithmeticChecker_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: all_formula
  {
    if (msg.all_formula.size() == 0) {
      out << "all_formula: []";
    } else {
      out << "all_formula: [";
      size_t pending_items = msg.all_formula.size();
      for (auto item : msg.all_formula) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: total_sum
  {
    out << "total_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.total_sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArithmeticChecker_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: all_formula
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.all_formula.size() == 0) {
      out << "all_formula: []\n";
    } else {
      out << "all_formula:\n";
      for (auto item : msg.all_formula) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: total_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.total_sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArithmeticChecker_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_generator_traits
{

[[deprecated("use msg_srv_action_interface_example::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_srv_action_interface_example::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_srv_action_interface_example::action::to_yaml() instead")]]
inline std::string to_yaml(const msg_srv_action_interface_example::action::ArithmeticChecker_Result & msg)
{
  return msg_srv_action_interface_example::action::to_yaml(msg);
}

template<>
inline const char * data_type<msg_srv_action_interface_example::action::ArithmeticChecker_Result>()
{
  return "msg_srv_action_interface_example::action::ArithmeticChecker_Result";
}

template<>
inline const char * name<msg_srv_action_interface_example::action::ArithmeticChecker_Result>()
{
  return "msg_srv_action_interface_example/action/ArithmeticChecker_Result";
}

template<>
struct has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg_srv_action_interface_example::action::ArithmeticChecker_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace msg_srv_action_interface_example
{

namespace action
{

inline void to_flow_style_yaml(
  const ArithmeticChecker_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: formul
  {
    if (msg.formul.size() == 0) {
      out << "formul: []";
    } else {
      out << "formul: [";
      size_t pending_items = msg.formul.size();
      for (auto item : msg.formul) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArithmeticChecker_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: formul
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.formul.size() == 0) {
      out << "formul: []\n";
    } else {
      out << "formul:\n";
      for (auto item : msg.formul) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArithmeticChecker_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_generator_traits
{

[[deprecated("use msg_srv_action_interface_example::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_srv_action_interface_example::action::ArithmeticChecker_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_srv_action_interface_example::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_srv_action_interface_example::action::to_yaml() instead")]]
inline std::string to_yaml(const msg_srv_action_interface_example::action::ArithmeticChecker_Feedback & msg)
{
  return msg_srv_action_interface_example::action::to_yaml(msg);
}

template<>
inline const char * data_type<msg_srv_action_interface_example::action::ArithmeticChecker_Feedback>()
{
  return "msg_srv_action_interface_example::action::ArithmeticChecker_Feedback";
}

template<>
inline const char * name<msg_srv_action_interface_example::action::ArithmeticChecker_Feedback>()
{
  return "msg_srv_action_interface_example/action/ArithmeticChecker_Feedback";
}

template<>
struct has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg_srv_action_interface_example::action::ArithmeticChecker_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "msg_srv_action_interface_example/action/detail/arithmetic_checker__traits.hpp"

namespace msg_srv_action_interface_example
{

namespace action
{

inline void to_flow_style_yaml(
  const ArithmeticChecker_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArithmeticChecker_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArithmeticChecker_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_generator_traits
{

[[deprecated("use msg_srv_action_interface_example::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_srv_action_interface_example::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_srv_action_interface_example::action::to_yaml() instead")]]
inline std::string to_yaml(const msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request & msg)
{
  return msg_srv_action_interface_example::action::to_yaml(msg);
}

template<>
inline const char * data_type<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request>()
{
  return "msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request";
}

template<>
inline const char * name<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request>()
{
  return "msg_srv_action_interface_example/action/ArithmeticChecker_SendGoal_Request";
}

template<>
struct has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace msg_srv_action_interface_example
{

namespace action
{

inline void to_flow_style_yaml(
  const ArithmeticChecker_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArithmeticChecker_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArithmeticChecker_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_generator_traits
{

[[deprecated("use msg_srv_action_interface_example::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_srv_action_interface_example::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_srv_action_interface_example::action::to_yaml() instead")]]
inline std::string to_yaml(const msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response & msg)
{
  return msg_srv_action_interface_example::action::to_yaml(msg);
}

template<>
inline const char * data_type<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response>()
{
  return "msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response";
}

template<>
inline const char * name<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response>()
{
  return "msg_srv_action_interface_example/action/ArithmeticChecker_SendGoal_Response";
}

template<>
struct has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal>()
{
  return "msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal";
}

template<>
inline const char * name<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal>()
{
  return "msg_srv_action_interface_example/action/ArithmeticChecker_SendGoal";
}

template<>
struct has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request>::value &&
    has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request>::value &&
    has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace msg_srv_action_interface_example
{

namespace action
{

inline void to_flow_style_yaml(
  const ArithmeticChecker_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArithmeticChecker_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArithmeticChecker_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_generator_traits
{

[[deprecated("use msg_srv_action_interface_example::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_srv_action_interface_example::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_srv_action_interface_example::action::to_yaml() instead")]]
inline std::string to_yaml(const msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request & msg)
{
  return msg_srv_action_interface_example::action::to_yaml(msg);
}

template<>
inline const char * data_type<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request>()
{
  return "msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request";
}

template<>
inline const char * name<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request>()
{
  return "msg_srv_action_interface_example/action/ArithmeticChecker_GetResult_Request";
}

template<>
struct has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__traits.hpp"

namespace msg_srv_action_interface_example
{

namespace action
{

inline void to_flow_style_yaml(
  const ArithmeticChecker_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArithmeticChecker_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArithmeticChecker_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_generator_traits
{

[[deprecated("use msg_srv_action_interface_example::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_srv_action_interface_example::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_srv_action_interface_example::action::to_yaml() instead")]]
inline std::string to_yaml(const msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response & msg)
{
  return msg_srv_action_interface_example::action::to_yaml(msg);
}

template<>
inline const char * data_type<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response>()
{
  return "msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response";
}

template<>
inline const char * name<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response>()
{
  return "msg_srv_action_interface_example/action/ArithmeticChecker_GetResult_Response";
}

template<>
struct has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_Result>::value> {};

template<>
struct has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_Result>::value> {};

template<>
struct is_message<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult>()
{
  return "msg_srv_action_interface_example::action::ArithmeticChecker_GetResult";
}

template<>
inline const char * name<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult>()
{
  return "msg_srv_action_interface_example/action/ArithmeticChecker_GetResult";
}

template<>
struct has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request>::value &&
    has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request>::value &&
    has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response>::value
  >
{
};

template<>
struct is_service<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__traits.hpp"

namespace msg_srv_action_interface_example
{

namespace action
{

inline void to_flow_style_yaml(
  const ArithmeticChecker_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArithmeticChecker_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArithmeticChecker_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace msg_srv_action_interface_example

namespace rosidl_generator_traits
{

[[deprecated("use msg_srv_action_interface_example::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_srv_action_interface_example::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_srv_action_interface_example::action::to_yaml() instead")]]
inline std::string to_yaml(const msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage & msg)
{
  return msg_srv_action_interface_example::action::to_yaml(msg);
}

template<>
inline const char * data_type<msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage>()
{
  return "msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage";
}

template<>
inline const char * name<msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage>()
{
  return "msg_srv_action_interface_example/action/ArithmeticChecker_FeedbackMessage";
}

template<>
struct has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<msg_srv_action_interface_example::action::ArithmeticChecker_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<msg_srv_action_interface_example::action::ArithmeticChecker_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<msg_srv_action_interface_example::action::ArithmeticChecker>
  : std::true_type
{
};

template<>
struct is_action_goal<msg_srv_action_interface_example::action::ArithmeticChecker_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<msg_srv_action_interface_example::action::ArithmeticChecker_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<msg_srv_action_interface_example::action::ArithmeticChecker_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MSG_SRV_ACTION_INTERFACE_EXAMPLE__ACTION__DETAIL__ARITHMETIC_CHECKER__TRAITS_HPP_
