#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__FingerId() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__msg__FingerId__init(msg: *mut FingerId) -> bool;
    fn rysen_apexhand_msgs__msg__FingerId__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FingerId>, size: usize) -> bool;
    fn rysen_apexhand_msgs__msg__FingerId__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FingerId>);
    fn rysen_apexhand_msgs__msg__FingerId__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FingerId>, out_seq: *mut rosidl_runtime_rs::Sequence<FingerId>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__msg__FingerId
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Finger identifier constants
/// FINGER_ID_THUMB = 0
/// FINGER_ID_INDEX = 1
/// FINGER_ID_MIDDLE = 2
/// FINGER_ID_RING = 3
/// FINGER_ID_LITTLE = 4

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FingerId {

    // This member is not documented.
    #[allow(missing_docs)]
    pub finger_id: u8,

}



impl Default for FingerId {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__msg__FingerId__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__msg__FingerId__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FingerId {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__FingerId__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__FingerId__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__FingerId__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FingerId {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FingerId where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/msg/FingerId";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__FingerId() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__MotorState() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__msg__MotorState__init(msg: *mut MotorState) -> bool;
    fn rysen_apexhand_msgs__msg__MotorState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorState>, size: usize) -> bool;
    fn rysen_apexhand_msgs__msg__MotorState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorState>);
    fn rysen_apexhand_msgs__msg__MotorState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorState>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorState>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__msg__MotorState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Standard motor state message (similar to sensor_msgs/JointState)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorState {
    /// Header with timestamp
    pub header: std_msgs::msg::rmw::Header,

    /// Motor names (order matches MotorId / rysen_apexhand_node, e.g. thumb_cmc_abd_motor, ...)
    pub name: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// Motor temperatures (in degrees Celsius)
    pub temperature: rosidl_runtime_rs::Sequence<f64>,

    /// Motor currents (in Amperes)
    pub current: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for MotorState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__msg__MotorState__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__msg__MotorState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__MotorState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__MotorState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__MotorState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorState where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/msg/MotorState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__MotorState() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__TangentialForce() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__msg__TangentialForce__init(msg: *mut TangentialForce) -> bool;
    fn rysen_apexhand_msgs__msg__TangentialForce__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TangentialForce>, size: usize) -> bool;
    fn rysen_apexhand_msgs__msg__TangentialForce__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TangentialForce>);
    fn rysen_apexhand_msgs__msg__TangentialForce__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TangentialForce>, out_seq: *mut rosidl_runtime_rs::Sequence<TangentialForce>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__msg__TangentialForce
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Tangential force (direction and magnitude)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TangentialForce {
    /// direction [0, 2*pi]
    pub theta: f64,

    /// force magnitude
    pub magnitude: f64,

}



impl Default for TangentialForce {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__msg__TangentialForce__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__msg__TangentialForce__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TangentialForce {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__TangentialForce__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__TangentialForce__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__TangentialForce__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TangentialForce {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TangentialForce where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/msg/TangentialForce";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__TangentialForce() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__TactileImage() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__msg__TactileImage__init(msg: *mut TactileImage) -> bool;
    fn rysen_apexhand_msgs__msg__TactileImage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TactileImage>, size: usize) -> bool;
    fn rysen_apexhand_msgs__msg__TactileImage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TactileImage>);
    fn rysen_apexhand_msgs__msg__TactileImage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TactileImage>, out_seq: *mut rosidl_runtime_rs::Sequence<TactileImage>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__msg__TactileImage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 2D tactile image with tangential force (mirrors rysen::TactileImage)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TactileImage {
    /// image width (pixels)
    pub width: u32,

    /// image height (pixels)
    pub height: u32,

    /// grayscale image data (row-major, size = width*height)
    pub gray_image: rosidl_runtime_rs::Sequence<u16>,

    /// tangential force for this patch
    pub tangential_forces: super::super::msg::rmw::TangentialForce,

}



impl Default for TactileImage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__msg__TactileImage__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__msg__TactileImage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TactileImage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__TactileImage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__TactileImage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__TactileImage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TactileImage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TactileImage where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/msg/TactileImage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__TactileImage() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__CommonFingerTactile() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__msg__CommonFingerTactile__init(msg: *mut CommonFingerTactile) -> bool;
    fn rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CommonFingerTactile>, size: usize) -> bool;
    fn rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CommonFingerTactile>);
    fn rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CommonFingerTactile>, out_seq: *mut rosidl_runtime_rs::Sequence<CommonFingerTactile>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__msg__CommonFingerTactile
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Common finger tactile image data (pip, dip, tip)
/// Mirrors rysen::CommonFingerSensorImage (prox_pad, mid_pad, dist_pad)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommonFingerTactile {

    // This member is not documented.
    #[allow(missing_docs)]
    pub prox_pad: super::super::msg::rmw::TactileImage,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mid_pad: super::super::msg::rmw::TactileImage,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dist_pad: super::super::msg::rmw::TactileImage,

}



