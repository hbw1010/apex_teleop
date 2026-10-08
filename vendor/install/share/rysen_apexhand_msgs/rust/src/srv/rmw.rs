#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__MoveJoint_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__MoveJoint_Request__init(msg: *mut MoveJoint_Request) -> bool;
    fn rysen_apexhand_msgs__srv__MoveJoint_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveJoint_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__MoveJoint_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveJoint_Request>);
    fn rysen_apexhand_msgs__srv__MoveJoint_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveJoint_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveJoint_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__MoveJoint_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveJoint_Request {
    /// JOINT_ID_THUMB_CMC_ABD = 0
    /// JOINT_ID_THUMB_CMC_ROT = 1
    /// JOINT_ID_THUMB_CMC_FLEX = 2
    /// JOINT_ID_THUMB_MCP_FLEX = 3
    /// JOINT_ID_THUMB_IP_FLEX = 4
    /// JOINT_ID_INDEX_MCP_ABD = 5
    /// JOINT_ID_INDEX_MCP_FLEX = 6
    /// JOINT_ID_INDEX_PIP_FLEX = 7
    /// JOINT_ID_INDEX_DIP_FLEX = 8
    /// JOINT_ID_MIDDLE_MCP_ABD = 9
    /// JOINT_ID_MIDDLE_MCP_FLEX = 10
    /// JOINT_ID_MIDDLE_PIP_FLEX = 11
    /// JOINT_ID_MIDDLE_DIP_FLEX = 12
    /// JOINT_ID_RING_MCP_ABD = 13
    /// JOINT_ID_RING_MCP_FLEX = 14
    /// JOINT_ID_RING_PIP_FLEX = 15
    /// JOINT_ID_RING_DIP_FLEX = 16
    /// JOINT_ID_LITTLE_MCP_ABD = 17
    /// JOINT_ID_LITTLE_MCP_FLEX = 18
    /// JOINT_ID_LITTLE_PIP_FLEX = 19
    /// JOINT_ID_LITTLE_DIP_FLEX = 20
    pub ip: rosidl_runtime_rs::String,

    /// Joint IDs (0-20)
    pub joint_ids: rosidl_runtime_rs::Sequence<u8>,

    /// Target positions (rad)
    pub positions: rosidl_runtime_rs::Sequence<f64>,

    /// Target velocities (rad/s)
    pub velocities: rosidl_runtime_rs::Sequence<f64>,

    /// Target accelerations (rad/s²)
    pub accelerations: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for MoveJoint_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__MoveJoint_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__MoveJoint_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveJoint_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__MoveJoint_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__MoveJoint_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__MoveJoint_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveJoint_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveJoint_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/MoveJoint_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__MoveJoint_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__MoveJoint_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__MoveJoint_Response__init(msg: *mut MoveJoint_Response) -> bool;
    fn rysen_apexhand_msgs__srv__MoveJoint_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveJoint_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__MoveJoint_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveJoint_Response>);
    fn rysen_apexhand_msgs__srv__MoveJoint_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveJoint_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveJoint_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__MoveJoint_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveJoint_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for MoveJoint_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__MoveJoint_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__MoveJoint_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveJoint_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__MoveJoint_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__MoveJoint_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__MoveJoint_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveJoint_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveJoint_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/MoveJoint_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__MoveJoint_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetFingerEnabled_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__SetFingerEnabled_Request__init(msg: *mut SetFingerEnabled_Request) -> bool;
    fn rysen_apexhand_msgs__srv__SetFingerEnabled_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFingerEnabled_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__SetFingerEnabled_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFingerEnabled_Request>);
    fn rysen_apexhand_msgs__srv__SetFingerEnabled_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFingerEnabled_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFingerEnabled_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__SetFingerEnabled_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFingerEnabled_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: rosidl_runtime_rs::String,

    /// List of finger IDs to enable/disable
    pub finger_ids: rosidl_runtime_rs::Sequence<super::super::msg::rmw::FingerId>,

    /// true to enable, false to disable
    pub enable: bool,

}



