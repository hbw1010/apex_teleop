#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rysen_apexhand_msgs__msg__FingerId
/// Finger identifier constants
/// FINGER_ID_THUMB = 0
/// FINGER_ID_INDEX = 1
/// FINGER_ID_MIDDLE = 2
/// FINGER_ID_RING = 3
/// FINGER_ID_LITTLE = 4

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FingerId {

    // This member is not documented.
    #[allow(missing_docs)]
    pub finger_id: u8,

}



impl Default for FingerId {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FingerId::default())
  }
}

impl rosidl_runtime_rs::Message for FingerId {
  type RmwMsg = super::msg::rmw::FingerId;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        finger_id: msg.finger_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      finger_id: msg.finger_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      finger_id: msg.finger_id,
    }
  }
}


// Corresponds to rysen_apexhand_msgs__msg__MotorState
/// Standard motor state message (similar to sensor_msgs/JointState)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorState {
    /// Header with timestamp
    pub header: std_msgs::msg::Header,

    /// Motor names (order matches MotorId / rysen_apexhand_node, e.g. thumb_cmc_abd_motor, ...)
    pub name: Vec<std::string::String>,

    /// Motor temperatures (in degrees Celsius)
    pub temperature: Vec<f64>,

    /// Motor currents (in Amperes)
    pub current: Vec<f64>,

}



impl Default for MotorState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorState::default())
  }
}

impl rosidl_runtime_rs::Message for MotorState {
  type RmwMsg = super::msg::rmw::MotorState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        name: msg.name
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        temperature: msg.temperature.into(),
        current: msg.current.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        name: msg.name
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        temperature: msg.temperature.as_slice().into(),
        current: msg.current.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      name: msg.name
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      temperature: msg.temperature
          .into_iter()
          .collect(),
      current: msg.current
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__msg__TangentialForce
/// Tangential force (direction and magnitude)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TangentialForce {
    /// direction [0, 2*pi]
    pub theta: f64,

    /// force magnitude
    pub magnitude: f64,

}



impl Default for TangentialForce {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TangentialForce::default())
  }
}

impl rosidl_runtime_rs::Message for TangentialForce {
  type RmwMsg = super::msg::rmw::TangentialForce;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        theta: msg.theta,
        magnitude: msg.magnitude,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      theta: msg.theta,
      magnitude: msg.magnitude,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      theta: msg.theta,
      magnitude: msg.magnitude,
    }
  }
}


// Corresponds to rysen_apexhand_msgs__msg__TactileImage
/// 2D tactile image with tangential force (mirrors rysen::TactileImage)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TactileImage {
    /// image width (pixels)
    pub width: u32,

    /// image height (pixels)
    pub height: u32,

    /// grayscale image data (row-major, size = width*height)
    pub gray_image: Vec<u16>,

    /// tangential force for this patch
    pub tangential_forces: super::msg::TangentialForce,

}



impl Default for TactileImage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TactileImage::default())
  }
}

impl rosidl_runtime_rs::Message for TactileImage {
  type RmwMsg = super::msg::rmw::TactileImage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        width: msg.width,
        height: msg.height,
        gray_image: msg.gray_image.into(),
        tangential_forces: super::msg::TangentialForce::into_rmw_message(std::borrow::Cow::Owned(msg.tangential_forces)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      width: msg.width,
      height: msg.height,
        gray_image: msg.gray_image.as_slice().into(),
        tangential_forces: super::msg::TangentialForce::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tangential_forces)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      width: msg.width,
      height: msg.height,
      gray_image: msg.gray_image
          .into_iter()
          .collect(),
      tangential_forces: super::msg::TangentialForce::from_rmw_message(msg.tangential_forces),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__msg__CommonFingerTactile
/// Common finger tactile image data (pip, dip, tip)
/// Mirrors rysen::CommonFingerSensorImage (prox_pad, mid_pad, dist_pad)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommonFingerTactile {

    // This member is not documented.
    #[allow(missing_docs)]
    pub prox_pad: super::msg::TactileImage,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mid_pad: super::msg::TactileImage,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dist_pad: super::msg::TactileImage,

}



impl Default for CommonFingerTactile {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CommonFingerTactile::default())
  }
}

impl rosidl_runtime_rs::Message for CommonFingerTactile {
  type RmwMsg = super::msg::rmw::CommonFingerTactile;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        prox_pad: super::msg::TactileImage::into_rmw_message(std::borrow::Cow::Owned(msg.prox_pad)).into_owned(),
        mid_pad: super::msg::TactileImage::into_rmw_message(std::borrow::Cow::Owned(msg.mid_pad)).into_owned(),
        dist_pad: super::msg::TactileImage::into_rmw_message(std::borrow::Cow::Owned(msg.dist_pad)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        prox_pad: super::msg::TactileImage::into_rmw_message(std::borrow::Cow::Borrowed(&msg.prox_pad)).into_owned(),
        mid_pad: super::msg::TactileImage::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mid_pad)).into_owned(),
        dist_pad: super::msg::TactileImage::into_rmw_message(std::borrow::Cow::Borrowed(&msg.dist_pad)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      prox_pad: super::msg::TactileImage::from_rmw_message(msg.prox_pad),
      mid_pad: super::msg::TactileImage::from_rmw_message(msg.mid_pad),
      dist_pad: super::msg::TactileImage::from_rmw_message(msg.dist_pad),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__msg__ThumbFingerTactile
/// Thumb finger tactile image data (cmc, mcp, tip)
/// Mirrors rysen::ThumbFingerSensorImage (prox_pad, mid_pad, dist_pad)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ThumbFingerTactile {

    // This member is not documented.
    #[allow(missing_docs)]
    pub prox_pad: super::msg::TactileImage,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mid_pad: super::msg::TactileImage,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dist_pad: super::msg::TactileImage,

}



