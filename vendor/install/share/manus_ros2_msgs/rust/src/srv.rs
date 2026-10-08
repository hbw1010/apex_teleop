#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to manus_ros2_msgs__srv__CalibrateGloveTheta_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateGloveTheta_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub side: std::string::String,

}



impl Default for CalibrateGloveTheta_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CalibrateGloveTheta_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CalibrateGloveTheta_Request {
  type RmwMsg = super::srv::rmw::CalibrateGloveTheta_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        side: msg.side.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        side: msg.side.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      side: msg.side.to_string(),
    }
  }
}


// Corresponds to manus_ros2_msgs__srv__CalibrateGloveTheta_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub four_fingers_together_tips: [geometry_msgs::msg::Point; 5],


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
    pub message: std::string::String,

}



impl Default for CalibrateGloveTheta_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CalibrateGloveTheta_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CalibrateGloveTheta_Response {
  type RmwMsg = super::srv::rmw::CalibrateGloveTheta_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        theta_rad: msg.theta_rad,
        theta_deg: msg.theta_deg,
        four_fingers_together_tips: msg.four_fingers_together_tips
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        midpoint_y: msg.midpoint_y,
        midpoint_z: msg.midpoint_z,
        sample_count: msg.sample_count,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      theta_rad: msg.theta_rad,
      theta_deg: msg.theta_deg,
        four_fingers_together_tips: msg.four_fingers_together_tips
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
      midpoint_y: msg.midpoint_y,
      midpoint_z: msg.midpoint_z,
      sample_count: msg.sample_count,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      theta_rad: msg.theta_rad,
      theta_deg: msg.theta_deg,
      four_fingers_together_tips: msg.four_fingers_together_tips
        .map(geometry_msgs::msg::Point::from_rmw_message),
      midpoint_y: msg.midpoint_y,
      midpoint_z: msg.midpoint_z,
      sample_count: msg.sample_count,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to manus_ros2_msgs__srv__ClearGloveThetaCalibration_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearGloveThetaCalibration_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub side: std::string::String,

}



impl Default for ClearGloveThetaCalibration_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ClearGloveThetaCalibration_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ClearGloveThetaCalibration_Request {
  type RmwMsg = super::srv::rmw::ClearGloveThetaCalibration_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        side: msg.side.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        side: msg.side.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      side: msg.side.to_string(),
    }
  }
}


// Corresponds to manus_ros2_msgs__srv__ClearGloveThetaCalibration_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub four_fingers_together_tips: [geometry_msgs::msg::Point; 5],


    // This member is not documented.
    #[allow(missing_docs)]
    pub fist_tips: [geometry_msgs::msg::Point; 5],


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ClearGloveThetaCalibration_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ClearGloveThetaCalibration_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ClearGloveThetaCalibration_Response {
  type RmwMsg = super::srv::rmw::ClearGloveThetaCalibration_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        theta_rad: msg.theta_rad,
        theta_deg: msg.theta_deg,
        four_fingers_together_tips: msg.four_fingers_together_tips
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        fist_tips: msg.fist_tips
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      theta_rad: msg.theta_rad,
      theta_deg: msg.theta_deg,
        four_fingers_together_tips: msg.four_fingers_together_tips
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
        fist_tips: msg.fist_tips
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      theta_rad: msg.theta_rad,
      theta_deg: msg.theta_deg,
      four_fingers_together_tips: msg.four_fingers_together_tips
        .map(geometry_msgs::msg::Point::from_rmw_message),
      fist_tips: msg.fist_tips
        .map(geometry_msgs::msg::Point::from_rmw_message),
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to manus_ros2_msgs__srv__RecordGloveFistCalibration_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecordGloveFistCalibration_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub side: std::string::String,

}



impl Default for RecordGloveFistCalibration_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RecordGloveFistCalibration_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RecordGloveFistCalibration_Request {
  type RmwMsg = super::srv::rmw::RecordGloveFistCalibration_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        side: msg.side.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        side: msg.side.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      side: msg.side.to_string(),
    }
  }
}


// Corresponds to manus_ros2_msgs__srv__RecordGloveFistCalibration_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecordGloveFistCalibration_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// Raw SDK TIP positions before theta correction.
    /// Order: thumb, index, middle, ring, pinky.
    pub fist_tips: [geometry_msgs::msg::Point; 5],


    // This member is not documented.
    #[allow(missing_docs)]
    pub sample_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for RecordGloveFistCalibration_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RecordGloveFistCalibration_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RecordGloveFistCalibration_Response {
  type RmwMsg = super::srv::rmw::RecordGloveFistCalibration_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        fist_tips: msg.fist_tips
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        sample_count: msg.sample_count,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        fist_tips: msg.fist_tips
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
      sample_count: msg.sample_count,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      fist_tips: msg.fist_tips
        .map(geometry_msgs::msg::Point::from_rmw_message),
      sample_count: msg.sample_count,
      message: msg.message.to_string(),
    }
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


