#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Burst_Request() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__Burst_Request__init(msg: *mut Burst_Request) -> bool;
    fn rosbag2_interfaces__srv__Burst_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Burst_Request>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__Burst_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Burst_Request>);
    fn rosbag2_interfaces__srv__Burst_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Burst_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Burst_Request>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__Burst_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Burst_Request {
    /// Number of messages to burst
    pub num_messages: u64,

}



impl Default for Burst_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__Burst_Request__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__Burst_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Burst_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Burst_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Burst_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Burst_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Burst_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Burst_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/Burst_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Burst_Request() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Burst_Response() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__Burst_Response__init(msg: *mut Burst_Response) -> bool;
    fn rosbag2_interfaces__srv__Burst_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Burst_Response>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__Burst_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Burst_Response>);
    fn rosbag2_interfaces__srv__Burst_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Burst_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Burst_Response>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__Burst_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Burst_Response {
    /// Number of messages actually burst
    pub actually_burst: u64,

}



impl Default for Burst_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__Burst_Response__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__Burst_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Burst_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Burst_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Burst_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Burst_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Burst_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Burst_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/Burst_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Burst_Response() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__GetRate_Request() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__GetRate_Request__init(msg: *mut GetRate_Request) -> bool;
    fn rosbag2_interfaces__srv__GetRate_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetRate_Request>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__GetRate_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetRate_Request>);
    fn rosbag2_interfaces__srv__GetRate_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetRate_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetRate_Request>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__GetRate_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRate_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetRate_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__GetRate_Request__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__GetRate_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetRate_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__GetRate_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__GetRate_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__GetRate_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetRate_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetRate_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/GetRate_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__GetRate_Request() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__GetRate_Response() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__GetRate_Response__init(msg: *mut GetRate_Response) -> bool;
    fn rosbag2_interfaces__srv__GetRate_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetRate_Response>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__GetRate_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetRate_Response>);
    fn rosbag2_interfaces__srv__GetRate_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetRate_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetRate_Response>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__GetRate_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRate_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub rate: f64,

}



impl Default for GetRate_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__GetRate_Response__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__GetRate_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetRate_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__GetRate_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__GetRate_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__GetRate_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetRate_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetRate_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/GetRate_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__GetRate_Response() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__IsPaused_Request() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__IsPaused_Request__init(msg: *mut IsPaused_Request) -> bool;
    fn rosbag2_interfaces__srv__IsPaused_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsPaused_Request>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__IsPaused_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsPaused_Request>);
    fn rosbag2_interfaces__srv__IsPaused_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsPaused_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IsPaused_Request>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__IsPaused_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsPaused_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for IsPaused_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__IsPaused_Request__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__IsPaused_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsPaused_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__IsPaused_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__IsPaused_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__IsPaused_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsPaused_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsPaused_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/IsPaused_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__IsPaused_Request() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__IsPaused_Response() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__IsPaused_Response__init(msg: *mut IsPaused_Response) -> bool;
    fn rosbag2_interfaces__srv__IsPaused_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsPaused_Response>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__IsPaused_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsPaused_Response>);
    fn rosbag2_interfaces__srv__IsPaused_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsPaused_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IsPaused_Response>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__IsPaused_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsPaused_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub paused: bool,

}



