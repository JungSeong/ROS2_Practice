# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg_srv_action_interface_example:action/ArithmeticChecker.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArithmeticChecker_Goal(type):
    """Metaclass of message 'ArithmeticChecker_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_example')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_example.action.ArithmeticChecker_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arithmetic_checker__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arithmetic_checker__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arithmetic_checker__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__arithmetic_checker__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arithmetic_checker__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArithmeticChecker_Goal(metaclass=Metaclass_ArithmeticChecker_Goal):
    """Message class 'ArithmeticChecker_Goal'."""

    __slots__ = [
        '_goal_sum',
    ]

    _fields_and_field_types = {
        'goal_sum': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goal_sum = kwargs.get('goal_sum', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_sum != other.goal_sum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_sum(self):
        """Message field 'goal_sum'."""
        return self._goal_sum

    @goal_sum.setter
    def goal_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_sum' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'goal_sum' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._goal_sum = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_ArithmeticChecker_Result(type):
    """Metaclass of message 'ArithmeticChecker_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_example')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_example.action.ArithmeticChecker_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arithmetic_checker__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arithmetic_checker__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arithmetic_checker__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__arithmetic_checker__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arithmetic_checker__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArithmeticChecker_Result(metaclass=Metaclass_ArithmeticChecker_Result):
    """Message class 'ArithmeticChecker_Result'."""

    __slots__ = [
        '_all_formula',
        '_total_sum',
    ]

    _fields_and_field_types = {
        'all_formula': 'sequence<string>',
        'total_sum': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.all_formula = kwargs.get('all_formula', [])
        self.total_sum = kwargs.get('total_sum', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.all_formula != other.all_formula:
            return False
        if self.total_sum != other.total_sum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def all_formula(self):
        """Message field 'all_formula'."""
        return self._all_formula

    @all_formula.setter
    def all_formula(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'all_formula' field must be a set or sequence and each value of type 'str'"
        self._all_formula = value

    @builtins.property
    def total_sum(self):
        """Message field 'total_sum'."""
        return self._total_sum

    @total_sum.setter
    def total_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_sum' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_sum' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_sum = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArithmeticChecker_Feedback(type):
    """Metaclass of message 'ArithmeticChecker_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_example')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_example.action.ArithmeticChecker_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arithmetic_checker__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arithmetic_checker__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arithmetic_checker__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__arithmetic_checker__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arithmetic_checker__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArithmeticChecker_Feedback(metaclass=Metaclass_ArithmeticChecker_Feedback):
    """Message class 'ArithmeticChecker_Feedback'."""

    __slots__ = [
        '_formula',
    ]

    _fields_and_field_types = {
        'formula': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.formula = kwargs.get('formula', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.formula != other.formula:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def formula(self):
        """Message field 'formula'."""
        return self._formula

    @formula.setter
    def formula(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'formula' field must be a set or sequence and each value of type 'str'"
        self._formula = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArithmeticChecker_SendGoal_Request(type):
    """Metaclass of message 'ArithmeticChecker_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_example')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_example.action.ArithmeticChecker_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arithmetic_checker__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arithmetic_checker__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arithmetic_checker__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__arithmetic_checker__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arithmetic_checker__send_goal__request

            from msg_srv_action_interface_example.action import ArithmeticChecker
            if ArithmeticChecker.Goal.__class__._TYPE_SUPPORT is None:
                ArithmeticChecker.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArithmeticChecker_SendGoal_Request(metaclass=Metaclass_ArithmeticChecker_SendGoal_Request):
    """Message class 'ArithmeticChecker_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'msg_srv_action_interface_example/ArithmeticChecker_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['msg_srv_action_interface_example', 'action'], 'ArithmeticChecker_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_Goal
        self.goal = kwargs.get('goal', ArithmeticChecker_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_Goal
            assert \
                isinstance(value, ArithmeticChecker_Goal), \
                "The 'goal' field must be a sub message of type 'ArithmeticChecker_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArithmeticChecker_SendGoal_Response(type):
    """Metaclass of message 'ArithmeticChecker_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_example')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_example.action.ArithmeticChecker_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arithmetic_checker__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arithmetic_checker__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arithmetic_checker__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__arithmetic_checker__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arithmetic_checker__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArithmeticChecker_SendGoal_Response(metaclass=Metaclass_ArithmeticChecker_SendGoal_Response):
    """Message class 'ArithmeticChecker_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_ArithmeticChecker_SendGoal(type):
    """Metaclass of service 'ArithmeticChecker_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_example')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_example.action.ArithmeticChecker_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__arithmetic_checker__send_goal

            from msg_srv_action_interface_example.action import _arithmetic_checker
            if _arithmetic_checker.Metaclass_ArithmeticChecker_SendGoal_Request._TYPE_SUPPORT is None:
                _arithmetic_checker.Metaclass_ArithmeticChecker_SendGoal_Request.__import_type_support__()
            if _arithmetic_checker.Metaclass_ArithmeticChecker_SendGoal_Response._TYPE_SUPPORT is None:
                _arithmetic_checker.Metaclass_ArithmeticChecker_SendGoal_Response.__import_type_support__()