impl Default for SetFingerEnabled_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__SetFingerEnabled_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__SetFingerEnabled_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFingerEnabled_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetFingerEnabled_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetFingerEnabled_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetFingerEnabled_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFingerEnabled_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFingerEnabled_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/SetFingerEnabled_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetFingerEnabled_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetFingerEnabled_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__SetFingerEnabled_Response__init(msg: *mut SetFingerEnabled_Response) -> bool;
    fn rysen_apexhand_msgs__srv__SetFingerEnabled_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFingerEnabled_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__SetFingerEnabled_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFingerEnabled_Response>);
    fn rysen_apexhand_msgs__srv__SetFingerEnabled_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFingerEnabled_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFingerEnabled_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__SetFingerEnabled_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFingerEnabled_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetFingerEnabled_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__SetFingerEnabled_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__SetFingerEnabled_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFingerEnabled_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetFingerEnabled_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetFingerEnabled_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetFingerEnabled_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFingerEnabled_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFingerEnabled_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/SetFingerEnabled_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetFingerEnabled_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request__init(msg: *mut SetDeviceIPAddress_Request) -> bool;
    fn rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetDeviceIPAddress_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetDeviceIPAddress_Request>);
    fn rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetDeviceIPAddress_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetDeviceIPAddress_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDeviceIPAddress_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub original_ip: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub new_ip: rosidl_runtime_rs::String,

}



impl Default for SetDeviceIPAddress_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetDeviceIPAddress_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetDeviceIPAddress_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetDeviceIPAddress_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/SetDeviceIPAddress_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response__init(msg: *mut SetDeviceIPAddress_Response) -> bool;
    fn rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetDeviceIPAddress_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetDeviceIPAddress_Response>);
    fn rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetDeviceIPAddress_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetDeviceIPAddress_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDeviceIPAddress_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetDeviceIPAddress_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetDeviceIPAddress_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetDeviceIPAddress_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetDeviceIPAddress_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/SetDeviceIPAddress_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__Connect_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__Connect_Request__init(msg: *mut Connect_Request) -> bool;
    fn rysen_apexhand_msgs__srv__Connect_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Connect_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__Connect_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Connect_Request>);
    fn rysen_apexhand_msgs__srv__Connect_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Connect_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Connect_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__Connect_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Connect_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub connect: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub connection_type: i32,

}



impl Default for Connect_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__Connect_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__Connect_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Connect_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__Connect_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__Connect_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__Connect_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Connect_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Connect_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/Connect_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__Connect_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__Connect_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__Connect_Response__init(msg: *mut Connect_Response) -> bool;
    fn rysen_apexhand_msgs__srv__Connect_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Connect_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__Connect_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Connect_Response>);
    fn rysen_apexhand_msgs__srv__Connect_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Connect_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Connect_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__Connect_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Connect_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for Connect_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__Connect_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__Connect_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Connect_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__Connect_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__Connect_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__Connect_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Connect_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Connect_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/Connect_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__Connect_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetAllFingersEnable_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__SetAllFingersEnable_Request__init(msg: *mut SetAllFingersEnable_Request) -> bool;
    fn rysen_apexhand_msgs__srv__SetAllFingersEnable_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetAllFingersEnable_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__SetAllFingersEnable_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetAllFingersEnable_Request>);
    fn rysen_apexhand_msgs__srv__SetAllFingersEnable_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetAllFingersEnable_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetAllFingersEnable_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__SetAllFingersEnable_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetAllFingersEnable_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enable: bool,

}