impl Default for ThumbFingerTactile {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ThumbFingerTactile::default())
  }
}

impl rosidl_runtime_rs::Message for ThumbFingerTactile {
  type RmwMsg = super::msg::rmw::ThumbFingerTactile;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        prox_pad: super::msg::TactileImage::into_rmw_message(std::borrow::Cow::Owned(msg.prox_pad)).into_owned(),
        mid_pad: super::msg::TactileImage::into_rmw_message(std::borrow::Cow::Owned(msg.mid_pad)).into_owned(),
        dist_pad: super::msg::TactileImage::into_rmw_message(std::borrow::Cow::Owned(msg.dist_pad)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        prox_pad: super::msg::TactileImage::into_rmw_message(std::borrow::Cow::Borrowed(&msg.prox_pad)).into_owned(),
        mid_pad: super::msg::TactileImage::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mid_pad)).into_owned(),
        dist_pad: super::msg::TactileImage::into_rmw_message(std::borrow::Cow::Borrowed(&msg.dist_pad)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      prox_pad: super::msg::TactileImage::from_rmw_message(msg.prox_pad),
      mid_pad: super::msg::TactileImage::from_rmw_message(msg.mid_pad),
      dist_pad: super::msg::TactileImage::from_rmw_message(msg.dist_pad),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__msg__HandTactileForces
/// ! Hand-level tactile image + tangential forces from HandSensorImage
/// ! Mirrors rysen::HandSensorImage (only tactile part)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandTactileForces {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

    /// 食指 (prox/mid/dist_pad + 切向力，见 NAMING_CONVENTION.md)
    pub index: super::msg::CommonFingerTactile,

    /// 中指
    pub middle: super::msg::CommonFingerTactile,

    /// 无名指
    pub ring: super::msg::CommonFingerTactile,

    /// 小拇指
    pub little: super::msg::CommonFingerTactile,

    /// 大拇指
    pub thumb: super::msg::ThumbFingerTactile,

    /// 手掌中心 palm_center
    pub palm_center: super::msg::TactileImage,

}



impl Default for HandTactileForces {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HandTactileForces::default())
  }
}

impl rosidl_runtime_rs::Message for HandTactileForces {
  type RmwMsg = super::msg::rmw::HandTactileForces;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        index: super::msg::CommonFingerTactile::into_rmw_message(std::borrow::Cow::Owned(msg.index)).into_owned(),
        middle: super::msg::CommonFingerTactile::into_rmw_message(std::borrow::Cow::Owned(msg.middle)).into_owned(),
        ring: super::msg::CommonFingerTactile::into_rmw_message(std::borrow::Cow::Owned(msg.ring)).into_owned(),
        little: super::msg::CommonFingerTactile::into_rmw_message(std::borrow::Cow::Owned(msg.little)).into_owned(),
        thumb: super::msg::ThumbFingerTactile::into_rmw_message(std::borrow::Cow::Owned(msg.thumb)).into_owned(),
        palm_center: super::msg::TactileImage::into_rmw_message(std::borrow::Cow::Owned(msg.palm_center)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        index: super::msg::CommonFingerTactile::into_rmw_message(std::borrow::Cow::Borrowed(&msg.index)).into_owned(),
        middle: super::msg::CommonFingerTactile::into_rmw_message(std::borrow::Cow::Borrowed(&msg.middle)).into_owned(),
        ring: super::msg::CommonFingerTactile::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ring)).into_owned(),
        little: super::msg::CommonFingerTactile::into_rmw_message(std::borrow::Cow::Borrowed(&msg.little)).into_owned(),
        thumb: super::msg::ThumbFingerTactile::into_rmw_message(std::borrow::Cow::Borrowed(&msg.thumb)).into_owned(),
        palm_center: super::msg::TactileImage::into_rmw_message(std::borrow::Cow::Borrowed(&msg.palm_center)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      index: super::msg::CommonFingerTactile::from_rmw_message(msg.index),
      middle: super::msg::CommonFingerTactile::from_rmw_message(msg.middle),
      ring: super::msg::CommonFingerTactile::from_rmw_message(msg.ring),
      little: super::msg::CommonFingerTactile::from_rmw_message(msg.little),
      thumb: super::msg::ThumbFingerTactile::from_rmw_message(msg.thumb),
      palm_center: super::msg::TactileImage::from_rmw_message(msg.palm_center),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__msg__HardwareErrors

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HardwareErrors {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HardwareErrors::default())
  }
}

impl rosidl_runtime_rs::Message for HardwareErrors {
  type RmwMsg = super::msg::rmw::HardwareErrors;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        device_error_code: msg.device_error_code,
        thumb_error_code: msg.thumb_error_code,
        index_error_code: msg.index_error_code,
        middle_error_code: msg.middle_error_code,
        ring_error_code: msg.ring_error_code,
        little_error_code: msg.little_error_code,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      device_error_code: msg.device_error_code,
      thumb_error_code: msg.thumb_error_code,
      index_error_code: msg.index_error_code,
      middle_error_code: msg.middle_error_code,
      ring_error_code: msg.ring_error_code,
      little_error_code: msg.little_error_code,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      device_error_code: msg.device_error_code,
      thumb_error_code: msg.thumb_error_code,
      index_error_code: msg.index_error_code,
      middle_error_code: msg.middle_error_code,
      ring_error_code: msg.ring_error_code,
      little_error_code: msg.little_error_code,
    }
  }
}


