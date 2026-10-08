#!/usr/bin/env bash
set -euo pipefail
root="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
# 构建工具使用 Pixi 自带 C++ 运行库；生成程序仍由 runtime.sh 使用固定 ROS/SDK 库。
export LD_LIBRARY_PATH="${CONDA_PREFIX}/lib:${LD_LIBRARY_PATH}"
# 每次重新生成 CMake 缓存，避免项目搬移后复用旧的绝对路径。
cmake --fresh -S "${root}/src/rysen_apexhand" -B "${root}/build/backend" -G Ninja \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_INSTALL_PREFIX="${root}/install" \
  -DCMAKE_PREFIX_PATH="${root}/vendor/install;${root}/vendor/ros;${CONDA_PREFIX}" \
  -DPython3_EXECUTABLE="${PYTHON}" \
  -DBUILD_TESTING=OFF
cmake --build "${root}/build/backend" --parallel "${CMAKE_BUILD_PARALLEL_LEVEL:-4}"
cmake --install "${root}/build/backend"
