#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
cd -- "$ROOT"

if ! command -v pixi >/dev/null 2>&1; then
    printf '%s\n' '未找到 pixi。请按 https://pixi.sh/latest/installation/ 安装 Pixi，并将其加入 PATH。' >&2
    exit 2
fi
if [[ ! -x "$ROOT/.pixi/envs/native/bin/python" ]]; then
    printf '缺少 native 环境。请先执行：\n  cd %q\n  pixi install -e native\n' "$ROOT" >&2
    exit 2
fi
# runtime.sh 加载受限的 .env；session 默认开窗口，--no-viewer 显式关闭。
exec pixi run -e native session "$@"