impl Default for IsPaused_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__IsPaused_Response__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__IsPaused_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsPaused_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__IsPaused_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__IsPaused_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__IsPaused_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsPaused_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsPaused_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/IsPaused_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__IsPaused_Response() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Pause_Request() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__Pause_Request__init(msg: *mut Pause_Request) -> bool;
    fn rosbag2_interfaces__srv__Pause_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Pause_Request>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__Pause_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Pause_Request>);
    fn rosbag2_interfaces__srv__Pause_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Pause_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Pause_Request>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__Pause_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pause_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Pause_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__Pause_Request__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__Pause_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Pause_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Pause_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Pause_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Pause_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Pause_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Pause_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/Pause_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Pause_Request() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Pause_Response() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__Pause_Response__init(msg: *mut Pause_Response) -> bool;
    fn rosbag2_interfaces__srv__Pause_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Pause_Response>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__Pause_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Pause_Response>);
    fn rosbag2_interfaces__srv__Pause_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Pause_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Pause_Response>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__Pause_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pause_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Pause_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__Pause_Response__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__Pause_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Pause_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Pause_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Pause_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Pause_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Pause_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Pause_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/Pause_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Pause_Response() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__PlayNext_Request() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__PlayNext_Request__init(msg: *mut PlayNext_Request) -> bool;
    fn rosbag2_interfaces__srv__PlayNext_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayNext_Request>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__PlayNext_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayNext_Request>);
    fn rosbag2_interfaces__srv__PlayNext_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayNext_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayNext_Request>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__PlayNext_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayNext_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for PlayNext_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__PlayNext_Request__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__PlayNext_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayNext_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__PlayNext_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__PlayNext_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__PlayNext_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayNext_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayNext_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/PlayNext_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__PlayNext_Request() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__PlayNext_Response() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__PlayNext_Response__init(msg: *mut PlayNext_Response) -> bool;
    fn rosbag2_interfaces__srv__PlayNext_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayNext_Response>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__PlayNext_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayNext_Response>);
    fn rosbag2_interfaces__srv__PlayNext_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayNext_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayNext_Response>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__PlayNext_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayNext_Response {
    /// can only play-next while playback is paused
    pub success: bool,

}



impl Default for PlayNext_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__PlayNext_Response__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__PlayNext_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayNext_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__PlayNext_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__PlayNext_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__PlayNext_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayNext_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayNext_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/PlayNext_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__PlayNext_Response() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Resume_Request() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__Resume_Request__init(msg: *mut Resume_Request) -> bool;
    fn rosbag2_interfaces__srv__Resume_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Resume_Request>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__Resume_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Resume_Request>);
    fn rosbag2_interfaces__srv__Resume_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Resume_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Resume_Request>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__Resume_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Resume_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Resume_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__Resume_Request__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__Resume_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Resume_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Resume_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Resume_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Resume_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Resume_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Resume_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/Resume_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Resume_Request() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Resume_Response() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__Resume_Response__init(msg: *mut Resume_Response) -> bool;
    fn rosbag2_interfaces__srv__Resume_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Resume_Response>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__Resume_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Resume_Response>);
    fn rosbag2_interfaces__srv__Resume_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Resume_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Resume_Response>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__Resume_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Resume_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Resume_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__Resume_Response__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__Resume_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Resume_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Resume_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Resume_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Resume_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Resume_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Resume_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/Resume_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Resume_Response() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Seek_Request() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__Seek_Request__init(msg: *mut Seek_Request) -> bool;
    fn rosbag2_interfaces__srv__Seek_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Seek_Request>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__Seek_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Seek_Request>);
    fn rosbag2_interfaces__srv__Seek_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Seek_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Seek_Request>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__Seek_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Seek_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: builtin_interfaces::msg::rmw::Time,

}



impl Default for Seek_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__Seek_Request__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__Seek_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Seek_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Seek_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Seek_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Seek_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Seek_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Seek_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/Seek_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Seek_Request() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Seek_Response() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__Seek_Response__init(msg: *mut Seek_Response) -> bool;
    fn rosbag2_interfaces__srv__Seek_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Seek_Response>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__Seek_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Seek_Response>);
    fn rosbag2_interfaces__srv__Seek_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Seek_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Seek_Response>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__Seek_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Seek_Response {
    /// return true if valid time in bag duration, and successful seek
    pub success: bool,

}