impl Default for SetAllFingersEnable_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__SetAllFingersEnable_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__SetAllFingersEnable_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetAllFingersEnable_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetAllFingersEnable_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetAllFingersEnable_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetAllFingersEnable_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetAllFingersEnable_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetAllFingersEnable_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/SetAllFingersEnable_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetAllFingersEnable_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetAllFingersEnable_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__SetAllFingersEnable_Response__init(msg: *mut SetAllFingersEnable_Response) -> bool;
    fn rysen_apexhand_msgs__srv__SetAllFingersEnable_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetAllFingersEnable_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__SetAllFingersEnable_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetAllFingersEnable_Response>);
    fn rysen_apexhand_msgs__srv__SetAllFingersEnable_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetAllFingersEnable_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetAllFingersEnable_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__SetAllFingersEnable_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetAllFingersEnable_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetAllFingersEnable_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__SetAllFingersEnable_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__SetAllFingersEnable_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetAllFingersEnable_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetAllFingersEnable_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetAllFingersEnable_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetAllFingersEnable_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetAllFingersEnable_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetAllFingersEnable_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/SetAllFingersEnable_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetAllFingersEnable_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request__init(msg: *mut SetMaxJointSpeed_Request) -> bool;
    fn rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMaxJointSpeed_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMaxJointSpeed_Request>);
    fn rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMaxJointSpeed_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMaxJointSpeed_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMaxJointSpeed_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub get_only: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_ids: rosidl_runtime_rs::Sequence<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_speeds: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for SetMaxJointSpeed_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMaxJointSpeed_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMaxJointSpeed_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMaxJointSpeed_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/SetMaxJointSpeed_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response__init(msg: *mut SetMaxJointSpeed_Response) -> bool;
    fn rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMaxJointSpeed_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMaxJointSpeed_Response>);
    fn rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMaxJointSpeed_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMaxJointSpeed_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMaxJointSpeed_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_speeds: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for SetMaxJointSpeed_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMaxJointSpeed_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMaxJointSpeed_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMaxJointSpeed_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/SetMaxJointSpeed_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetMaxJointAccel_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__SetMaxJointAccel_Request__init(msg: *mut SetMaxJointAccel_Request) -> bool;
    fn rysen_apexhand_msgs__srv__SetMaxJointAccel_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMaxJointAccel_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__SetMaxJointAccel_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMaxJointAccel_Request>);
    fn rysen_apexhand_msgs__srv__SetMaxJointAccel_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMaxJointAccel_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMaxJointAccel_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__SetMaxJointAccel_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMaxJointAccel_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub get_only: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_ids: rosidl_runtime_rs::Sequence<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_accels: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for SetMaxJointAccel_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__SetMaxJointAccel_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__SetMaxJointAccel_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMaxJointAccel_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxJointAccel_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxJointAccel_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxJointAccel_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMaxJointAccel_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMaxJointAccel_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/SetMaxJointAccel_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetMaxJointAccel_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetMaxJointAccel_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__SetMaxJointAccel_Response__init(msg: *mut SetMaxJointAccel_Response) -> bool;
    fn rysen_apexhand_msgs__srv__SetMaxJointAccel_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMaxJointAccel_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__SetMaxJointAccel_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMaxJointAccel_Response>);
    fn rysen_apexhand_msgs__srv__SetMaxJointAccel_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMaxJointAccel_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMaxJointAccel_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__SetMaxJointAccel_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMaxJointAccel_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_accels: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for SetMaxJointAccel_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__SetMaxJointAccel_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__SetMaxJointAccel_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMaxJointAccel_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxJointAccel_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxJointAccel_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxJointAccel_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMaxJointAccel_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMaxJointAccel_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/SetMaxJointAccel_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetMaxJointAccel_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__init(msg: *mut SetMaxFingerTorque_Request) -> bool;
    fn rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMaxFingerTorque_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMaxFingerTorque_Request>);
    fn rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMaxFingerTorque_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMaxFingerTorque_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMaxFingerTorque_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub get_only: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub finger_ids: rosidl_runtime_rs::Sequence<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_torques: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for SetMaxFingerTorque_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMaxFingerTorque_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMaxFingerTorque_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMaxFingerTorque_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/SetMaxFingerTorque_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__init(msg: *mut SetMaxFingerTorque_Response) -> bool;
    fn rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMaxFingerTorque_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMaxFingerTorque_Response>);
    fn rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMaxFingerTorque_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMaxFingerTorque_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMaxFingerTorque_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_torques: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for SetMaxFingerTorque_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMaxFingerTorque_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMaxFingerTorque_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMaxFingerTorque_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/SetMaxFingerTorque_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__StartTactileCalibration_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__StartTactileCalibration_Request__init(msg: *mut StartTactileCalibration_Request) -> bool;
    fn rysen_apexhand_msgs__srv__StartTactileCalibration_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartTactileCalibration_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__StartTactileCalibration_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartTactileCalibration_Request>);
    fn rysen_apexhand_msgs__srv__StartTactileCalibration_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartTactileCalibration_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StartTactileCalibration_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__StartTactileCalibration_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartTactileCalibration_Request {
    /// target hand ip
    pub ip: rosidl_runtime_rs::String,

}



