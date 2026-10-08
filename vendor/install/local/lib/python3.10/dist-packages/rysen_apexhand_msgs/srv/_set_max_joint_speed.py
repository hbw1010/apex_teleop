# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rysen_apexhand_msgs:srv/SetMaxJointSpeed.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'joint_ids'
# Member 'max_speeds'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetMaxJointSpeed_Request(type):
    """Metaclass of message 'SetMaxJointSpeed_Request'."""

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
            module = import_type_support('rysen_apexhand_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rysen_apexhand_msgs.srv.SetMaxJointSpeed_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_max_joint_speed__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_max_joint_speed__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_max_joint_speed__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_max_joint_speed__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_max_joint_speed__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMaxJointSpeed_Request(metaclass=Metaclass_SetMaxJointSpeed_Request):
    """Message class 'SetMaxJointSpeed_Request'."""

    __slots__ = [
        '_ip',
        '_get_only',
        '_joint_ids',
        '_max_speeds',
    ]

    _fields_and_field_types = {
        'ip': 'string',
        'get_only': 'boolean',
        'joint_ids': 'sequence<uint8>',
        'max_speeds': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ip = kwargs.get('ip', str())
        self.get_only = kwargs.get('get_only', bool())
        self.joint_ids = array.array('B', kwargs.get('joint_ids', []))
        self.max_speeds = array.array('d', kwargs.get('max_speeds', []))

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
        if self.ip != other.ip:
            return False
        if self.get_only != other.get_only:
            return False
        if self.joint_ids != other.joint_ids:
            return False
        if self.max_speeds != other.max_speeds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ip(self):
        """Message field 'ip'."""
        return self._ip

    @ip.setter
    def ip(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ip' field must be of type 'str'"
        self._ip = value

    @builtins.property
    def get_only(self):
        """Message field 'get_only'."""
        return self._get_only

    @get_only.setter
    def get_only(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'get_only' field must be of type 'bool'"
        self._get_only = value

    @builtins.property
    def joint_ids(self):
        """Message field 'joint_ids'."""
        return self._joint_ids

    @joint_ids.setter
    def joint_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'joint_ids' array.array() must have the type code of 'B'"
            self._joint_ids = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'joint_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._joint_ids = array.array('B', value)

    @builtins.property
    def max_speeds(self):
        """Message field 'max_speeds'."""
        return self._max_speeds

    @max_speeds.setter
    def max_speeds(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'max_speeds' array.array() must have the type code of 'd'"
            self._max_speeds = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'max_speeds' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._max_speeds = array.array('d', value)


# Import statements for member types

# Member 'max_speeds'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_SetMaxJointSpeed_Response(type):
    """Metaclass of message 'SetMaxJointSpeed_Response'."""

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
            module = import_type_support('rysen_apexhand_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rysen_apexhand_msgs.srv.SetMaxJointSpeed_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_max_joint_speed__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_max_joint_speed__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_max_joint_speed__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_max_joint_speed__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_max_joint_speed__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMaxJointSpeed_Response(metaclass=Metaclass_SetMaxJointSpeed_Response):
    """Message class 'SetMaxJointSpeed_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_max_speeds',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'max_speeds': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.max_speeds = array.array('d', kwargs.get('max_speeds', []))

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.max_speeds != other.max_speeds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def max_speeds(self):
        """Message field 'max_speeds'."""
        return self._max_speeds

    @max_speeds.setter
    def max_speeds(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'max_speeds' array.array() must have the type code of 'd'"
            self._max_speeds = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'max_speeds' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._max_speeds = array.array('d', value)


class Metaclass_SetMaxJointSpeed(type):
    """Metaclass of service 'SetMaxJointSpeed'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rysen_apexhand_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rysen_apexhand_msgs.srv.SetMaxJointSpeed')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_max_joint_speed

            from rysen_apexhand_msgs.srv import _set_max_joint_speed
            if _set_max_joint_speed.Metaclass_SetMaxJointSpeed_Request._TYPE_SUPPORT is None:
                _set_max_joint_speed.Metaclass_SetMaxJointSpeed_Request.__import_type_support__()
            if _set_max_joint_speed.Metaclass_SetMaxJointSpeed_Response._TYPE_SUPPORT is None:
                _set_max_joint_speed.Metaclass_SetMaxJointSpeed_Response.__import_type_support__()


class SetMaxJointSpeed(metaclass=Metaclass_SetMaxJointSpeed):
    from rysen_apexhand_msgs.srv._set_max_joint_speed import SetMaxJointSpeed_Request as Request
    from rysen_apexhand_msgs.srv._set_max_joint_speed import SetMaxJointSpeed_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
