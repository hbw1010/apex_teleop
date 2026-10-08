#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rosbag2_interfaces__msg__ReadSplitEvent
/// The full path of the file that was finished and closed

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReadSplitEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub closed_file: std::string::String,

    /// The full path of the new file that was opened to continue playback
    pub opened_file: std::string::String,

}



impl Default for ReadSplitEvent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ReadSplitEvent::default())
  }
}

impl rosidl_runtime_rs::Message for ReadSplitEvent {
  type RmwMsg = super::msg::rmw::ReadSplitEvent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        closed_file: msg.closed_file.as_str().into(),
        opened_file: msg.opened_file.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        closed_file: msg.closed_file.as_str().into(),
        opened_file: msg.opened_file.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      closed_file: msg.closed_file.to_string(),
      opened_file: msg.opened_file.to_string(),
    }
  }
}


// Corresponds to rosbag2_interfaces__msg__WriteSplitEvent
/// The full path of the file that was finished and closed

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WriteSplitEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub closed_file: std::string::String,

    /// The full path of the new file that was created to continue recording
    pub opened_file: std::string::String,

}



impl Default for WriteSplitEvent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WriteSplitEvent::default())
  }
}

impl rosidl_runtime_rs::Message for WriteSplitEvent {
  type RmwMsg = super::msg::rmw::WriteSplitEvent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        closed_file: msg.closed_file.as_str().into(),
        opened_file: msg.opened_file.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        closed_file: msg.closed_file.as_str().into(),
        opened_file: msg.opened_file.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      closed_file: msg.closed_file.to_string(),
      opened_file: msg.opened_file.to_string(),
    }
  }
}


