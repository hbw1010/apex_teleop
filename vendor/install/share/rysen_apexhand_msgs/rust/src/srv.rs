#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to rysen_apexhand_msgs__srv__MoveJoint_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub ip: std::string::String,

    /// Joint IDs (0-20)
    pub joint_ids: Vec<u8>,

    /// Target positions (rad)
    pub positions: Vec<f64>,

    /// Target velocities (rad/s)
    pub velocities: Vec<f64>,

    /// Target accelerations (rad/s²)
    pub accelerations: Vec<f64>,

}



impl Default for MoveJoint_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MoveJoint_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MoveJoint_Request {
  type RmwMsg = super::srv::rmw::MoveJoint_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
        joint_ids: msg.joint_ids.into(),
        positions: msg.positions.into(),
        velocities: msg.velocities.into(),
        accelerations: msg.accelerations.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
        joint_ids: msg.joint_ids.as_slice().into(),
        positions: msg.positions.as_slice().into(),
        velocities: msg.velocities.as_slice().into(),
        accelerations: msg.accelerations.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ip: msg.ip.to_string(),
      joint_ids: msg.joint_ids
          .into_iter()
          .collect(),
      positions: msg.positions
          .into_iter()
          .collect(),
      velocities: msg.velocities
          .into_iter()
          .collect(),
      accelerations: msg.accelerations
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__MoveJoint_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveJoint_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for MoveJoint_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MoveJoint_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MoveJoint_Response {
  type RmwMsg = super::srv::rmw::MoveJoint_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__SetFingerEnabled_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFingerEnabled_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: std::string::String,

    /// List of finger IDs to enable/disable
    pub finger_ids: Vec<super::msg::FingerId>,

    /// true to enable, false to disable
    pub enable: bool,

}



impl Default for SetFingerEnabled_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFingerEnabled_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetFingerEnabled_Request {
  type RmwMsg = super::srv::rmw::SetFingerEnabled_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
        finger_ids: msg.finger_ids
          .into_iter()
          .map(|elem| super::msg::FingerId::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        enable: msg.enable,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
        finger_ids: msg.finger_ids
          .iter()
          .map(|elem| super::msg::FingerId::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      enable: msg.enable,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ip: msg.ip.to_string(),
      finger_ids: msg.finger_ids
          .into_iter()
          .map(super::msg::FingerId::from_rmw_message)
          .collect(),
      enable: msg.enable,
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__SetFingerEnabled_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFingerEnabled_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetFingerEnabled_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFingerEnabled_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetFingerEnabled_Response {
  type RmwMsg = super::srv::rmw::SetFingerEnabled_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDeviceIPAddress_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub original_ip: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub new_ip: std::string::String,

}



impl Default for SetDeviceIPAddress_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetDeviceIPAddress_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetDeviceIPAddress_Request {
  type RmwMsg = super::srv::rmw::SetDeviceIPAddress_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        original_ip: msg.original_ip.as_str().into(),
        new_ip: msg.new_ip.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        original_ip: msg.original_ip.as_str().into(),
        new_ip: msg.new_ip.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      original_ip: msg.original_ip.to_string(),
      new_ip: msg.new_ip.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDeviceIPAddress_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetDeviceIPAddress_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetDeviceIPAddress_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetDeviceIPAddress_Response {
  type RmwMsg = super::srv::rmw::SetDeviceIPAddress_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__Connect_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Connect_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub connect: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub connection_type: i32,

}



impl Default for Connect_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Connect_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Connect_Request {
  type RmwMsg = super::srv::rmw::Connect_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        connect: msg.connect,
        ip: msg.ip.as_str().into(),
        connection_type: msg.connection_type,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      connect: msg.connect,
        ip: msg.ip.as_str().into(),
      connection_type: msg.connection_type,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      connect: msg.connect,
      ip: msg.ip.to_string(),
      connection_type: msg.connection_type,
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__Connect_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Connect_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for Connect_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Connect_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Connect_Response {
  type RmwMsg = super::srv::rmw::Connect_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__SetAllFingersEnable_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetAllFingersEnable_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enable: bool,

}



impl Default for SetAllFingersEnable_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetAllFingersEnable_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetAllFingersEnable_Request {
  type RmwMsg = super::srv::rmw::SetAllFingersEnable_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
        enable: msg.enable,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      enable: msg.enable,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ip: msg.ip.to_string(),
      enable: msg.enable,
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__SetAllFingersEnable_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetAllFingersEnable_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetAllFingersEnable_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetAllFingersEnable_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetAllFingersEnable_Response {
  type RmwMsg = super::srv::rmw::SetAllFingersEnable_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMaxJointSpeed_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub get_only: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_ids: Vec<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_speeds: Vec<f64>,

}



impl Default for SetMaxJointSpeed_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMaxJointSpeed_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMaxJointSpeed_Request {
  type RmwMsg = super::srv::rmw::SetMaxJointSpeed_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
        get_only: msg.get_only,
        joint_ids: msg.joint_ids.into(),
        max_speeds: msg.max_speeds.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      get_only: msg.get_only,
        joint_ids: msg.joint_ids.as_slice().into(),
        max_speeds: msg.max_speeds.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ip: msg.ip.to_string(),
      get_only: msg.get_only,
      joint_ids: msg.joint_ids
          .into_iter()
          .collect(),
      max_speeds: msg.max_speeds
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMaxJointSpeed_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_speeds: Vec<f64>,

}



impl Default for SetMaxJointSpeed_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMaxJointSpeed_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMaxJointSpeed_Response {
  type RmwMsg = super::srv::rmw::SetMaxJointSpeed_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        max_speeds: msg.max_speeds.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        max_speeds: msg.max_speeds.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      max_speeds: msg.max_speeds
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__SetMaxJointAccel_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMaxJointAccel_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub get_only: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_ids: Vec<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_accels: Vec<f64>,

}



impl Default for SetMaxJointAccel_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMaxJointAccel_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMaxJointAccel_Request {
  type RmwMsg = super::srv::rmw::SetMaxJointAccel_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
        get_only: msg.get_only,
        joint_ids: msg.joint_ids.into(),
        max_accels: msg.max_accels.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      get_only: msg.get_only,
        joint_ids: msg.joint_ids.as_slice().into(),
        max_accels: msg.max_accels.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ip: msg.ip.to_string(),
      get_only: msg.get_only,
      joint_ids: msg.joint_ids
          .into_iter()
          .collect(),
      max_accels: msg.max_accels
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__SetMaxJointAccel_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMaxJointAccel_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_accels: Vec<f64>,

}



impl Default for SetMaxJointAccel_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMaxJointAccel_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMaxJointAccel_Response {
  type RmwMsg = super::srv::rmw::SetMaxJointAccel_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        max_accels: msg.max_accels.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        max_accels: msg.max_accels.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      max_accels: msg.max_accels
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMaxFingerTorque_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub get_only: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub finger_ids: Vec<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_torques: Vec<f64>,

}



impl Default for SetMaxFingerTorque_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMaxFingerTorque_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMaxFingerTorque_Request {
  type RmwMsg = super::srv::rmw::SetMaxFingerTorque_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
        get_only: msg.get_only,
        finger_ids: msg.finger_ids.into(),
        max_torques: msg.max_torques.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      get_only: msg.get_only,
        finger_ids: msg.finger_ids.as_slice().into(),
        max_torques: msg.max_torques.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ip: msg.ip.to_string(),
      get_only: msg.get_only,
      finger_ids: msg.finger_ids
          .into_iter()
          .collect(),
      max_torques: msg.max_torques
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMaxFingerTorque_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_torques: Vec<f64>,

}



impl Default for SetMaxFingerTorque_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMaxFingerTorque_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMaxFingerTorque_Response {
  type RmwMsg = super::srv::rmw::SetMaxFingerTorque_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        max_torques: msg.max_torques.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        max_torques: msg.max_torques.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      max_torques: msg.max_torques
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__StartTactileCalibration_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartTactileCalibration_Request {
    /// target hand ip
    pub ip: std::string::String,

}



impl Default for StartTactileCalibration_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StartTactileCalibration_Request::default())
  }
}

impl rosidl_runtime_rs::Message for StartTactileCalibration_Request {
  type RmwMsg = super::srv::rmw::StartTactileCalibration_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ip: msg.ip.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__StartTactileCalibration_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartTactileCalibration_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for StartTactileCalibration_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StartTactileCalibration_Response::default())
  }
}

impl rosidl_runtime_rs::Message for StartTactileCalibration_Response {
  type RmwMsg = super::srv::rmw::StartTactileCalibration_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__StartTeleop_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartTeleop_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub command: std::string::String,

}



impl Default for StartTeleop_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StartTeleop_Request::default())
  }
}