impl Default for StartTactileCalibration_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__StartTactileCalibration_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__StartTactileCalibration_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartTactileCalibration_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__StartTactileCalibration_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__StartTactileCalibration_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__StartTactileCalibration_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartTactileCalibration_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartTactileCalibration_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/StartTactileCalibration_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__StartTactileCalibration_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__StartTactileCalibration_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__StartTactileCalibration_Response__init(msg: *mut StartTactileCalibration_Response) -> bool;
    fn rysen_apexhand_msgs__srv__StartTactileCalibration_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartTactileCalibration_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__StartTactileCalibration_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartTactileCalibration_Response>);
    fn rysen_apexhand_msgs__srv__StartTactileCalibration_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartTactileCalibration_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StartTactileCalibration_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__StartTactileCalibration_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartTactileCalibration_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for StartTactileCalibration_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__StartTactileCalibration_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__StartTactileCalibration_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartTactileCalibration_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__StartTactileCalibration_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__StartTactileCalibration_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__StartTactileCalibration_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartTactileCalibration_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartTactileCalibration_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/StartTactileCalibration_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__StartTactileCalibration_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__StartTeleop_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__StartTeleop_Request__init(msg: *mut StartTeleop_Request) -> bool;
    fn rysen_apexhand_msgs__srv__StartTeleop_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartTeleop_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__StartTeleop_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartTeleop_Request>);
    fn rysen_apexhand_msgs__srv__StartTeleop_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartTeleop_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StartTeleop_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__StartTeleop_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartTeleop_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub command: rosidl_runtime_rs::String,

}



impl Default for StartTeleop_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__StartTeleop_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__StartTeleop_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartTeleop_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__StartTeleop_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__StartTeleop_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__StartTeleop_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartTeleop_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartTeleop_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/StartTeleop_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__StartTeleop_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__StartTeleop_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__StartTeleop_Response__init(msg: *mut StartTeleop_Response) -> bool;
    fn rysen_apexhand_msgs__srv__StartTeleop_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartTeleop_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__StartTeleop_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartTeleop_Response>);
    fn rysen_apexhand_msgs__srv__StartTeleop_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartTeleop_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StartTeleop_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__StartTeleop_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartTeleop_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for StartTeleop_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__StartTeleop_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__StartTeleop_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartTeleop_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__StartTeleop_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__StartTeleop_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__StartTeleop_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartTeleop_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartTeleop_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/StartTeleop_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__StartTeleop_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__ManusCalibration_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__ManusCalibration_Request__init(msg: *mut ManusCalibration_Request) -> bool;
    fn rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ManusCalibration_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ManusCalibration_Request>);
    fn rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ManusCalibration_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ManusCalibration_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__ManusCalibration_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManusCalibration_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub side: rosidl_runtime_rs::String,

}



