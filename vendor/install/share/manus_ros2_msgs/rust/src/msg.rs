#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to manus_ros2_msgs__msg__ManusGlove

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManusGlove {

    // This member is not documented.
    #[allow(missing_docs)]
    pub glove_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub side: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw_node_count: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw_nodes: Vec<super::msg::ManusRawNode>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ergonomics_count: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ergonomics: Vec<super::msg::ManusErgonomics>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw_sensor_orientation: geometry_msgs::msg::Quaternion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw_sensor_count: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw_sensor: Vec<geometry_msgs::msg::Pose>,

}



impl Default for ManusGlove {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ManusGlove::default())
  }
}

impl rosidl_runtime_rs::Message for ManusGlove {
  type RmwMsg = super::msg::rmw::ManusGlove;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        glove_id: msg.glove_id,
        side: msg.side.as_str().into(),
        raw_node_count: msg.raw_node_count,
        raw_nodes: msg.raw_nodes
          .into_iter()
          .map(|elem| super::msg::ManusRawNode::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        ergonomics_count: msg.ergonomics_count,
        ergonomics: msg.ergonomics
          .into_iter()
          .map(|elem| super::msg::ManusErgonomics::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        raw_sensor_orientation: geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Owned(msg.raw_sensor_orientation)).into_owned(),
        raw_sensor_count: msg.raw_sensor_count,
        raw_sensor: msg.raw_sensor
          .into_iter()
          .map(|elem| geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      glove_id: msg.glove_id,
        side: msg.side.as_str().into(),
      raw_node_count: msg.raw_node_count,
        raw_nodes: msg.raw_nodes
          .iter()
          .map(|elem| super::msg::ManusRawNode::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      ergonomics_count: msg.ergonomics_count,
        ergonomics: msg.ergonomics
          .iter()
          .map(|elem| super::msg::ManusErgonomics::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        raw_sensor_orientation: geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.raw_sensor_orientation)).into_owned(),
      raw_sensor_count: msg.raw_sensor_count,
        raw_sensor: msg.raw_sensor
          .iter()
          .map(|elem| geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      glove_id: msg.glove_id,
      side: msg.side.to_string(),
      raw_node_count: msg.raw_node_count,
      raw_nodes: msg.raw_nodes
          .into_iter()
          .map(super::msg::ManusRawNode::from_rmw_message)
          .collect(),
      ergonomics_count: msg.ergonomics_count,
      ergonomics: msg.ergonomics
          .into_iter()
          .map(super::msg::ManusErgonomics::from_rmw_message)
          .collect(),
      raw_sensor_orientation: geometry_msgs::msg::Quaternion::from_rmw_message(msg.raw_sensor_orientation),
      raw_sensor_count: msg.raw_sensor_count,
      raw_sensor: msg.raw_sensor
          .into_iter()
          .map(geometry_msgs::msg::Pose::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to manus_ros2_msgs__msg__ManusRawNode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub joint_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub chain_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,

}



impl Default for ManusRawNode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ManusRawNode::default())
  }
}

impl rosidl_runtime_rs::Message for ManusRawNode {
  type RmwMsg = super::msg::rmw::ManusRawNode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: msg.node_id,
        parent_node_id: msg.parent_node_id,
        joint_type: msg.joint_type.as_str().into(),
        chain_type: msg.chain_type.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      node_id: msg.node_id,
      parent_node_id: msg.parent_node_id,
        joint_type: msg.joint_type.as_str().into(),
        chain_type: msg.chain_type.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_id: msg.node_id,
      parent_node_id: msg.parent_node_id,
      joint_type: msg.joint_type.to_string(),
      chain_type: msg.chain_type.to_string(),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
    }
  }
}


// Corresponds to manus_ros2_msgs__msg__ManusErgonomics

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManusErgonomics {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f32,

}



impl Default for ManusErgonomics {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ManusErgonomics::default())
  }
}

impl rosidl_runtime_rs::Message for ManusErgonomics {
  type RmwMsg = super::msg::rmw::ManusErgonomics;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_.as_str().into(),
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_.as_str().into(),
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_.to_string(),
      value: msg.value,
    }
  }
}


// Corresponds to manus_ros2_msgs__msg__ManusVibrationCommand
/// msg/ManusVibrationCommand.msg

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManusVibrationCommand {
    /// Thumb, Index, Middle, Ring, Pinky
    pub intensities: [f32; 5],

}



impl Default for ManusVibrationCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ManusVibrationCommand::default())
  }
}

impl rosidl_runtime_rs::Message for ManusVibrationCommand {
  type RmwMsg = super::msg::rmw::ManusVibrationCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        intensities: msg.intensities,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        intensities: msg.intensities,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      intensities: msg.intensities,
    }
  }
}