impl Default for Seek_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__Seek_Response__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__Seek_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Seek_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Seek_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Seek_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Seek_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Seek_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Seek_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/Seek_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Seek_Response() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__SetRate_Request() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__SetRate_Request__init(msg: *mut SetRate_Request) -> bool;
    fn rosbag2_interfaces__srv__SetRate_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetRate_Request>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__SetRate_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetRate_Request>);
    fn rosbag2_interfaces__srv__SetRate_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetRate_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetRate_Request>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__SetRate_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRate_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub rate: f64,

}



impl Default for SetRate_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__SetRate_Request__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__SetRate_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetRate_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__SetRate_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__SetRate_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__SetRate_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetRate_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetRate_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/SetRate_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__SetRate_Request() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__SetRate_Response() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__SetRate_Response__init(msg: *mut SetRate_Response) -> bool;
    fn rosbag2_interfaces__srv__SetRate_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetRate_Response>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__SetRate_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetRate_Response>);
    fn rosbag2_interfaces__srv__SetRate_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetRate_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetRate_Response>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__SetRate_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRate_Response {
    /// true if valid rate (> 0) was set
    pub success: bool,

}



impl Default for SetRate_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__SetRate_Response__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__SetRate_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetRate_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__SetRate_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__SetRate_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__SetRate_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetRate_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetRate_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/SetRate_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__SetRate_Response() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Snapshot_Request() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__Snapshot_Request__init(msg: *mut Snapshot_Request) -> bool;
    fn rosbag2_interfaces__srv__Snapshot_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Snapshot_Request>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__Snapshot_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Snapshot_Request>);
    fn rosbag2_interfaces__srv__Snapshot_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Snapshot_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Snapshot_Request>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__Snapshot_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Snapshot_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Snapshot_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__Snapshot_Request__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__Snapshot_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Snapshot_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Snapshot_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Snapshot_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Snapshot_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Snapshot_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Snapshot_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/Snapshot_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Snapshot_Request() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Snapshot_Response() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__Snapshot_Response__init(msg: *mut Snapshot_Response) -> bool;
    fn rosbag2_interfaces__srv__Snapshot_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Snapshot_Response>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__Snapshot_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Snapshot_Response>);
    fn rosbag2_interfaces__srv__Snapshot_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Snapshot_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Snapshot_Response>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__Snapshot_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Snapshot_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for Snapshot_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__Snapshot_Response__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__Snapshot_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Snapshot_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Snapshot_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Snapshot_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__Snapshot_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Snapshot_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Snapshot_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/Snapshot_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__Snapshot_Response() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__TogglePaused_Request() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__TogglePaused_Request__init(msg: *mut TogglePaused_Request) -> bool;
    fn rosbag2_interfaces__srv__TogglePaused_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TogglePaused_Request>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__TogglePaused_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TogglePaused_Request>);
    fn rosbag2_interfaces__srv__TogglePaused_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TogglePaused_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TogglePaused_Request>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__TogglePaused_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TogglePaused_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for TogglePaused_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__TogglePaused_Request__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__TogglePaused_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TogglePaused_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__TogglePaused_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__TogglePaused_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__TogglePaused_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TogglePaused_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TogglePaused_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/TogglePaused_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__TogglePaused_Request() }
  }
}


#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__TogglePaused_Response() -> *const std::ffi::c_void;
}

#[link(name = "rosbag2_interfaces__rosidl_generator_c")]
extern "C" {
    fn rosbag2_interfaces__srv__TogglePaused_Response__init(msg: *mut TogglePaused_Response) -> bool;
    fn rosbag2_interfaces__srv__TogglePaused_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TogglePaused_Response>, size: usize) -> bool;
    fn rosbag2_interfaces__srv__TogglePaused_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TogglePaused_Response>);
    fn rosbag2_interfaces__srv__TogglePaused_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TogglePaused_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TogglePaused_Response>) -> bool;
}

// Corresponds to rosbag2_interfaces__srv__TogglePaused_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TogglePaused_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for TogglePaused_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rosbag2_interfaces__srv__TogglePaused_Response__init(&mut msg as *mut _) {
        panic!("Call to rosbag2_interfaces__srv__TogglePaused_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TogglePaused_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__TogglePaused_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__TogglePaused_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rosbag2_interfaces__srv__TogglePaused_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TogglePaused_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TogglePaused_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rosbag2_interfaces/srv/TogglePaused_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rosbag2_interfaces__srv__TogglePaused_Response() }
  }
}






