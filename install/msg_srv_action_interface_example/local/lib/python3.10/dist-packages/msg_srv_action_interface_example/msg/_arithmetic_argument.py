# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg_srv_action_interface_example:msg/ArithmeticArgument.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArithmeticArgument(type):
    """Metaclass of message 'ArithmeticArgument'."""

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
                'msg_srv_action_interface_example.msg.ArithmeticArgument')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__arithmetic_argument
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__arithmetic_argument
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__arithmetic_argument
            cls._TYPE_SUPPORT = module.type_support_msg__msg__arithmetic_argument
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__arithmetic_argument

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


class ArithmeticArgument(metaclass=Metaclass_ArithmeticArgument):
    """Message class 'ArithmeticArgument'."""

    __slots__ = [
        '_stamp',
        '_argument_a',
        '_argument_b',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'argument_a': 'float',
        'argument_b': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.argument_a = kwargs.get('argument_a', float())
        self.argument_b = kwargs.get('argument_b', float())

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
        if self.stamp != other.stamp:
            return False
        if self.argument_a != other.argument_a:
            return False
        if self.argument_b != other.argument_b:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @builtins.property
    def argument_a(self):
        """Message field 'argument_a'."""
        return self._argument_a

    @argument_a.setter
    def argument_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'argument_a' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'argument_a' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._argument_a = value

    @builtins.property
    def argument_b(self):
        """Message field 'argument_b'."""
        return self._argument_b

    @argument_b.setter
    def argument_b(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'argument_b' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'argument_b' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._argument_b = value
