# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rysen_apexhand_msgs:srv/GetVersionInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetVersionInfo_Request(type):
    """Metaclass of message 'GetVersionInfo_Request'."""

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
                'rysen_apexhand_msgs.srv.GetVersionInfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_version_info__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_version_info__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_version_info__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_version_info__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_version_info__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetVersionInfo_Request(metaclass=Metaclass_GetVersionInfo_Request):
    """Message class 'GetVersionInfo_Request'."""

    __slots__ = [
        '_ip',
    ]

    _fields_and_field_types = {
        'ip': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ip = kwargs.get('ip', str())

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetVersionInfo_Response(type):
    """Metaclass of message 'GetVersionInfo_Response'."""

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
                'rysen_apexhand_msgs.srv.GetVersionInfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_version_info__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_version_info__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_version_info__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_version_info__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_version_info__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetVersionInfo_Response(metaclass=Metaclass_GetVersionInfo_Response):
    """Message class 'GetVersionInfo_Response'."""

    __slots__ = [
        '_sdk_version',
        '_hand_firmware_version',
        '_touch_sensor_version',
    ]

    _fields_and_field_types = {
        'sdk_version': 'string',
        'hand_firmware_version': 'string',
        'touch_sensor_version': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sdk_version = kwargs.get('sdk_version', str())
        self.hand_firmware_version = kwargs.get('hand_firmware_version', str())
        self.touch_sensor_version = kwargs.get('touch_sensor_version', str())

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
        if self.sdk_version != other.sdk_version:
            return False
        if self.hand_firmware_version != other.hand_firmware_version:
            return False
        if self.touch_sensor_version != other.touch_sensor_version:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sdk_version(self):
        """Message field 'sdk_version'."""
        return self._sdk_version

    @sdk_version.setter
    def sdk_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sdk_version' field must be of type 'str'"
        self._sdk_version = value

    @builtins.property
    def hand_firmware_version(self):
        """Message field 'hand_firmware_version'."""
        return self._hand_firmware_version

    @hand_firmware_version.setter
    def hand_firmware_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hand_firmware_version' field must be of type 'str'"
        self._hand_firmware_version = value

    @builtins.property
    def touch_sensor_version(self):
        """Message field 'touch_sensor_version'."""
        return self._touch_sensor_version

    @touch_sensor_version.setter
    def touch_sensor_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'touch_sensor_version' field must be of type 'str'"
        self._touch_sensor_version = value


class Metaclass_GetVersionInfo(type):
    """Metaclass of service 'GetVersionInfo'."""

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
                'rysen_apexhand_msgs.srv.GetVersionInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_version_info

            from rysen_apexhand_msgs.srv import _get_version_info
            if _get_version_info.Metaclass_GetVersionInfo_Request._TYPE_SUPPORT is None:
                _get_version_info.Metaclass_GetVersionInfo_Request.__import_type_support__()
            if _get_version_info.Metaclass_GetVersionInfo_Response._TYPE_SUPPORT is None:
                _get_version_info.Metaclass_GetVersionInfo_Response.__import_type_support__()


class GetVersionInfo(metaclass=Metaclass_GetVersionInfo):
    from rysen_apexhand_msgs.srv._get_version_info import GetVersionInfo_Request as Request
    from rysen_apexhand_msgs.srv._get_version_info import GetVersionInfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
