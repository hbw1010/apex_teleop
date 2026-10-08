#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__msg__ReadSplitEvent() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__msg__ReadSplitEvent__init(msg: *mut ReadSplitEvent) -> bool;
    fn rosbag2_interfaces__msg__ReadSplitEvent__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReadSplitEvent>, size: usize) -> bool;
    fn rosbag2_interfaces__msg__ReadSplitEvent__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReadSplitEvent>);
    fn rosbag2_interfaces__msg__ReadSplitEvent__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReadSplitEvent>, out_seq: *mut rosidl_runtime_rs::Sequence<ReadSplitEvent>) -> bool;
}

// Corresponds to rosbag2_interfaces__msg__ReadSplitEvent
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The full path of the file that was finished and closed

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReadSplitEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub closed_file: rosidl_runtime_rs::String,

    /// The full path of the new file that was opened to continue playback
    pub opened_file: rosidl_runtime_rs::String,

}



impl Default for ReadSplitEvent {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__msg__ReadSplitEvent__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__msg__ReadSplitEvent__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReadSplitEvent {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__msg__ReadSplitEvent__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__msg__ReadSplitEvent__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__msg__ReadSplitEvent__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReadSplitEvent {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReadSplitEvent where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/msg/ReadSplitEvent";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__msg__ReadSplitEvent() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__msg__WriteSplitEvent() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__msg__WriteSplitEvent__init(msg: *mut WriteSplitEvent) -> bool;
    fn rosbag2_interfaces__msg__WriteSplitEvent__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WriteSplitEvent>, size: usize) -> bool;
    fn rosbag2_interfaces__msg__WriteSplitEvent__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WriteSplitEvent>);
    fn rosbag2_interfaces__msg__WriteSplitEvent__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WriteSplitEvent>, out_seq: *mut rosidl_runtime_rs::Sequence<WriteSplitEvent>) -> bool;
}

// Corresponds to rosbag2_interfaces__msg__WriteSplitEvent
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The full path of the file that was finished and closed

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WriteSplitEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub closed_file: rosidl_runtime_rs::String,

    /// The full path of the new file that was created to continue recording
    pub opened_file: rosidl_runtime_rs::String,

}



impl Default for WriteSplitEvent {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__msg__WriteSplitEvent__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__msg__WriteSplitEvent__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WriteSplitEvent {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__msg__WriteSplitEvent__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__msg__WriteSplitEvent__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__msg__WriteSplitEvent__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WriteSplitEvent {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WriteSplitEvent where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/msg/WriteSplitEvent";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__msg__WriteSplitEvent() }
  }
}


