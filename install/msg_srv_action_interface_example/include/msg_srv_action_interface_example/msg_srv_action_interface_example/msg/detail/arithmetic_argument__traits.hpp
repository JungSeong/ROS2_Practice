// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_srv_action_interface_example:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__TRAITS_HPP_
#define MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg_srv_action_interface_example/msg/detail/arithmetic_argument__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace msg_srv_action_interface_example
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArithmeticArgument & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: argument_a
  {
    out << "argument_a: ";
    rosidl_generator_traits::value_to_yaml(msg.argument_a, out);
    out << ", ";
  }

  // member: argument_b
  {
    out << "argument_b: ";
    rosidl_generator_traits::value_to_yaml(msg.argument_b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArithmeticArgument & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: argument_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "argument_a: ";
    rosidl_generator_traits::value_to_yaml(msg.argument_a, out);
    out << "\n";
  }

  // member: argument_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "argument_b: ";
    rosidl_generator_traits::value_to_yaml(msg.argument_b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArithmeticArgument & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace msg_srv_action_interface_example

namespace rosidl_generator_traits
{

[[deprecated("use msg_srv_action_interface_example::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_srv_action_interface_example::msg::ArithmeticArgument & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_srv_action_interface_example::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_srv_action_interface_example::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg_srv_action_interface_example::msg::ArithmeticArgument & msg)
{
  return msg_srv_action_interface_example::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg_srv_action_interface_example::msg::ArithmeticArgument>()
{
  return "msg_srv_action_interface_example::msg::ArithmeticArgument";
}

template<>
inline const char * name<msg_srv_action_interface_example::msg::ArithmeticArgument>()
{
  return "msg_srv_action_interface_example/msg/ArithmeticArgument";
}

template<>
struct has_fixed_size<msg_srv_action_interface_example::msg::ArithmeticArgument>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<msg_srv_action_interface_example::msg::ArithmeticArgument>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<msg_srv_action_interface_example::msg::ArithmeticArgument>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__TRAITS_HPP_
