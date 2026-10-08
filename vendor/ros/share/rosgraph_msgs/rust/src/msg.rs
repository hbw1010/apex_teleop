#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rosgraph_msgs__msg__Clock
/// This message communicates the current time.
///
/// For more information, see https://design.ros2.org/articles/clock_and_time.html.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Clock {

    // This member is not documented.
    #[allow(missing_docs)]
    pub clock: builtin_interfaces::msg::Time,

}



impl Default for Clock {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Clock::default())
  }
}

impl rosidl_runtime_rs::Message for Clock {
  type RmwMsg = super::msg::rmw::Clock;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        clock: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.clock)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        clock: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.clock)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      clock: builtin_interfaces::msg::Time::from_rmw_message(msg.clock),
    }
  }
}


