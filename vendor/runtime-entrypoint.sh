#!/usr/bin/env bash
# ROS setup scripts probe optional variables; do not use `set -u` before
# sourcing them. Keep fail-fast and pipeline error handling for this wrapper.
set -eo pipefail

source /opt/ros/humble/setup.bash
source /opt/rysen-retargeting/install/setup.bash

sdk_lib=/opt/rysen-retargeting/install/lib/manus_ros2/libManusSDK_Integrated.so
if [[ ! -r "$sdk_lib" ]]; then
  echo "[entrypoint] ERROR: bundled MANUS SDK library not found: $sdk_lib" >&2
  exit 2
fi

echo "[entrypoint] ROS_DOMAIN_ID=${ROS_DOMAIN_ID:-unset} ROS_LOCALHOST_ONLY=${ROS_LOCALHOST_ONLY:-unset} RMW_IMPLEMENTATION=${RMW_IMPLEMENTATION:-unset}"

if [[ "${MANUS_UDEV:-1}" == "1" ]] && [[ -f /opt/rysen-retargeting/70-manus-hid.rules ]]; then
  cp /opt/rysen-retargeting/70-manus-hid.rules /etc/udev/rules.d/70-manus-hid.rules 2>/dev/null || true
  udevadm control --reload-rules >/dev/null 2>&1 || true
  udevadm trigger >/dev/null 2>&1 || true
fi

if [[ "${1:-}" == "ros2" && "${2:-}" == "launch" \
   && "${3:-}" == "apex_hand_teleop" \
   && "${4:-}" == "manus_apex_teleop.launch.py" ]]; then
  launch_args=("$@")
  [[ -n "${MANUS_CALIBRATION_FILE:-}" ]] \
    && launch_args+=("calibration_file:=${MANUS_CALIBRATION_FILE}")
  [[ -n "${MANUS_CALIBRATION_GLOVE_ID:-}" ]] \
    && launch_args+=("calibration_glove_id:=${MANUS_CALIBRATION_GLOVE_ID}")
  [[ -n "${MANUS_RUNTIME_CALIBRATION_FILE:-}" ]] \
    && launch_args+=("runtime_calibration_file:=${MANUS_RUNTIME_CALIBRATION_FILE}")
  exec "${launch_args[@]}"
fi

exec "$@"