#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__Burst() -> *const std::ffi::c_void;
}

// Corresponds to rosbag2_interfaces__srv__Burst
#[allow(missing_docs, non_camel_case_types)]
pub struct Burst;

impl rosidl_runtime_rs::Service for Burst {
    type Request = Burst_Request;
    type Response = Burst_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__Burst() }
    }
}




#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__GetRate() -> *const std::ffi::c_void;
}

// Corresponds to rosbag2_interfaces__srv__GetRate
#[allow(missing_docs, non_camel_case_types)]
pub struct GetRate;

impl rosidl_runtime_rs::Service for GetRate {
    type Request = GetRate_Request;
    type Response = GetRate_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__GetRate() }
    }
}




#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__IsPaused() -> *const std::ffi::c_void;
}

// Corresponds to rosbag2_interfaces__srv__IsPaused
#[allow(missing_docs, non_camel_case_types)]
pub struct IsPaused;

impl rosidl_runtime_rs::Service for IsPaused {
    type Request = IsPaused_Request;
    type Response = IsPaused_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__IsPaused() }
    }
}




#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__Pause() -> *const std::ffi::c_void;
}

// Corresponds to rosbag2_interfaces__srv__Pause
#[allow(missing_docs, non_camel_case_types)]
pub struct Pause;

impl rosidl_runtime_rs::Service for Pause {
    type Request = Pause_Request;
    type Response = Pause_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__Pause() }
    }
}




#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__PlayNext() -> *const std::ffi::c_void;
}

// Corresponds to rosbag2_interfaces__srv__PlayNext
#[allow(missing_docs, non_camel_case_types)]
pub struct PlayNext;

impl rosidl_runtime_rs::Service for PlayNext {
    type Request = PlayNext_Request;
    type Response = PlayNext_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__PlayNext() }
    }
}




#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__Resume() -> *const std::ffi::c_void;
}

// Corresponds to rosbag2_interfaces__srv__Resume
#[allow(missing_docs, non_camel_case_types)]
pub struct Resume;

impl rosidl_runtime_rs::Service for Resume {
    type Request = Resume_Request;
    type Response = Resume_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__Resume() }
    }
}




#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__Seek() -> *const std::ffi::c_void;
}

// Corresponds to rosbag2_interfaces__srv__Seek
#[allow(missing_docs, non_camel_case_types)]
pub struct Seek;

impl rosidl_runtime_rs::Service for Seek {
    type Request = Seek_Request;
    type Response = Seek_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__Seek() }
    }
}




#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__SetRate() -> *const std::ffi::c_void;
}

// Corresponds to rosbag2_interfaces__srv__SetRate
#[allow(missing_docs, non_camel_case_types)]
pub struct SetRate;

impl rosidl_runtime_rs::Service for SetRate {
    type Request = SetRate_Request;
    type Response = SetRate_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__SetRate() }
    }
}




#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__Snapshot() -> *const std::ffi::c_void;
}

// Corresponds to rosbag2_interfaces__srv__Snapshot
#[allow(missing_docs, non_camel_case_types)]
pub struct Snapshot;

impl rosidl_runtime_rs::Service for Snapshot {
    type Request = Snapshot_Request;
    type Response = Snapshot_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__Snapshot() }
    }
}




#[link(name = "rosbag2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__TogglePaused() -> *const std::ffi::c_void;
}

// Corresponds to rosbag2_interfaces__srv__TogglePaused
#[allow(missing_docs, non_camel_case_types)]
pub struct TogglePaused;

impl rosidl_runtime_rs::Service for TogglePaused {
    type Request = TogglePaused_Request;
    type Response = TogglePaused_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rosbag2_interfaces__srv__TogglePaused() }
    }
}