class ArithmeticChecker_SendGoal(metaclass=Metaclass_ArithmeticChecker_SendGoal):
    from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_SendGoal_Request as Request
    from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArithmeticChecker_GetResult_Request(type):
    """Metaclass of message 'ArithmeticChecker_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_example')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_example.action.ArithmeticChecker_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arithmetic_checker__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arithmetic_checker__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arithmetic_checker__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__arithmetic_checker__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arithmetic_checker__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArithmeticChecker_GetResult_Request(metaclass=Metaclass_ArithmeticChecker_GetResult_Request):
    """Message class 'ArithmeticChecker_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArithmeticChecker_GetResult_Response(type):
    """Metaclass of message 'ArithmeticChecker_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_example')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_example.action.ArithmeticChecker_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arithmetic_checker__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arithmetic_checker__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arithmetic_checker__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__arithmetic_checker__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arithmetic_checker__get_result__response

            from msg_srv_action_interface_example.action import ArithmeticChecker
            if ArithmeticChecker.Result.__class__._TYPE_SUPPORT is None:
                ArithmeticChecker.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArithmeticChecker_GetResult_Response(metaclass=Metaclass_ArithmeticChecker_GetResult_Response):
    """Message class 'ArithmeticChecker_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'msg_srv_action_interface_example/ArithmeticChecker_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['msg_srv_action_interface_example', 'action'], 'ArithmeticChecker_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_Result
        self.result = kwargs.get('result', ArithmeticChecker_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_Result
            assert \
                isinstance(value, ArithmeticChecker_Result), \
                "The 'result' field must be a sub message of type 'ArithmeticChecker_Result'"
        self._result = value


class Metaclass_ArithmeticChecker_GetResult(type):
    """Metaclass of service 'ArithmeticChecker_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_example')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_example.action.ArithmeticChecker_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__arithmetic_checker__get_result

            from msg_srv_action_interface_example.action import _arithmetic_checker
            if _arithmetic_checker.Metaclass_ArithmeticChecker_GetResult_Request._TYPE_SUPPORT is None:
                _arithmetic_checker.Metaclass_ArithmeticChecker_GetResult_Request.__import_type_support__()
            if _arithmetic_checker.Metaclass_ArithmeticChecker_GetResult_Response._TYPE_SUPPORT is None:
                _arithmetic_checker.Metaclass_ArithmeticChecker_GetResult_Response.__import_type_support__()


class ArithmeticChecker_GetResult(metaclass=Metaclass_ArithmeticChecker_GetResult):
    from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_GetResult_Request as Request
    from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArithmeticChecker_FeedbackMessage(type):
    """Metaclass of message 'ArithmeticChecker_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_example')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_example.action.ArithmeticChecker_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arithmetic_checker__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arithmetic_checker__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arithmetic_checker__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__arithmetic_checker__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arithmetic_checker__feedback_message

            from msg_srv_action_interface_example.action import ArithmeticChecker
            if ArithmeticChecker.Feedback.__class__._TYPE_SUPPORT is None:
                ArithmeticChecker.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArithmeticChecker_FeedbackMessage(metaclass=Metaclass_ArithmeticChecker_FeedbackMessage):
    """Message class 'ArithmeticChecker_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'msg_srv_action_interface_example/ArithmeticChecker_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['msg_srv_action_interface_example', 'action'], 'ArithmeticChecker_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_Feedback
        self.feedback = kwargs.get('feedback', ArithmeticChecker_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_Feedback
            assert \
                isinstance(value, ArithmeticChecker_Feedback), \
                "The 'feedback' field must be a sub message of type 'ArithmeticChecker_Feedback'"
        self._feedback = value


class Metaclass_ArithmeticChecker(type):
    """Metaclass of action 'ArithmeticChecker'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_example')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_example.action.ArithmeticChecker')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__arithmetic_checker

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from msg_srv_action_interface_example.action import _arithmetic_checker
            if _arithmetic_checker.Metaclass_ArithmeticChecker_SendGoal._TYPE_SUPPORT is None:
                _arithmetic_checker.Metaclass_ArithmeticChecker_SendGoal.__import_type_support__()
            if _arithmetic_checker.Metaclass_ArithmeticChecker_GetResult._TYPE_SUPPORT is None:
                _arithmetic_checker.Metaclass_ArithmeticChecker_GetResult.__import_type_support__()
            if _arithmetic_checker.Metaclass_ArithmeticChecker_FeedbackMessage._TYPE_SUPPORT is None:
                _arithmetic_checker.Metaclass_ArithmeticChecker_FeedbackMessage.__import_type_support__()


class ArithmeticChecker(metaclass=Metaclass_ArithmeticChecker):

    # The goal message defined in the action definition.
    from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_Goal as Goal
    # The result message defined in the action definition.
    from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_Result as Result
    # The feedback message defined in the action definition.
    from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from msg_srv_action_interface_example.action._arithmetic_checker import ArithmeticChecker_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
