#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "manus_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__srv__CalibrateGloveTheta_Request() -> *const std::ffi::c_void;
}

#[link(name = "manus_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn manus_ros2_msgs__srv__CalibrateGloveTheta_Request__init(msg: *mut CalibrateGloveTheta_Request) -> bool;
    fn manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CalibrateGloveTheta_Request>, size: usize) -> bool;
    fn manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CalibrateGloveTheta_Request>);
    fn manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CalibrateGloveTheta_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CalibrateGloveTheta_Request>) -> bool;
}

// Corresponds to manus_ros2_msgs__srv__CalibrateGloveTheta_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateGloveTheta_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub side: rosidl_runtime_rs::String,

}



impl Default for CalibrateGloveTheta_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !manus_ros2_msgs__srv__CalibrateGloveTheta_Request__init(&mut msg as *mut _) {
        panic!("Call to manus_ros2_msgs__srv__CalibrateGloveTheta_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CalibrateGloveTheta_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CalibrateGloveTheta_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CalibrateGloveTheta_Request where Self: Sized {
  const TYPE_NAME: &'static str = "manus_ros2_msgs/srv/CalibrateGloveTheta_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__srv__CalibrateGloveTheta_Request() }
  }
}


#[link(name = "manus_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__srv__CalibrateGloveTheta_Response() -> *const std::ffi::c_void;
}

#[link(name = "manus_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn manus_ros2_msgs__srv__CalibrateGloveTheta_Response__init(msg: *mut CalibrateGloveTheta_Response) -> bool;
    fn manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CalibrateGloveTheta_Response>, size: usize) -> bool;
    fn manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CalibrateGloveTheta_Response>);
    fn manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CalibrateGloveTheta_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CalibrateGloveTheta_Response>) -> bool;
}

// Corresponds to manus_ros2_msgs__srv__CalibrateGloveTheta_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateGloveTheta_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta_deg: f64,

    /// Raw SDK TIP positions before theta correction.
    /// Order: thumb, index, middle, ring, pinky.
    pub four_fingers_together_tips: [geometry_msgs::msg::rmw::Point; 5],


    // This member is not documented.
    #[allow(missing_docs)]
    pub midpoint_y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub midpoint_z: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sample_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for CalibrateGloveTheta_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !manus_ros2_msgs__srv__CalibrateGloveTheta_Response__init(&mut msg as *mut _) {
        panic!("Call to manus_ros2_msgs__srv__CalibrateGloveTheta_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CalibrateGloveTheta_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CalibrateGloveTheta_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CalibrateGloveTheta_Response where Self: Sized {
  const TYPE_NAME: &'static str = "manus_ros2_msgs/srv/CalibrateGloveTheta_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__srv__CalibrateGloveTheta_Response() }
  }
}


#[link(name = "manus_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__srv__ClearGloveThetaCalibration_Request() -> *const std::ffi::c_void;
}

#[link(name = "manus_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn manus_ros2_msgs__srv__ClearGloveThetaCalibration_Request__init(msg: *mut ClearGloveThetaCalibration_Request) -> bool;
    fn manus_ros2_msgs__srv__ClearGloveThetaCalibration_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClearGloveThetaCalibration_Request>, size: usize) -> bool;
    fn manus_ros2_msgs__srv__ClearGloveThetaCalibration_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClearGloveThetaCalibration_Request>);
    fn manus_ros2_msgs__srv__ClearGloveThetaCalibration_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClearGloveThetaCalibration_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ClearGloveThetaCalibration_Request>) -> bool;
}

// Corresponds to manus_ros2_msgs__srv__ClearGloveThetaCalibration_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearGloveThetaCalibration_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub side: rosidl_runtime_rs::String,

}



impl Default for ClearGloveThetaCalibration_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !manus_ros2_msgs__srv__ClearGloveThetaCalibration_Request__init(&mut msg as *mut _) {
        panic!("Call to manus_ros2_msgs__srv__ClearGloveThetaCalibration_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClearGloveThetaCalibration_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__ClearGloveThetaCalibration_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__ClearGloveThetaCalibration_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__ClearGloveThetaCalibration_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClearGloveThetaCalibration_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClearGloveThetaCalibration_Request where Self: Sized {
  const TYPE_NAME: &'static str = "manus_ros2_msgs/srv/ClearGloveThetaCalibration_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__srv__ClearGloveThetaCalibration_Request() }
  }
}


#[link(name = "manus_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__srv__ClearGloveThetaCalibration_Response() -> *const std::ffi::c_void;
}

#[link(name = "manus_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn manus_ros2_msgs__srv__ClearGloveThetaCalibration_Response__init(msg: *mut ClearGloveThetaCalibration_Response) -> bool;
    fn manus_ros2_msgs__srv__ClearGloveThetaCalibration_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClearGloveThetaCalibration_Response>, size: usize) -> bool;
    fn manus_ros2_msgs__srv__ClearGloveThetaCalibration_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClearGloveThetaCalibration_Response>);
    fn manus_ros2_msgs__srv__ClearGloveThetaCalibration_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClearGloveThetaCalibration_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ClearGloveThetaCalibration_Response>) -> bool;
}