impl Default for ManusCalibration_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__ManusCalibration_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__ManusCalibration_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ManusCalibration_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ManusCalibration_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ManusCalibration_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/ManusCalibration_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__ManusCalibration_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__ManusCalibration_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__ManusCalibration_Response__init(msg: *mut ManusCalibration_Response) -> bool;
    fn rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ManusCalibration_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ManusCalibration_Response>);
    fn rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ManusCalibration_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ManusCalibration_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__ManusCalibration_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManusCalibration_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// Open-pose result or default restored by clear.
    pub theta_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta_deg: f64,

    /// Raw SDK TIP positions before theta correction.
    /// Order: thumb, index, middle, ring, pinky.
    pub four_fingers_together_tips: [geometry_msgs::msg::rmw::Point; 5],


    // This member is not documented.
    #[allow(missing_docs)]
    pub fist_tips: [geometry_msgs::msg::rmw::Point; 5],


    // This member is not documented.
    #[allow(missing_docs)]
    pub sample_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ManusCalibration_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__ManusCalibration_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__ManusCalibration_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ManusCalibration_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ManusCalibration_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ManusCalibration_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/ManusCalibration_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__ManusCalibration_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__ClearTactileCalibration_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__ClearTactileCalibration_Request__init(msg: *mut ClearTactileCalibration_Request) -> bool;
    fn rysen_apexhand_msgs__srv__ClearTactileCalibration_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClearTactileCalibration_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__ClearTactileCalibration_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClearTactileCalibration_Request>);
    fn rysen_apexhand_msgs__srv__ClearTactileCalibration_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClearTactileCalibration_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ClearTactileCalibration_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__ClearTactileCalibration_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearTactileCalibration_Request {
    /// target hand ip
    pub ip: rosidl_runtime_rs::String,

}



impl Default for ClearTactileCalibration_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__ClearTactileCalibration_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__ClearTactileCalibration_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClearTactileCalibration_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__ClearTactileCalibration_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__ClearTactileCalibration_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__ClearTactileCalibration_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClearTactileCalibration_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClearTactileCalibration_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/ClearTactileCalibration_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__ClearTactileCalibration_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__ClearTactileCalibration_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__ClearTactileCalibration_Response__init(msg: *mut ClearTactileCalibration_Response) -> bool;
    fn rysen_apexhand_msgs__srv__ClearTactileCalibration_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClearTactileCalibration_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__ClearTactileCalibration_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClearTactileCalibration_Response>);
    fn rysen_apexhand_msgs__srv__ClearTactileCalibration_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClearTactileCalibration_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ClearTactileCalibration_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__ClearTactileCalibration_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearTactileCalibration_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ClearTactileCalibration_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__ClearTactileCalibration_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__ClearTactileCalibration_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClearTactileCalibration_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__ClearTactileCalibration_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__ClearTactileCalibration_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__ClearTactileCalibration_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClearTactileCalibration_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClearTactileCalibration_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/ClearTactileCalibration_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__ClearTactileCalibration_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__CleanFaults_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__CleanFaults_Request__init(msg: *mut CleanFaults_Request) -> bool;
    fn rysen_apexhand_msgs__srv__CleanFaults_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CleanFaults_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__CleanFaults_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CleanFaults_Request>);
    fn rysen_apexhand_msgs__srv__CleanFaults_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CleanFaults_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CleanFaults_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__CleanFaults_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CleanFaults_Request {
    /// target hand ip
    pub ip: rosidl_runtime_rs::String,

}



