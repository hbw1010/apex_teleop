# apex_teleop

MANUS 手套 → ApexHand 左右灵巧手的原生遥操作工程，面向 **Ubuntu 22.04 x86_64 + Pixi native / Python 3.10**。日常启动不需要 Docker，不依赖相邻工程或全局 ROS 安装。

> **真实硬件安全边界：** `./start.sh` 和不带 `--simulation` 的 `control start-left/start-right/stop` 会操作真实灵巧手，回零也会运动。先完成标定、确认目标 IP/左右手、清空工作区并准备可触及的物理急停。不要为了“试一下”运行这些命令。
>
> **验收状态：** 真实左手连接和状态查询已实测；用户提供的运行日志确认了左手启动回零、失败后回零与关闭使能。左右模型/IK 仿真及独立重建已通过；真实 MANUS 输入到原版重定向节点的转发已在隔离 ROS 域验证，收到完整 21 关节命令。尚未验收真实手套持续驱动真机跟随及双手真实联动；隔离测试不等于完整实机安全验收。
>
> 新增启停流程已通过隔离 ROS 虚拟设备验证：0.08 rad 残差可放行、回零超时禁止转发并失能、侧别错误拒绝使能、单手停止不影响另一手、一键双手及 Ctrl+C 回零退出。共 8 项回归测试通过，覆盖反馈边界、连接拒绝收尾、旧 daemon 缓存下的转发开关，以及创建手套进程期间监控误撤销启动的竞态。真实手套加原版重定向的带窗口模式也已在隔离域验证转发，未驱动真机。

## 1. 架构与来源边界

```text
MANUS 手套 / USB 接收器
  → 原版 MANUS SDK 与 ROS 发布节点
  → 原版 MANUS 姿态处理、重定向 / IK、MuJoCo viewer
  → 按 IP 区分的 ROS 2 关节命令
  → 本工程编译的 ApexHand ROS 后端
  → 随仓库分发的 ApexHand SDK
  → 真实 ApexHand
```