// Corresponds to manus_ros2_msgs__srv__ClearGloveThetaCalibration_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearGloveThetaCalibration_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
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
    pub message: rosidl_runtime_rs::String,

}



impl Default for ClearGloveThetaCalibration_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !manus_ros2_msgs__srv__ClearGloveThetaCalibration_Response__init(&mut msg as *mut _) {
        panic!("Call to manus_ros2_msgs__srv__ClearGloveThetaCalibration_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClearGloveThetaCalibration_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__ClearGloveThetaCalibration_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__ClearGloveThetaCalibration_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__ClearGloveThetaCalibration_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClearGloveThetaCalibration_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClearGloveThetaCalibration_Response where Self: Sized {
  const TYPE_NAME: &'static str = "manus_ros2_msgs/srv/ClearGloveThetaCalibration_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__srv__ClearGloveThetaCalibration_Response() }
  }
}


#[link(name = "manus_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__srv__RecordGloveFistCalibration_Request() -> *const std::ffi::c_void;
}

#[link(name = "manus_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__init(msg: *mut RecordGloveFistCalibration_Request) -> bool;
    fn manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RecordGloveFistCalibration_Request>, size: usize) -> bool;
    fn manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RecordGloveFistCalibration_Request>);
    fn manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RecordGloveFistCalibration_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RecordGloveFistCalibration_Request>) -> bool;
}

// Corresponds to manus_ros2_msgs__srv__RecordGloveFistCalibration_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecordGloveFistCalibration_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub side: rosidl_runtime_rs::String,

}



impl Default for RecordGloveFistCalibration_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__init(&mut msg as *mut _) {
        panic!("Call to manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RecordGloveFistCalibration_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RecordGloveFistCalibration_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RecordGloveFistCalibration_Request where Self: Sized {
  const TYPE_NAME: &'static str = "manus_ros2_msgs/srv/RecordGloveFistCalibration_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__srv__RecordGloveFistCalibration_Request() }
  }
}


#[link(name = "manus_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__srv__RecordGloveFistCalibration_Response() -> *const std::ffi::c_void;
}

#[link(name = "manus_ros2_msgs__rosidl_generator_c")]
extern "C" {
    fn manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__init(msg: *mut RecordGloveFistCalibration_Response) -> bool;
    fn manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RecordGloveFistCalibration_Response>, size: usize) -> bool;
    fn manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RecordGloveFistCalibration_Response>);
    fn manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RecordGloveFistCalibration_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RecordGloveFistCalibration_Response>) -> bool;
}

// Corresponds to manus_ros2_msgs__srv__RecordGloveFistCalibration_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecordGloveFistCalibration_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// Raw SDK TIP positions before theta correction.
    /// Order: thumb, index, middle, ring, pinky.
    pub fist_tips: [geometry_msgs::msg::rmw::Point; 5],


    // This member is not documented.
    #[allow(missing_docs)]
    pub sample_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for RecordGloveFistCalibration_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__init(&mut msg as *mut _) {
        panic!("Call to manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RecordGloveFistCalibration_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RecordGloveFistCalibration_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RecordGloveFistCalibration_Response where Self: Sized {
  const TYPE_NAME: &'static str = "manus_ros2_msgs/srv/RecordGloveFistCalibration_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__manus_ros2_msgs__srv__RecordGloveFistCalibration_Response() }
  }
}






#[link(name = "manus_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__manus_ros2_msgs__srv__CalibrateGloveTheta() -> *const std::ffi::c_void;
}

// Corresponds to manus_ros2_msgs__srv__CalibrateGloveTheta
#[allow(missing_docs, non_camel_case_types)]
pub struct CalibrateGloveTheta;

impl rosidl_runtime_rs::Service for CalibrateGloveTheta {
    type Request = CalibrateGloveTheta_Request;
    type Response = CalibrateGloveTheta_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__manus_ros2_msgs__srv__CalibrateGloveTheta() }
    }
}




#[link(name = "manus_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__manus_ros2_msgs__srv__ClearGloveThetaCalibration() -> *const std::ffi::c_void;
}

// Corresponds to manus_ros2_msgs__srv__ClearGloveThetaCalibration
#[allow(missing_docs, non_camel_case_types)]
pub struct ClearGloveThetaCalibration;

impl rosidl_runtime_rs::Service for ClearGloveThetaCalibration {
    type Request = ClearGloveThetaCalibration_Request;
    type Response = ClearGloveThetaCalibration_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__manus_ros2_msgs__srv__ClearGloveThetaCalibration() }
    }
}




#[link(name = "manus_ros2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__manus_ros2_msgs__srv__RecordGloveFistCalibration() -> *const std::ffi::c_void;
}

// Corresponds to manus_ros2_msgs__srv__RecordGloveFistCalibration
#[allow(missing_docs, non_camel_case_types)]
pub struct RecordGloveFistCalibration;

impl rosidl_runtime_rs::Service for RecordGloveFistCalibration {
    type Request = RecordGloveFistCalibration_Request;
    type Response = RecordGloveFistCalibration_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__manus_ros2_msgs__srv__RecordGloveFistCalibration() }
    }
}


