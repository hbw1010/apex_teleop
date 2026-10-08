#!/usr/bin/env bash
# 只配置路径，不读取 .env、不检查 vendor；首次 bootstrap 前也可以激活。
_APEX_ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
_APEX_NATIVE="${_APEX_ROOT}/.pixi/envs/native"
export PYTHON="${_APEX_NATIVE}/bin/python"
export USE_SYSTEM_PYTHON=1
export PYTHONNOUSERSITE=1
unset PYTHONHOME
export ROS_VERSION=2
export ROS_PYTHON_VERSION=3
export ROS_DISTRO=humble
export AMENT_PREFIX_PATH="${_APEX_ROOT}/install:${_APEX_ROOT}/vendor/install:${_APEX_ROOT}/vendor/ros"
export CMAKE_PREFIX_PATH="${AMENT_PREFIX_PATH}"
export PYTHONPATH="${_APEX_ROOT}/vendor/install/lib/python3.10/site-packages:${_APEX_ROOT}/vendor/install/local/lib/python3.10/dist-packages:${_APEX_ROOT}/vendor/ros/lib/python3.10/site-packages:${_APEX_ROOT}/vendor/ros/local/lib/python3.10/dist-packages"
export LD_LIBRARY_PATH="${_APEX_ROOT}/install/lib:${_APEX_ROOT}/vendor/apex-sdk/lib:${_APEX_ROOT}/vendor/install/lib:${_APEX_ROOT}/vendor/install/lib/manus_ros2:${_APEX_ROOT}/vendor/ros/lib:${_APEX_ROOT}/vendor/system/lib:${_APEX_NATIVE}/lib"
export PATH="${_APEX_ROOT}/scripts/bin:${_APEX_NATIVE}/bin:${_APEX_ROOT}/vendor/ros/bin:${PATH}"
unset _APEX_ROOT _APEX_NATIVE