impl Default for CleanFaults_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__CleanFaults_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__CleanFaults_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CleanFaults_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__CleanFaults_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__CleanFaults_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__CleanFaults_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CleanFaults_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CleanFaults_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/CleanFaults_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__CleanFaults_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__CleanFaults_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__CleanFaults_Response__init(msg: *mut CleanFaults_Response) -> bool;
    fn rysen_apexhand_msgs__srv__CleanFaults_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CleanFaults_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__CleanFaults_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CleanFaults_Response>);
    fn rysen_apexhand_msgs__srv__CleanFaults_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CleanFaults_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CleanFaults_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__CleanFaults_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CleanFaults_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for CleanFaults_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__CleanFaults_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__CleanFaults_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CleanFaults_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__CleanFaults_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__CleanFaults_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__CleanFaults_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CleanFaults_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CleanFaults_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/CleanFaults_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__CleanFaults_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__GetConnectionInfo_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__GetConnectionInfo_Request__init(msg: *mut GetConnectionInfo_Request) -> bool;
    fn rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetConnectionInfo_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetConnectionInfo_Request>);
    fn rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetConnectionInfo_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetConnectionInfo_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__GetConnectionInfo_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetConnectionInfo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetConnectionInfo_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__GetConnectionInfo_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__GetConnectionInfo_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetConnectionInfo_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetConnectionInfo_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetConnectionInfo_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/GetConnectionInfo_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__GetConnectionInfo_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__GetConnectionInfo_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__GetConnectionInfo_Response__init(msg: *mut GetConnectionInfo_Response) -> bool;
    fn rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetConnectionInfo_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetConnectionInfo_Response>);
    fn rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetConnectionInfo_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetConnectionInfo_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__GetConnectionInfo_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetConnectionInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ips: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub connected: rosidl_runtime_rs::Sequence<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_ips: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_sides: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hardware_uids: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for GetConnectionInfo_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__GetConnectionInfo_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__GetConnectionInfo_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetConnectionInfo_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetConnectionInfo_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetConnectionInfo_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/GetConnectionInfo_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__GetConnectionInfo_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__GetVersionInfo_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__GetVersionInfo_Request__init(msg: *mut GetVersionInfo_Request) -> bool;
    fn rysen_apexhand_msgs__srv__GetVersionInfo_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetVersionInfo_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__GetVersionInfo_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetVersionInfo_Request>);
    fn rysen_apexhand_msgs__srv__GetVersionInfo_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetVersionInfo_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetVersionInfo_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__GetVersionInfo_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetVersionInfo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: rosidl_runtime_rs::String,

}



impl Default for GetVersionInfo_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__GetVersionInfo_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__GetVersionInfo_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetVersionInfo_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__GetVersionInfo_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__GetVersionInfo_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__GetVersionInfo_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetVersionInfo_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetVersionInfo_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/GetVersionInfo_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__GetVersionInfo_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__GetVersionInfo_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__GetVersionInfo_Response__init(msg: *mut GetVersionInfo_Response) -> bool;
    fn rysen_apexhand_msgs__srv__GetVersionInfo_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetVersionInfo_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__GetVersionInfo_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetVersionInfo_Response>);
    fn rysen_apexhand_msgs__srv__GetVersionInfo_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetVersionInfo_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetVersionInfo_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__GetVersionInfo_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetVersionInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sdk_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_firmware_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub touch_sensor_version: rosidl_runtime_rs::String,

}



impl Default for GetVersionInfo_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__GetVersionInfo_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__GetVersionInfo_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetVersionInfo_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__GetVersionInfo_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__GetVersionInfo_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__GetVersionInfo_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetVersionInfo_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetVersionInfo_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/GetVersionInfo_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__GetVersionInfo_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__RemoveHand_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__RemoveHand_Request__init(msg: *mut RemoveHand_Request) -> bool;
    fn rysen_apexhand_msgs__srv__RemoveHand_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RemoveHand_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__RemoveHand_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RemoveHand_Request>);
    fn rysen_apexhand_msgs__srv__RemoveHand_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RemoveHand_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RemoveHand_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__RemoveHand_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoveHand_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: rosidl_runtime_rs::String,

}



