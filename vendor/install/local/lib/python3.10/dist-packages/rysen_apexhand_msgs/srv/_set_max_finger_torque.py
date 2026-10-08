# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rysen_apexhand_msgs:srv/SetMaxFingerTorque.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'finger_ids'
# Member 'max_torques'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetMaxFingerTorque_Request(type):
    """Metaclass of message 'SetMaxFingerTorque_Request'."""

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
                'rysen_apexhand_msgs.srv.SetMaxFingerTorque_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_max_finger_torque__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_max_finger_torque__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_max_finger_torque__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_max_finger_torque__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_max_finger_torque__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMaxFingerTorque_Request(metaclass=Metaclass_SetMaxFingerTorque_Request):
    """Message class 'SetMaxFingerTorque_Request'."""

    __slots__ = [
        '_ip',
        '_get_only',
        '_finger_ids',
        '_max_torques',
    ]

    _fields_and_field_types = {
        'ip': 'string',
        'get_only': 'boolean',
        'finger_ids': 'sequence<uint8>',
        'max_torques': 'sequence<double>',
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
        self.finger_ids = array.array('B', kwargs.get('finger_ids', []))
        self.max_torques = array.array('d', kwargs.get('max_torques', []))

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
        if self.finger_ids != other.finger_ids:
            return False
        if self.max_torques != other.max_torques:
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
    def finger_ids(self):
        """Message field 'finger_ids'."""
        return self._finger_ids

    @finger_ids.setter
    def finger_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'finger_ids' array.array() must have the type code of 'B'"
            self._finger_ids = value
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
                "The 'finger_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._finger_ids = array.array('B', value)

    @builtins.property
    def max_torques(self):
        """Message field 'max_torques'."""
        return self._max_torques

    @max_torques.setter
    def max_torques(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'max_torques' array.array() must have the type code of 'd'"
            self._max_torques = value
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
                "The 'max_torques' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._max_torques = array.array('d', value)


# Import statements for member types

# Member 'max_torques'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_SetMaxFingerTorque_Response(type):
    """Metaclass of message 'SetMaxFingerTorque_Response'."""

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
                'rysen_apexhand_msgs.srv.SetMaxFingerTorque_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_max_finger_torque__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_max_finger_torque__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_max_finger_torque__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_max_finger_torque__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_max_finger_torque__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMaxFingerTorque_Response(metaclass=Metaclass_SetMaxFingerTorque_Response):
    """Message class 'SetMaxFingerTorque_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_max_torques',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'max_torques': 'sequence<double>',
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
        self.max_torques = array.array('d', kwargs.get('max_torques', []))

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
        if self.max_torques != other.max_torques:
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
    def max_torques(self):
        """Message field 'max_torques'."""
        return self._max_torques

    @max_torques.setter
    def max_torques(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'max_torques' array.array() must have the type code of 'd'"
            self._max_torques = value
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
                "The 'max_torques' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._max_torques = array.array('d', value)


class Metaclass_SetMaxFingerTorque(type):
    """Metaclass of service 'SetMaxFingerTorque'."""

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
                'rysen_apexhand_msgs.srv.SetMaxFingerTorque')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_max_finger_torque

            from rysen_apexhand_msgs.srv import _set_max_finger_torque
            if _set_max_finger_torque.Metaclass_SetMaxFingerTorque_Request._TYPE_SUPPORT is None:
                _set_max_finger_torque.Metaclass_SetMaxFingerTorque_Request.__import_type_support__()
            if _set_max_finger_torque.Metaclass_SetMaxFingerTorque_Response._TYPE_SUPPORT is None:
                _set_max_finger_torque.Metaclass_SetMaxFingerTorque_Response.__import_type_support__()


class SetMaxFingerTorque(metaclass=Metaclass_SetMaxFingerTorque):
    from rysen_apexhand_msgs.srv._set_max_finger_torque import SetMaxFingerTorque_Request as Request
    from rysen_apexhand_msgs.srv._set_max_finger_torque import SetMaxFingerTorque_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
