#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
BACKEND="$ROOT/install/lib/rysen_apexhand/rysen_apexhand_node_exe"
if [[ ! -x "$BACKEND" ]]; then
    printf '未找到可执行后端：%s\n请先运行：pixi run -e native build-backend\n' "$BACKEND" >&2
    exit 2
fi

export ROS_LOG_DIR="$ROOT/log/backend"
mkdir -p -- "$ROS_LOG_DIR"
exec "$BACKEND" --ros-args \
    -p "device_ip:=${APEXHAND_IP:-192.168.0.102}" \
    -p auto_connect:=false \
    -p auto_enable_on_connect:=false \
    -p auto_connect_startup_hands:=false \
    "$@"