impl Default for RemoveHand_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__RemoveHand_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__RemoveHand_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RemoveHand_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__RemoveHand_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__RemoveHand_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__RemoveHand_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RemoveHand_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RemoveHand_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/RemoveHand_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__RemoveHand_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__RemoveHand_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__RemoveHand_Response__init(msg: *mut RemoveHand_Response) -> bool;
    fn rysen_apexhand_msgs__srv__RemoveHand_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RemoveHand_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__RemoveHand_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RemoveHand_Response>);
    fn rysen_apexhand_msgs__srv__RemoveHand_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RemoveHand_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RemoveHand_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__RemoveHand_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoveHand_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for RemoveHand_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__RemoveHand_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__RemoveHand_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RemoveHand_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__RemoveHand_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__RemoveHand_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__RemoveHand_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RemoveHand_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RemoveHand_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/RemoveHand_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__RemoveHand_Response() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__IsFingerEnabled_Request() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__IsFingerEnabled_Request__init(msg: *mut IsFingerEnabled_Request) -> bool;
    fn rysen_apexhand_msgs__srv__IsFingerEnabled_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsFingerEnabled_Request>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__IsFingerEnabled_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsFingerEnabled_Request>);
    fn rysen_apexhand_msgs__srv__IsFingerEnabled_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsFingerEnabled_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IsFingerEnabled_Request>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__IsFingerEnabled_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsFingerEnabled_Request {
    /// 目标机械手的 IP
    pub ip: rosidl_runtime_rs::String,

    /// 手指 ID (0:拇指, 1:食指, 2:中指, 3:无名指, 4:小指)
    pub finger_id: u8,

}



impl Default for IsFingerEnabled_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__IsFingerEnabled_Request__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__IsFingerEnabled_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsFingerEnabled_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__IsFingerEnabled_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__IsFingerEnabled_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__IsFingerEnabled_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsFingerEnabled_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsFingerEnabled_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/IsFingerEnabled_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__IsFingerEnabled_Request() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__IsFingerEnabled_Response() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__srv__IsFingerEnabled_Response__init(msg: *mut IsFingerEnabled_Response) -> bool;
    fn rysen_apexhand_msgs__srv__IsFingerEnabled_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IsFingerEnabled_Response>, size: usize) -> bool;
    fn rysen_apexhand_msgs__srv__IsFingerEnabled_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IsFingerEnabled_Response>);
    fn rysen_apexhand_msgs__srv__IsFingerEnabled_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IsFingerEnabled_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IsFingerEnabled_Response>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__srv__IsFingerEnabled_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsFingerEnabled_Response {
    /// 服务调用是否成功（比如 IP 不存在就会返回 false）
    pub success: bool,

    /// 错误信息或状态描述
    pub message: rosidl_runtime_rs::String,

    /// 该手指是否被使能 (true/false)
    pub is_enabled: bool,

}



impl Default for IsFingerEnabled_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__srv__IsFingerEnabled_Response__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__srv__IsFingerEnabled_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IsFingerEnabled_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__IsFingerEnabled_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__IsFingerEnabled_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__srv__IsFingerEnabled_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IsFingerEnabled_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IsFingerEnabled_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/srv/IsFingerEnabled_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__srv__IsFingerEnabled_Response() }
  }
}






#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__MoveJoint() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__MoveJoint
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveJoint;