impl Default for CommonFingerTactile {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__msg__CommonFingerTactile__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__msg__CommonFingerTactile__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CommonFingerTactile {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CommonFingerTactile {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CommonFingerTactile where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/msg/CommonFingerTactile";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__CommonFingerTactile() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__ThumbFingerTactile() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__msg__ThumbFingerTactile__init(msg: *mut ThumbFingerTactile) -> bool;
    fn rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ThumbFingerTactile>, size: usize) -> bool;
    fn rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ThumbFingerTactile>);
    fn rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ThumbFingerTactile>, out_seq: *mut rosidl_runtime_rs::Sequence<ThumbFingerTactile>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__msg__ThumbFingerTactile
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Thumb finger tactile image data (cmc, mcp, tip)
/// Mirrors rysen::ThumbFingerSensorImage (prox_pad, mid_pad, dist_pad)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ThumbFingerTactile {

    // This member is not documented.
    #[allow(missing_docs)]
    pub prox_pad: super::super::msg::rmw::TactileImage,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mid_pad: super::super::msg::rmw::TactileImage,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dist_pad: super::super::msg::rmw::TactileImage,

}



impl Default for ThumbFingerTactile {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__msg__ThumbFingerTactile__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__msg__ThumbFingerTactile__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ThumbFingerTactile {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ThumbFingerTactile {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ThumbFingerTactile where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/msg/ThumbFingerTactile";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__ThumbFingerTactile() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__HandTactileForces() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__msg__HandTactileForces__init(msg: *mut HandTactileForces) -> bool;
    fn rysen_apexhand_msgs__msg__HandTactileForces__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HandTactileForces>, size: usize) -> bool;
    fn rysen_apexhand_msgs__msg__HandTactileForces__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HandTactileForces>);
    fn rysen_apexhand_msgs__msg__HandTactileForces__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HandTactileForces>, out_seq: *mut rosidl_runtime_rs::Sequence<HandTactileForces>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__msg__HandTactileForces
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// ! Hand-level tactile image + tangential forces from HandSensorImage
/// ! Mirrors rysen::HandSensorImage (only tactile part)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandTactileForces {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

    /// 食指 (prox/mid/dist_pad + 切向力，见 NAMING_CONVENTION.md)
    pub index: super::super::msg::rmw::CommonFingerTactile,

    /// 中指
    pub middle: super::super::msg::rmw::CommonFingerTactile,

    /// 无名指
    pub ring: super::super::msg::rmw::CommonFingerTactile,

    /// 小拇指
    pub little: super::super::msg::rmw::CommonFingerTactile,

    /// 大拇指
    pub thumb: super::super::msg::rmw::ThumbFingerTactile,

    /// 手掌中心 palm_center
    pub palm_center: super::super::msg::rmw::TactileImage,

}



impl Default for HandTactileForces {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__msg__HandTactileForces__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__msg__HandTactileForces__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HandTactileForces {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__HandTactileForces__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__HandTactileForces__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__HandTactileForces__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HandTactileForces {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HandTactileForces where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/msg/HandTactileForces";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__HandTactileForces() }
  }
}


#[link(name = "rysen_apexhand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__HardwareErrors() -> *const std::ffi::c_void;
}

#[link(name = "rysen_apexhand_msgs__rosidl_generator_c")]
extern "C" {
    fn rysen_apexhand_msgs__msg__HardwareErrors__init(msg: *mut HardwareErrors) -> bool;
    fn rysen_apexhand_msgs__msg__HardwareErrors__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HardwareErrors>, size: usize) -> bool;
    fn rysen_apexhand_msgs__msg__HardwareErrors__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HardwareErrors>);
    fn rysen_apexhand_msgs__msg__HardwareErrors__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HardwareErrors>, out_seq: *mut rosidl_runtime_rs::Sequence<HardwareErrors>) -> bool;
}

// Corresponds to rysen_apexhand_msgs__msg__HardwareErrors
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HardwareErrors {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_error_code: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub thumb_error_code: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub index_error_code: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub middle_error_code: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ring_error_code: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub little_error_code: u64,

}



impl Default for HardwareErrors {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rysen_apexhand_msgs__msg__HardwareErrors__init(&mut msg as *mut _) {
        panic!("Call to rysen_apexhand_msgs__msg__HardwareErrors__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HardwareErrors {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__HardwareErrors__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__HardwareErrors__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rysen_apexhand_msgs__msg__HardwareErrors__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HardwareErrors {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HardwareErrors where Self: Sized {
  const TYPE_NAME: &'static str = "rysen_apexhand_msgs/msg/HardwareErrors";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rysen_apexhand_msgs__msg__HardwareErrors() }
  }
}