- 上游 [Rysen Retargeting](https://github.com/RysenRobotics/rysen-retargeting) 主要提供镜像发布物。本工程保留其编译扩展、MANUS 集成、重定向算法、模型和消息接口，**不是用新源码重写上游闭源/二进制核心**。
- `scripts/` 负责原生环境装载、服务客户端和启动/退出编排；`src/rysen_apexhand/` 是可在本工程独立编译的 ROS 后端源码。底层 SDK 仍使用原始二进制。
- 一键入口与手动 `control` 入口复用同一真机回零流程；直接调用原版 ROS `StartTeleop` 服务会绕过这层流程，不是推荐的真机入口。
- 上游文档保存在 `upstream/`，其 Docker、外置驱动和独立使能步骤属于上游使用方式；本工程日常运行以本 README 为准。

### 资产目录与许可

| 路径 | 内容与处理方式 |
| --- | --- |
| `vendor/install/` | 原版 MANUS SDK、遥操作扩展、ROS 消息、launch、MuJoCo 模型及其网格等资源；完整上传，不能与根目录生成的 `install/` 混淆 |
| `vendor/ros/` | 固定镜像中的 ROS 2 Humble 发布物；完整上传 |
| `vendor/system/` | 原版 ELF 的递归动态依赖闭包（不含 glibc）、库清单及 `licenses/` 版权声明；完整上传 |
| `vendor/apex-sdk/` | ApexHand SDK 1.5.2、头文件、依赖库、左右手 URDF、许可证和 `provenance.json` 来源清单；完整上传 |
| `src/rysen_apexhand/` | 本地 ROS 驱动源码及其许可证；上传，在新机器重新构建 |
| `vendor-manifest.json` | 上游提交、固定官方镜像 digest、ABI 和导入策略；上传 |
| `upstream/` | 上游发布说明和 Apache-2.0 许可证；保留来源 |
| `.env`、`calibration/` | 本机网络配置、个人 `.mcal` / 运行时 YAML 标定；不上传 |
| `.pixi/`、`build/`、根目录 `install/`、`log/`、`.cache/` | 本机环境、构建物和日志；不上传，搬迁后重新生成 |

上游来源固定在 `vendor-manifest.json` 记录的提交和镜像；SDK 的原始来源与 SHA-256 记录在 `vendor/apex-sdk/provenance.json`，其中没有已确认的上游 Git revision，不能把本地来源路径当成运行时依赖。`src/rysen_apexhand/LICENSE` 和 `vendor/apex-sdk/licenses/LICENSE` 为 BSD-3-Clause；上游项目的 Apache-2.0 许可**不自动覆盖 MANUS SDK、模型及所有第三方组件**。ROS、系统库和 MANUS 各自的许可仍适用。上传前确认 SDK/模型的再分发权限，保留已有许可证和版权声明；默认私有仓库也不免除许可义务。

`vendor/install/lib/manus_ros2/libManusSDK_Integrated.so` 超过 GitHub 普通 Git 单文件 100 MiB 限制，已在 `.gitattributes` 中配置 Git LFS。必须使用 LFS 上传和下载真实对象；其余模型、网格、URDF、SDK 和运行库同样随仓库上传，不能只上传源码或 LFS 指针。

## 2. 首次安装与无硬件检查

### 前置条件

- Ubuntu **22.04 x86_64/amd64**，主机提供 glibc 2.35；不支持直接换用 ARM 或任意 Python ABI。
- [Pixi](https://pixi.sh/latest/installation/)、Git、[Git LFS](https://git-lfs.com/)。Python 3.10 和编译工具由锁定的 Pixi `native` 环境提供。
- 真机运行需要可达的 ApexHand 网络，以及 MANUS USB 接收器/手套；viewer 需要可用图形显示和 OpenGL。
- 私有仓库访问权限。以下 `OWNER` 是明确占位符，请替换成实际 GitHub 用户或组织；不表示该远程仓库已创建。

```bash
# 系统若尚未安装 Git / Git LFS，由用户自行执行：
sudo apt-get update
sudo apt-get install git git-lfs

# 安装好 Pixi 后，完整克隆发布仓库：
git clone https://github.com/OWNER/apex_teleop.git
cd apex_teleop
git lfs install --local
git lfs pull

pixi install --locked -e native
cp .env.example .env
# 按后文说明编辑 .env；已有配置时不要覆盖。
pixi run -e native build-backend
pixi run -e native smoke
```

`smoke` 导入真实扩展、装载已构建后端动态依赖、检查自定义 ROS 消息序列化，并用左右模型实际运行 IK；**不连接、不使能、不向真实手发送运动命令**。`build-backend` 生成根目录 `build/` 和 `install/`，不覆盖原版 `vendor/install/`。

完整 clone + `git lfs pull` 后不必安装 Docker。只有缺失原版 vendor 发布物、需要从固定官方镜像恢复时才使用：

```bash
pixi run -e native bootstrap
```

此恢复步骤需要可用的 Docker 和镜像访问权限，按 `vendor-manifest.json` 固定 digest 导入，不启动容器、不自动 sudo、不安装 udev 规则。它不是日常启动步骤，也不能替代仓库内的 ApexHand SDK 资产。LFS 下载不完整时先修复 `git lfs pull`；一个存在但内容仍是 LFS 指针的文件不能作为可加载 SDK 使用。

### 配置与 ROS 网络

`.env` 仅由 `runtime` 入口读取；优先级为 **已导出的外部环境 > `.env` > 默认值**。`pixi shell` 本身不读取 `.env`。只支持模板列出的单行 `KEY=value`，不执行 shell、不展开 `$HOME` 或 `${变量}`，路径应写成实际路径；相对标定路径以项目根目录为准。

```dotenv
ROS_DOMAIN_ID=111
ROS_LOCALHOST_ONLY=1
RMW_IMPLEMENTATION=rmw_fastrtps_cpp
ENABLE_VIEWER=false
MANUS_CALIBRATION_FILE=
MANUS_CALIBRATION_GLOVE_ID=
MANUS_RUNTIME_CALIBRATION_FILE=calibration/manus_runtime_calibration.yaml
```

后端、teleop、control、hand 和其他 ROS 调用端必须使用相同 domain / RMW。默认 domain 为 **111**，默认 `ROS_LOCALHOST_ONLY=1`，只发现本机节点，防止误复用局域网其他机器的同名后端。这不影响本机 SDK 通过以太网连接真实灵巧手。只有明确使用跨主机 ROS 后端时才设为 `0`。不要混用同 domain 的旧驱动、旧管理器或其他控制器。

若启动日志显示“复用已有后端”随后 `connect 失败：Timeout`，先确认复用的确实是本机预期后端，而不是局域网同名服务。可显式执行 `ROS_LOCALHOST_ONLY=1 ./start.sh --side left`；不要先放大回零容差或反复重试使能。后端明确拒绝连接、且本次尚未发出使能/运动请求时，会话直接报错退出，不再对未连接设备执行回零/失能；已进入运动阶段或请求结果未知时仍保留安全收尾。

管理器开启/关闭 `follow_publish_armed` 使用 `ros2 param set --no-daemon --spin-time 1.0`，直接发现目标节点，不读取可能在旧网络配置下启动的 CLI daemon 节点缓存。因此不需要关闭本机通信隔离或手动强开转发。

原生入口不自动安装 USB 权限规则。需要时请管理员审阅 `vendor/70-manus-hid.rules` 后自行部署并重插接收器，不要依赖上游 Docker 的 `MANUS_UDEV` 设置。

## 3. 先完成 MANUS 两层标定

这两层标定都不是灵巧手机械零点标定：

1. **MANUS 手套本体 / SDK 标定**：按 MANUS 官方流程完成穿戴与设备标定。需要显式加载原版单手 `.mcal` 时，在 `.env` 设置 `MANUS_CALIBRATION_FILE` 和对应 `MANUS_CALIBRATION_GLOVE_ID`；留空交由原版处理。不要把一个人的 `.mcal` 当成通用数据，也不要假设一个单手 `.mcal` 自动适用于两只手。
2. **运行时姿态标定**：记录各侧 `open` / `fist`，结果保存在 `MANUS_RUNTIME_CALIBRATION_FILE` 指向的 YAML。左右手分别执行，供原版姿态映射使用。

**下面所有 `calibration start/open/fist` 必须在真实灵巧手使能前执行。** 初次准备只启动管理服务，不启动真机后端/一键会话；真实手保持未使能。如果已在遥操作，先按第 5 节完整 `control stop`，确认关闭使能，再标定。标定服务会关闭选中侧命令转发，但**不等于真机回零或断使能**。

终端 A：

```bash
pixi run -e native teleop
```

终端 B，按动作逐条执行，上一步失败则停止并处理原因：

```bash
pixi run -e native control calibration start --side left --timeout 60
# 拇指自然张开，其他四指并拢，保持稳定后：
pixi run -e native control calibration open --side left --timeout 60
# 五指握拳，保持稳定后：
pixi run -e native control calibration fist --side left --timeout 60
```

右手将三条命令中的 `--side left` 换成 `--side right`。可选清除命令：

```bash
pixi run -e native control calibration clear --side left --timeout 60
```

完成或清除标定不会自动恢复转发。准备开始真机遥操作时，必须重新走一键入口或 `control start-left/start-right`，不能直接恢复旧的关节发布。若接下来使用一键入口，先用 Ctrl+C 关闭这次仅用于标定的 teleop 管理服务，避免重复管理器。

## 4. 一键真实遥操作

首次安装、后端构建、标定和安全检查完成后，在项目根目录运行。下面按需要选择一个示例；不要让多个会话重复控制同一只手：

```bash
# 左手；默认左手 IP 为 192.168.0.102
./start.sh --side left

# 右手；默认右手 IP 为 192.168.0.103
./start.sh --side right

# 双手
./start.sh --side both

# 自定义地址、关闭图形界面，并指定等待超时与回零位置容差
./start.sh --side both --left-ip 192.168.0.102 --right-ip 192.168.0.103 --no-viewer --timeout 60 --home-tolerance 0.10
```

`start.sh` 调用 `pixi run -e native session`；`--side` 默认 `left`。会话负责管理后端和 teleop 进程，对选择的手执行与手动控制相同的启动流程，启动后保持前台运行。一键默认开启 viewer，`--no-viewer` 关闭；复用已有管理器时其 viewer 设置必须与本次参数一致，否则按提示停掉旧管理器或选用匹配参数。`--timeout` 默认 60 秒，是每次 `control` 正常操作共享的总期限，不是实时安全看门狗；`--home-tolerance` 默认 0.10 rad，会原样传给每次启动和停止的 `control`。

正常结束时在一键会话终端按 **Ctrl+C**：会话先停止命令转发，再执行回零并关闭使能，最后清理可安全关闭的进程。若有目标外其他 IP 仍连接，共享后端/管理器会保留，且不会自动断开任何连接，需要自行管理剩余服务。必须观察退出结果和真实状态，不能只凭进程消失认定已回零。关终端、机器掉电、进程被强制结束不属于可靠的正常退出方式。

双手会话运行期间，也可在另一个终端单独执行 `control stop --ip <其中一只手的IP>`：会话等待该手回零/失能完成后移除它，另一只手继续运行；全部手停止后会话正常退出。再次启动已移除的手可使用手动 `control start-left/start-right` 或单独一键会话。

## 5. 手动逐步启动与停止

希望手动管理终端时，不使用一键会话；所有终端都从同一项目目录运行、使用相同 `.env`。标定必须已按第 3 节完成。

终端 A，启动本工程后端：

```bash
pixi run -e native backend
```

后端启动不自动连接、不使能、不发送关节命令。一个后端可服务指定 IP 的控制请求；日志在 `log/backend/`。`APEXHAND_IP` 仅作为外部环境变量支持，不从 `.env` 读取，例如 `APEXHAND_IP=192.168.0.102 pixi run -e native backend`，它不取代 `control` 的显式 `--ip`。

终端 B，启动管理服务（这一步也不等于已启动手套转发）：

```bash
pixi run -e native teleop
# 可选查看全部原版 launch 参数：
# pixi run -e native ros2 launch apex_hand_teleop manus_apex_teleop.launch.py --show-args
```

终端 C，在确认安全后按实际需求启动左手、右手或分别启动两只：

```bash
pixi run -e native control start-left --ip 192.168.0.102 --timeout 60
pixi run -e native control start-right --ip 192.168.0.103 --timeout 60

pixi run -e native control status --ip 192.168.0.102 --timeout 10
pixi run -e native control status --ip 192.168.0.103 --timeout 10
```

每个真机 `start-left/start-right` 都按顺序执行：

1. 停止目标 IP 的旧遥操作转发。
2. 连接灵巧手并核对实际左右手与请求一致。
3. 使能，向 **21 个关节发送 0 rad 目标**。
4. 读取关节反馈，确认全部关节满足回零到位判据：默认每关节与 0 rad 的误差不超过 **0.10 rad（约 5.7°）**，并连续保持 **0.15 秒**；不增加速度阈值。
5. 仅在回零确认成功后启动 MANUS 转发。

回零不是“把当前位置写成零”、不是 SDK 写零点，也不更改机械/编码器标定。回零使用目标手独立的位置跟随话题，以最高 `0.30 rad/s`、目标加速度 `0.60 rad/s²` 渐进到零，避免 SDK 阻塞运动服务暂停另一只手；这些是指令轨迹限制，不是已验证的实际机械速度保证。**只有关节反馈通过容差检查才算到位**。回零超时或失败时命令非零退出，禁止继续进入遥操作；不要改用原版服务强行启动。`--no-opposition` 可追加在 `start-left/start-right` 后选择原版无对指模式，不绕过回零。

`--home-tolerance` 同时适用于真机 `start-left`、`start-right`、`stop` 和一键会话，例如 `pixi run -e native control start-left --ip 192.168.0.102 --timeout 60 --home-tolerance 0.10`。这是允许适量误差的回零位置判据，不是高精度零点标定，也不应为绕过机械异常而任意放宽。

每次真机 `control` 正常操作的所有阶段共用 `--timeout` 总期限；异常时另给最多 5 秒尽力停止转发、关闭使能。尽力清理可能失败，不能据此承诺回零成功、已关闭使能或在途 SDK/ROS 请求已取消。

正常结束时，先保持后端和 teleop 运行，对已启动的每只手执行：

```bash
pixi run -e native control stop --ip 192.168.0.102 --timeout 60
pixi run -e native control stop --ip 192.168.0.103 --timeout 60
```

`control stop` 是 **先停止转发 → 回零并核验 → 关闭使能**，不再是仅停止 MANUS 发布。只使用了其中一只手时只停止那只。等待成功并检查状态后，再 Ctrl+C 关闭终端 B/A；如需断开已保持的 SDK 连接，可先运行 `hand disconnect`。手动 `start` 客户端返回后，转发由管理器继续运行，**不是**按客户端所在终端 Ctrl+C 就自动安全停止。

### 底层 hand 诊断与正常入口的区别

初次接入可只启动 backend，做不发送关节目标的检查：

```bash
pixi run -e native hand connect --ip 192.168.0.102 --timeout 10
pixi run -e native hand status --timeout 10
pixi run -e native hand enabled --ip 192.168.0.102 --timeout 10
pixi run -e native hand disconnect --ip 192.168.0.102 --timeout 10
```

`connect` 只连接；`status` 只显示 IP、连接与左右手；`enabled` 只读查询五指使能。**`hand enable` 是低层显式使能，不会自动完成回零，不是常规遥操作入口**，不得先独立使能再假定已处于安全零位。`hand disable` 是低层断使能，不执行完整停止回零，也不能替代物理急停；留给明确理解硬件状态的诊断与处置场景。

后端关键服务为 `/rysen/apexhand/connect`、`/rysen/apexhand/get_connection_info`、`/rysen/apexhand/set_all_fingers` 和 `/rysen/apexhand/move_joint`；MANUS 管理服务为 `/rysen/apexhand/start_manus_teleop`。可以只读检查这些服务是否存在，但直接调用它们不会自动获得 `control` 的整套安全顺序。

## 6. 仿真模式

无需 MANUS 或图形界面的模型/IK 检查直接使用 `pixi run -e native smoke`。以下是**带原版管理器/手套链路**的纯仿真转发示例，仍可能需要正确侧 MANUS 数据或现有仿真订阅者；它不会凭空生成手套输入或仿真后端。

使用与真机隔离的 ROS domain，例如 **211**，并限制 localhost。所有相关仿真进程都必须使用这个隔离环境；**不运行 backend、不使用真实 IP、不启动一键真机会话**。示例 `192.0.2.1` 属于文档专用地址，仅作话题绑定标签，不是硬件地址。

终端 A：

```bash
ROS_DOMAIN_ID=211 ROS_LOCALHOST_ONLY=1 ENABLE_VIEWER=true pixi run -e native teleop
```

终端 B：

```bash
ROS_DOMAIN_ID=211 ROS_LOCALHOST_ONLY=1 pixi run -e native control start-left --ip 192.0.2.1 --simulation --timeout 60
ROS_DOMAIN_ID=211 ROS_LOCALHOST_ONLY=1 pixi run -e native control status --ip 192.0.2.1 --timeout 10
ROS_DOMAIN_ID=211 ROS_LOCALHOST_ONLY=1 pixi run -e native control stop --ip 192.0.2.1 --simulation --timeout 60
```

右手可在停止左手后将 `start-left` 换成 `start-right`。**start 和 stop 都必须显式加 `--simulation`**：这会跳过连接、使能和硬件回零，仅调用原版管理服务；不能拿它给真实手“绕过检查”。`status` 为只读管理器查询，不需要该标志。没有图形显示时将 `ENABLE_VIEWER=true` 改为 `false`。

## 7. 正常退出、故障与急停边界

- 回零本身就是运动，只能在路径无障碍、机械状态允许时执行。危险已发生时，按设备规程使用**物理急停/安全断电**，不要等待软件回零。
- Ctrl+C 的正常回零依赖 Python 仍能运行、ROS 服务和网络正常、设备有电且可控。**`kill -9`、主机崩溃、网络断开或急停断电都不保证回零**；软件也不能替代硬件安全回路。
- 超时或中断不代表已发出的 ROS/SDK 请求被服务端取消。会话会给正在运行的控制操作留出正常期限和异常清理时间；若最终清理仍超时或失败，按设备规程采取物理急停等安全处置。之后检查日志、连接、使能和物理状态，不要盲目重试或继续遥操作。
- `control status` 的 `success=true` 只说明查询成功，需读取 `active` / `forwarding`；这两项也不证明真实手位置、安全状态或回零到位。

### 故障排查

| 现象 | 处理 |
| --- | --- |
| `libManusSDK_Integrated.so` 无法加载 / 文件过小 | 执行 `git lfs pull`、`git lfs ls-files`，确认下载的是二进制而非 LFS 指针；检查 LFS 权限/配额 |
| 原版扩展或动态库缺失 | 核对 Ubuntu 22.04 x86_64、Python 3.10 native、完整 vendor；先恢复仓库/LFS，缺失镜像发布物再 bootstrap |
| 提示后端未构建 | 执行 `pixi run -e native build-backend`，不要复制其他路径中的 `install/` |
| 找不到服务 / 等待超时 | 确认 backend 和 teleop 启动、同 domain / RMW，查看 `pixi run -e native ros2 service list -t`；排除同 domain 的重复进程 |
| 连接失败、左右手不匹配 | 检查 IP、网卡路由、供电、设备侧别；先使用低层只读诊断，不绕过侧别校验 |
| MANUS 无匹配手套数据 | 检查接收器、USB 权限、配对和左右手；确认标定对应当前穿戴者与手套 |
| 回零超时 / 反馈缺失 | 禁止继续启动，检查急停、使能、机械卡阻、反馈和日志；服务成功不等于到位，不能用 `--simulation` 跳过 |
| 服务成功但手不动 | 区分查询成功、转发状态和真实反馈；检查订阅者、IP、domain、急停与使能，使用完整 `control start` 而非补一条低层 enable |
| viewer 无法打开 | 确认图形会话/OpenGL；一键使用 `--no-viewer`，手动设置 `ENABLE_VIEWER=false` |
| 延迟或停顿 | 检查 CPU/图形负载和关节话题频率；不要把高频输出本身当作安全或实时性保证 |

只读话题诊断示例：

```bash
pixi run -e native ros2 topic hz /rysen/apexhand/ip_192_168_0_102/move_j_position_follow_command
pixi run -e native ros2 topic echo /rysen/apexhand/ip_192_168_0_102/move_j_position_follow_command
```

搬迁时携带完整 Git/LFS 内容，在新位置重新 `pixi install --locked -e native`、`build-backend`、`smoke`；不要搬运包含绝对路径的 `.pixi/`、`build/`、根目录 `install/`。个人标定应单独安全迁移，不放进 GitHub。