impl rosidl_runtime_rs::Service for MoveJoint {
    type Request = MoveJoint_Request;
    type Response = MoveJoint_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__MoveJoint() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__SetFingerEnabled() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__SetFingerEnabled
#[allow(missing_docs, non_camel_case_types)]
pub struct SetFingerEnabled;

impl rosidl_runtime_rs::Service for SetFingerEnabled {
    type Request = SetFingerEnabled_Request;
    type Response = SetFingerEnabled_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__SetFingerEnabled() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__SetDeviceIPAddress() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__SetDeviceIPAddress
#[allow(missing_docs, non_camel_case_types)]
pub struct SetDeviceIPAddress;

impl rosidl_runtime_rs::Service for SetDeviceIPAddress {
    type Request = SetDeviceIPAddress_Request;
    type Response = SetDeviceIPAddress_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__SetDeviceIPAddress() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__Connect() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__Connect
#[allow(missing_docs, non_camel_case_types)]
pub struct Connect;

impl rosidl_runtime_rs::Service for Connect {
    type Request = Connect_Request;
    type Response = Connect_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__Connect() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__SetAllFingersEnable() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__SetAllFingersEnable
#[allow(missing_docs, non_camel_case_types)]
pub struct SetAllFingersEnable;

impl rosidl_runtime_rs::Service for SetAllFingersEnable {
    type Request = SetAllFingersEnable_Request;
    type Response = SetAllFingersEnable_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__SetAllFingersEnable() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__SetMaxJointSpeed() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__SetMaxJointSpeed
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMaxJointSpeed;

impl rosidl_runtime_rs::Service for SetMaxJointSpeed {
    type Request = SetMaxJointSpeed_Request;
    type Response = SetMaxJointSpeed_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__SetMaxJointSpeed() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__SetMaxJointAccel() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__SetMaxJointAccel
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMaxJointAccel;

impl rosidl_runtime_rs::Service for SetMaxJointAccel {
    type Request = SetMaxJointAccel_Request;
    type Response = SetMaxJointAccel_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__SetMaxJointAccel() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__SetMaxFingerTorque() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__SetMaxFingerTorque
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMaxFingerTorque;

impl rosidl_runtime_rs::Service for SetMaxFingerTorque {
    type Request = SetMaxFingerTorque_Request;
    type Response = SetMaxFingerTorque_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__SetMaxFingerTorque() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__StartTactileCalibration() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__StartTactileCalibration
#[allow(missing_docs, non_camel_case_types)]
pub struct StartTactileCalibration;

impl rosidl_runtime_rs::Service for StartTactileCalibration {
    type Request = StartTactileCalibration_Request;
    type Response = StartTactileCalibration_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__StartTactileCalibration() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__StartTeleop() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__StartTeleop
#[allow(missing_docs, non_camel_case_types)]
pub struct StartTeleop;

impl rosidl_runtime_rs::Service for StartTeleop {
    type Request = StartTeleop_Request;
    type Response = StartTeleop_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__StartTeleop() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__ManusCalibration() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__ManusCalibration
#[allow(missing_docs, non_camel_case_types)]
pub struct ManusCalibration;

impl rosidl_runtime_rs::Service for ManusCalibration {
    type Request = ManusCalibration_Request;
    type Response = ManusCalibration_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__ManusCalibration() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__ClearTactileCalibration() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__ClearTactileCalibration
#[allow(missing_docs, non_camel_case_types)]
pub struct ClearTactileCalibration;

impl rosidl_runtime_rs::Service for ClearTactileCalibration {
    type Request = ClearTactileCalibration_Request;
    type Response = ClearTactileCalibration_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__ClearTactileCalibration() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__CleanFaults() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__CleanFaults
#[allow(missing_docs, non_camel_case_types)]
pub struct CleanFaults;

impl rosidl_runtime_rs::Service for CleanFaults {
    type Request = CleanFaults_Request;
    type Response = CleanFaults_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__CleanFaults() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__GetConnectionInfo() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__GetConnectionInfo
#[allow(missing_docs, non_camel_case_types)]
pub struct GetConnectionInfo;

impl rosidl_runtime_rs::Service for GetConnectionInfo {
    type Request = GetConnectionInfo_Request;
    type Response = GetConnectionInfo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__GetConnectionInfo() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__GetVersionInfo() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__GetVersionInfo
#[allow(missing_docs, non_camel_case_types)]
pub struct GetVersionInfo;

impl rosidl_runtime_rs::Service for GetVersionInfo {
    type Request = GetVersionInfo_Request;
    type Response = GetVersionInfo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__GetVersionInfo() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__RemoveHand() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__RemoveHand
#[allow(missing_docs, non_camel_case_types)]
pub struct RemoveHand;

impl rosidl_runtime_rs::Service for RemoveHand {
    type Request = RemoveHand_Request;
    type Response = RemoveHand_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__RemoveHand() }
    }
}




#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__IsFingerEnabled() -> *const std::ffi::c_void;
}

// Corresponds to rysen_apexhand_msgs__srv__IsFingerEnabled
#[allow(missing_docs, non_camel_case_types)]
pub struct IsFingerEnabled;

impl rosidl_runtime_rs::Service for IsFingerEnabled {
    type Request = IsFingerEnabled_Request;
    type Response = IsFingerEnabled_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rysen_apexhand_msgs__srv__IsFingerEnabled() }
    }
}


