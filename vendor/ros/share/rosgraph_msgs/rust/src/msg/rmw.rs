#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rosgraph_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosgraph_msgs__msg__Clock() -> *const std::ffi::c_void;
}

#[link(name = "rosgraph_msgs__rosidl_generator_c")]
extern "C" {
    fn rosgraph_msgs__msg__Clock__init(msg: *mut Clock) -> bool;
    fn rosgraph_msgs__msg__Clock__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Clock>, size: usize) -> bool;
    fn rosgraph_msgs__msg__Clock__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Clock>);
    fn rosgraph_msgs__msg__Clock__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Clock>, out_seq: *mut rosidl_runtime_rs::Sequence<Clock>) -> bool;
}

// Corresponds to rosgraph_msgs__msg__Clock
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message communicates the current time.
///
/// For more information, see https://design.ros2.org/articles/clock_and_time.html.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Clock {

    // This member is not documented.
    #[allow(missing_docs)]
    pub clock: builtin_interfaces::msg::rmw::Time,

}



impl Default for Clock {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosgraph_msgs__msg__Clock__init(&mut msg as *mut _) {
        panic!("Call to rosgraph_msgs__msg__Clock__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Clock {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosgraph_msgs__msg__Clock__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosgraph_msgs__msg__Clock__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosgraph_msgs__msg__Clock__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Clock {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Clock where Self: Sized {
  const TYPE_NAME: &'static str = "rosgraph_msgs/msg/Clock";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosgraph_msgs__msg__Clock() }
  }
}