impl rosidl_runtime_rs::Message for StartTeleop_Request {
  type RmwMsg = super::srv::rmw::StartTeleop_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        command: msg.command.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        command: msg.command.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      command: msg.command.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__StartTeleop_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartTeleop_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for StartTeleop_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StartTeleop_Response::default())
  }
}

impl rosidl_runtime_rs::Message for StartTeleop_Response {
  type RmwMsg = super::srv::rmw::StartTeleop_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__ManusCalibration_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManusCalibration_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub side: std::string::String,

}



impl Default for ManusCalibration_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ManusCalibration_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ManusCalibration_Request {
  type RmwMsg = super::srv::rmw::ManusCalibration_Request;

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


// Corresponds to rysen_apexhand_msgs__srv__ManusCalibration_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub four_fingers_together_tips: [geometry_msgs::msg::Point; 5],


    // This member is not documented.
    #[allow(missing_docs)]
    pub fist_tips: [geometry_msgs::msg::Point; 5],


    // This member is not documented.
    #[allow(missing_docs)]
    pub sample_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ManusCalibration_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ManusCalibration_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ManusCalibration_Response {
  type RmwMsg = super::srv::rmw::ManusCalibration_Response;

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
      theta_rad: msg.theta_rad,
      theta_deg: msg.theta_deg,
      four_fingers_together_tips: msg.four_fingers_together_tips
        .map(geometry_msgs::msg::Point::from_rmw_message),
      fist_tips: msg.fist_tips
        .map(geometry_msgs::msg::Point::from_rmw_message),
      sample_count: msg.sample_count,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__ClearTactileCalibration_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearTactileCalibration_Request {
    /// target hand ip
    pub ip: std::string::String,

}



impl Default for ClearTactileCalibration_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ClearTactileCalibration_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ClearTactileCalibration_Request {
  type RmwMsg = super::srv::rmw::ClearTactileCalibration_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ip: msg.ip.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__ClearTactileCalibration_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearTactileCalibration_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ClearTactileCalibration_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ClearTactileCalibration_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ClearTactileCalibration_Response {
  type RmwMsg = super::srv::rmw::ClearTactileCalibration_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__CleanFaults_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CleanFaults_Request {
    /// target hand ip
    pub ip: std::string::String,

}



impl Default for CleanFaults_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CleanFaults_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CleanFaults_Request {
  type RmwMsg = super::srv::rmw::CleanFaults_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ip: msg.ip.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__CleanFaults_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CleanFaults_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for CleanFaults_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CleanFaults_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CleanFaults_Response {
  type RmwMsg = super::srv::rmw::CleanFaults_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__GetConnectionInfo_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetConnectionInfo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetConnectionInfo_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetConnectionInfo_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetConnectionInfo_Request {
  type RmwMsg = super::srv::rmw::GetConnectionInfo_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__GetConnectionInfo_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetConnectionInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ips: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub connected: Vec<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_ips: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_sides: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hardware_uids: Vec<std::string::String>,

}



impl Default for GetConnectionInfo_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetConnectionInfo_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetConnectionInfo_Response {
  type RmwMsg = super::srv::rmw::GetConnectionInfo_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ips: msg.ips
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        connected: msg.connected.into(),
        device_ips: msg.device_ips
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        hand_sides: msg.hand_sides
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        hardware_uids: msg.hardware_uids
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ips: msg.ips
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        connected: msg.connected.as_slice().into(),
        device_ips: msg.device_ips
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        hand_sides: msg.hand_sides
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        hardware_uids: msg.hardware_uids
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ips: msg.ips
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      connected: msg.connected
          .into_iter()
          .collect(),
      device_ips: msg.device_ips
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      hand_sides: msg.hand_sides
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      hardware_uids: msg.hardware_uids
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__GetVersionInfo_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetVersionInfo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: std::string::String,

}



impl Default for GetVersionInfo_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetVersionInfo_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetVersionInfo_Request {
  type RmwMsg = super::srv::rmw::GetVersionInfo_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ip: msg.ip.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__GetVersionInfo_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetVersionInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sdk_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_firmware_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub touch_sensor_version: std::string::String,

}



impl Default for GetVersionInfo_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetVersionInfo_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetVersionInfo_Response {
  type RmwMsg = super::srv::rmw::GetVersionInfo_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sdk_version: msg.sdk_version.as_str().into(),
        hand_firmware_version: msg.hand_firmware_version.as_str().into(),
        touch_sensor_version: msg.touch_sensor_version.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sdk_version: msg.sdk_version.as_str().into(),
        hand_firmware_version: msg.hand_firmware_version.as_str().into(),
        touch_sensor_version: msg.touch_sensor_version.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sdk_version: msg.sdk_version.to_string(),
      hand_firmware_version: msg.hand_firmware_version.to_string(),
      touch_sensor_version: msg.touch_sensor_version.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__RemoveHand_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoveHand_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ip: std::string::String,

}



impl Default for RemoveHand_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RemoveHand_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RemoveHand_Request {
  type RmwMsg = super::srv::rmw::RemoveHand_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ip: msg.ip.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__RemoveHand_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoveHand_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for RemoveHand_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RemoveHand_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RemoveHand_Response {
  type RmwMsg = super::srv::rmw::RemoveHand_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__IsFingerEnabled_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsFingerEnabled_Request {
    /// 目标机械手的 IP
    pub ip: std::string::String,

    /// 手指 ID (0:拇指, 1:食指, 2:中指, 3:无名指, 4:小指)
    pub finger_id: u8,

}



impl Default for IsFingerEnabled_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IsFingerEnabled_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IsFingerEnabled_Request {
  type RmwMsg = super::srv::rmw::IsFingerEnabled_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
        finger_id: msg.finger_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ip: msg.ip.as_str().into(),
      finger_id: msg.finger_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ip: msg.ip.to_string(),
      finger_id: msg.finger_id,
    }
  }
}


// Corresponds to rysen_apexhand_msgs__srv__IsFingerEnabled_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsFingerEnabled_Response {
    /// 服务调用是否成功（比如 IP 不存在就会返回 false）
    pub success: bool,

    /// 错误信息或状态描述
    pub message: std::string::String,

    /// 该手指是否被使能 (true/false)
    pub is_enabled: bool,

}



impl Default for IsFingerEnabled_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IsFingerEnabled_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IsFingerEnabled_Response {
  type RmwMsg = super::srv::rmw::IsFingerEnabled_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        is_enabled: msg.is_enabled,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      is_enabled: msg.is_enabled,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      is_enabled: msg.is_enabled,
    }
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


