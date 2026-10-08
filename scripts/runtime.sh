#!/usr/bin/env bash
set -euo pipefail
root="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
source "${root}/scripts/activate.sh"

if [[ ! -x "$PYTHON" ]]; then
  echo "缺少 native 环境的 Python，请先执行 pixi install -e native。" >&2
  exit 2
fi
"$PYTHON" -c 'import sys; sys.exit(0 if sys.version_info[:2] == (3, 10) else "原版二进制只支持 Python 3.10，请使用 Pixi native 环境。")'

# 不 source .env：仅接受单行 KEY=value、引号及注释，不展开变量或执行代码。
# 外部环境优先于 .env；默认值在加载完成后才设置。
if [[ -f "${root}/.env" ]]; then
  env_values="$("$PYTHON" - "${root}/.env" <<'PY'
import os
import re
import shlex
import sys

supported = {
    "ROS_DOMAIN_ID", "ROS_LOCALHOST_ONLY", "RMW_IMPLEMENTATION",
    "ENABLE_VIEWER", "MANUS_CALIBRATION_FILE",
    "MANUS_CALIBRATION_GLOVE_ID", "MANUS_RUNTIME_CALIBRATION_FILE",
}
try:
    with open(sys.argv[1], encoding="utf-8") as stream:
        for number, line in enumerate(stream, 1):
            fields = shlex.split(line, comments=True, posix=True)
            if not fields:
                continue
            if len(fields) != 1 or "=" not in fields[0]:
                raise ValueError(f"第 {number} 行必须是单行 KEY=value，含空格的值需要引号")
            key, value = fields[0].split("=", 1)
            if not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", key) or "\0" in value:
                raise ValueError(f"第 {number} 行包含非法环境变量")
            if key in supported and key not in os.environ:
                print(f"{key}={value}")
except (OSError, ValueError) as exc:
    sys.exit(f"读取 .env 失败：{exc}")
PY
)"
  while IFS= read -r entry; do
    [[ -z "$entry" ]] || export "$entry"
  done <<< "$env_values"
fi
# .env 不能改写 Python/ROS 二进制搜索路径。
source "${root}/scripts/activate.sh"
export ROS_DOMAIN_ID="${ROS_DOMAIN_ID-111}"
export ROS_LOCALHOST_ONLY="${ROS_LOCALHOST_ONLY-1}"
export RMW_IMPLEMENTATION="${RMW_IMPLEMENTATION-rmw_fastrtps_cpp}"
export ENABLE_VIEWER="${ENABLE_VIEWER-false}"
export MANUS_CALIBRATION_FILE="${MANUS_CALIBRATION_FILE-}"
export MANUS_CALIBRATION_GLOVE_ID="${MANUS_CALIBRATION_GLOVE_ID-}"
export MANUS_RUNTIME_CALIBRATION_FILE="${MANUS_RUNTIME_CALIBRATION_FILE-${root}/calibration/manus_runtime_calibration.yaml}"

required=(
  vendor/ros/bin/ros2
  vendor/ros/local/lib/python3.10/dist-packages/rclpy/_rclpy_pybind11.cpython-310-x86_64-linux-gnu.so
  vendor/install/share/apex_hand_teleop/launch/manus_apex_teleop.launch.py
  vendor/install/lib/apex_hand_teleop/manus_teleop_manager
  vendor/install/lib/python3.10/site-packages/apex_hand_teleop/_teleop_core.cpython-310-x86_64-linux-gnu.so
  vendor/install/lib/python3.10/site-packages/apex_hand_teleop/_manus_apex_retarget_node.cpython-310-x86_64-linux-gnu.so
  vendor/install/lib/manus_ros2/libManusSDK_Integrated.so
)
for file in "${required[@]}"; do
  if [[ ! -r "${root}/${file}" ]]; then
    echo "缺少原版运行文件 ${file}，请先执行 pixi run -e native bootstrap。" >&2
    exit 2
  fi
done
if [[ ! -d "${root}/vendor/system/lib" ]]; then
  echo "缺少 vendor/system/lib，请先执行 pixi run -e native bootstrap。" >&2
  exit 2
fi

if [[ $# -eq 0 || "$1" == teleop ]]; then
  [[ $# -eq 0 ]] || shift
  if [[ -n "$MANUS_RUNTIME_CALIBRATION_FILE" ]]; then
    # 相对路径统一以项目根目录为基准，而非调用者所在目录。
    if [[ "$MANUS_RUNTIME_CALIBRATION_FILE" != /* ]]; then
      export MANUS_RUNTIME_CALIBRATION_FILE="${root}/${MANUS_RUNTIME_CALIBRATION_FILE}"
    fi
    mkdir -p -- "$(dirname -- "$MANUS_RUNTIME_CALIBRATION_FILE")"
  fi
  if [[ -n "$MANUS_CALIBRATION_FILE" && "$MANUS_CALIBRATION_FILE" != /* ]]; then
    export MANUS_CALIBRATION_FILE="${root}/${MANUS_CALIBRATION_FILE}"
  fi
  # 用户附加 launch 参数放在最后，可覆盖这里的配置默认值。
  launch_args=(launch apex_hand_teleop manus_apex_teleop.launch.py "enable_viewer:=${ENABLE_VIEWER}")
  [[ -z "$MANUS_CALIBRATION_FILE" ]] || launch_args+=("calibration_file:=${MANUS_CALIBRATION_FILE}")
  [[ -z "$MANUS_CALIBRATION_GLOVE_ID" ]] || launch_args+=("calibration_glove_id:=${MANUS_CALIBRATION_GLOVE_ID}")
  [[ -z "$MANUS_RUNTIME_CALIBRATION_FILE" ]] || launch_args+=("runtime_calibration_file:=${MANUS_RUNTIME_CALIBRATION_FILE}")
  exec "${root}/scripts/bin/ros2" "${launch_args[@]}" "$@"
fi
exec "$@"
