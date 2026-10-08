#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "manus_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__msg__ManusGlove() -> *const std::ffi::c_void;
}

#[link(name = "manus_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn manus_ros2_msgs__msg__ManusGlove__init(msg: *mut ManusGlove) -> bool;
    fn manus_ros2_msgs__msg__ManusGlove__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ManusGlove>, size: usize) -> bool;
    fn manus_ros2_msgs__msg__ManusGlove__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ManusGlove>);
    fn manus_ros2_msgs__msg__ManusGlove__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ManusGlove>, out_seq: *mut rosidl_runtime_rs::Sequence<ManusGlove>) -> bool;
}

// Corresponds to manus_ros2_msgs__msg__ManusGlove
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManusGlove {

    // This member is not documented.
    #[allow(missing_docs)]
    pub glove_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub side: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw_node_count: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw_nodes: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ManusRawNode>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ergonomics_count: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ergonomics: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ManusErgonomics>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw_sensor_orientation: geometry_msgs::msg::rmw::Quaternion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw_sensor_count: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw_sensor: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Pose>,

}



impl Default for ManusGlove {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !manus_ros2_msgs__msg__ManusGlove__init(&mut msg as *mut _) {
        panic!("Call to manus_ros2_msgs__msg__ManusGlove__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ManusGlove {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__msg__ManusGlove__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__msg__ManusGlove__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__msg__ManusGlove__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ManusGlove {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ManusGlove where Self: Sized {
  const TYPE_NAME: &'static str = "manus_ros2_msgs/msg/ManusGlove";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__msg__ManusGlove() }
  }
}


#[link(name = "manus_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__msg__ManusRawNode() -> *const std::ffi::c_void;
}

#[link(name = "manus_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn manus_ros2_msgs__msg__ManusRawNode__init(msg: *mut ManusRawNode) -> bool;
    fn manus_ros2_msgs__msg__ManusRawNode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ManusRawNode>, size: usize) -> bool;
    fn manus_ros2_msgs__msg__ManusRawNode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ManusRawNode>);
    fn manus_ros2_msgs__msg__ManusRawNode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ManusRawNode>, out_seq: *mut rosidl_runtime_rs::Sequence<ManusRawNode>) -> bool;
}

// Corresponds to manus_ros2_msgs__msg__ManusRawNode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManusRawNode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parent_node_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub chain_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,

}



impl Default for ManusRawNode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !manus_ros2_msgs__msg__ManusRawNode__init(&mut msg as *mut _) {
        panic!("Call to manus_ros2_msgs__msg__ManusRawNode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ManusRawNode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__msg__ManusRawNode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__msg__ManusRawNode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__msg__ManusRawNode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ManusRawNode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ManusRawNode where Self: Sized {
  const TYPE_NAME: &'static str = "manus_ros2_msgs/msg/ManusRawNode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__msg__ManusRawNode() }
  }
}


#[link(name = "manus_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__msg__ManusErgonomics() -> *const std::ffi::c_void;
}

#[link(name = "manus_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn manus_ros2_msgs__msg__ManusErgonomics__init(msg: *mut ManusErgonomics) -> bool;
    fn manus_ros2_msgs__msg__ManusErgonomics__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ManusErgonomics>, size: usize) -> bool;
    fn manus_ros2_msgs__msg__ManusErgonomics__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ManusErgonomics>);
    fn manus_ros2_msgs__msg__ManusErgonomics__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ManusErgonomics>, out_seq: *mut rosidl_runtime_rs::Sequence<ManusErgonomics>) -> bool;
}

// Corresponds to manus_ros2_msgs__msg__ManusErgonomics
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManusErgonomics {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f32,

}



impl Default for ManusErgonomics {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !manus_ros2_msgs__msg__ManusErgonomics__init(&mut msg as *mut _) {
        panic!("Call to manus_ros2_msgs__msg__ManusErgonomics__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ManusErgonomics {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__msg__ManusErgonomics__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__msg__ManusErgonomics__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__msg__ManusErgonomics__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ManusErgonomics {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ManusErgonomics where Self: Sized {
  const TYPE_NAME: &'static str = "manus_ros2_msgs/msg/ManusErgonomics";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__msg__ManusErgonomics() }
  }
}


#[link(name = "manus_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__msg__ManusVibrationCommand() -> *const std::ffi::c_void;
}

#[link(name = "manus_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn manus_ros2_msgs__msg__ManusVibrationCommand__init(msg: *mut ManusVibrationCommand) -> bool;
    fn manus_ros2_msgs__msg__ManusVibrationCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ManusVibrationCommand>, size: usize) -> bool;
    fn manus_ros2_msgs__msg__ManusVibrationCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ManusVibrationCommand>);
    fn manus_ros2_msgs__msg__ManusVibrationCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ManusVibrationCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<ManusVibrationCommand>) -> bool;
}

// Corresponds to manus_ros2_msgs__msg__ManusVibrationCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// msg/ManusVibrationCommand.msg

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManusVibrationCommand {
    /// Thumb, Index, Middle, Ring, Pinky
    pub intensities: [f32; 5],

}



impl Default for ManusVibrationCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !manus_ros2_msgs__msg__ManusVibrationCommand__init(&mut msg as *mut _) {
        panic!("Call to manus_ros2_msgs__msg__ManusVibrationCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ManusVibrationCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__msg__ManusVibrationCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__msg__ManusVibrationCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__msg__ManusVibrationCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ManusVibrationCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ManusVibrationCommand where Self: Sized {
  const TYPE_NAME: &'static str = "manus_ros2_msgs/msg/ManusVibrationCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__msg__ManusVibrationCommand() }
  }
}


