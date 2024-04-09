# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ball_detection_message:msg/BallOutput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BallOutput(type):
    """Metaclass of message 'BallOutput'."""

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
            module = import_type_support('ball_detection_message')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ball_detection_message.msg.BallOutput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ball_output
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ball_output
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ball_output
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ball_output
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ball_output

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BallOutput(metaclass=Metaclass_BallOutput):
    """Message class 'BallOutput'."""

    __slots__ = [
        '_x_1',
        '_y_1',
        '_x_2',
        '_y_2',
        '_ball_check',
    ]

    _fields_and_field_types = {
        'x_1': 'uint32',
        'y_1': 'uint32',
        'x_2': 'uint32',
        'y_2': 'uint32',
        'ball_check': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_1 = kwargs.get('x_1', int())
        self.y_1 = kwargs.get('y_1', int())
        self.x_2 = kwargs.get('x_2', int())
        self.y_2 = kwargs.get('y_2', int())
        self.ball_check = kwargs.get('ball_check', bool())

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
        if self.x_1 != other.x_1:
            return False
        if self.y_1 != other.y_1:
            return False
        if self.x_2 != other.x_2:
            return False
        if self.y_2 != other.y_2:
            return False
        if self.ball_check != other.ball_check:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x_1(self):
        """Message field 'x_1'."""
        return self._x_1

    @x_1.setter
    def x_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x_1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'x_1' field must be an unsigned integer in [0, 4294967295]"
        self._x_1 = value

    @builtins.property
    def y_1(self):
        """Message field 'y_1'."""
        return self._y_1

    @y_1.setter
    def y_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y_1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'y_1' field must be an unsigned integer in [0, 4294967295]"
        self._y_1 = value

    @builtins.property
    def x_2(self):
        """Message field 'x_2'."""
        return self._x_2

    @x_2.setter
    def x_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x_2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'x_2' field must be an unsigned integer in [0, 4294967295]"
        self._x_2 = value

    @builtins.property
    def y_2(self):
        """Message field 'y_2'."""
        return self._y_2

    @y_2.setter
    def y_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y_2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'y_2' field must be an unsigned integer in [0, 4294967295]"
        self._y_2 = value

    @builtins.property
    def ball_check(self):
        """Message field 'ball_check'."""
        return self._ball_check

    @ball_check.setter
    def ball_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ball_check' field must be of type 'bool'"
        self._ball_check = value
