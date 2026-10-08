#!/usr/bin/env python3
"""从固定镜像离线提取发布物；从不启动容器或接触真实硬件。"""
from __future__ import annotations

import fcntl
import hashlib
import json
import mmap
import os
from pathlib import Path
import platform
import shutil
import struct
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
VENDOR = ROOT / "vendor"
IMAGE = "ghcr.io/rysenrobotics/rysen-retargeting@sha256:573f517aaa249278f1098517f1485e09d50123473274332d498674bdee7c418d"
SCHEMA = 1
MARKER = VENDOR / ".bootstrap-complete.json"
# glibc 必须由 Ubuntu 22.04 主机提供，不能混用容器的加载器和主机的 libc。
HOST_LIBRARIES = {
    "ld-linux-x86-64.so.2", "libc.so.6", "libm.so.6", "libpthread.so.0",
    "libdl.so.2", "librt.so.1", "libresolv.so.2", "libutil.so.1",
    "libanl.so.1", "libBrokenLocale.so.1", "libthread_db.so.1",
    "libnss_compat.so.2", "libnss_dns.so.2", "libnss_files.so.2",
    "libnss_hesiod.so.2", "libmvec.so.1", "libmemusage.so", "libpcprofile.so",
}


def docker(*args: str) -> str:
    result = subprocess.run(["docker", *args], text=True, stdout=subprocess.PIPE,
                            stderr=subprocess.PIPE)
    if result.returncode:
        raise RuntimeError(f"Docker 操作失败：docker {' '.join(args)}\n{result.stderr.strip()}")
    return result.stdout.strip()


def elf_info(path: Path) -> tuple[list[str], str | None] | None:
    """仅解析 x86_64 ELF 的动态段，不执行 ldd 或任何导入的二进制。"""
    with path.open("rb") as stream:
        if stream.read(4) != b"\x7fELF":
            return None
        with mmap.mmap(stream.fileno(), 0, access=mmap.ACCESS_READ) as data:
            if data[4:6] != b"\x02\x01" or struct.unpack_from("<H", data, 18)[0] != 62:
                raise RuntimeError(f"不支持的 ELF 架构：{path}")
            phoff = struct.unpack_from("<Q", data, 32)[0]
            phsize, phnum = struct.unpack_from("<HH", data, 54)
            segments = [struct.unpack_from("<IIQQQQQQ", data, phoff + i * phsize)
                        for i in range(phnum)]
            dynamic = next((p for p in segments if p[0] == 2), None)
            if dynamic is None:
                return [], None
            needed, soname, strtab = [], None, None
            for offset in range(dynamic[2], dynamic[2] + dynamic[5], 16):
                tag, value = struct.unpack_from("<qQ", data, offset)
                if tag == 0:
                    break
                if tag == 1:
                    needed.append(value)
                elif tag == 5:
                    strtab = value
                elif tag == 14:
                    soname = value
            if not needed and soname is None:
                return [], None
            segment = next((p for p in segments if p[0] == 1 and strtab is not None
                            and p[3] <= strtab < p[3] + p[5]), None)
            if segment is None:
                raise RuntimeError(f"ELF 动态字符串表无效：{path}")
            start = segment[2] + strtab - segment[3]

            def string(offset: int) -> str:
                end = data.find(b"\0", start + offset)
                if end < 0:
                    raise RuntimeError(f"ELF 动态字符串未终止：{path}")
                return data[start + offset:end].decode("utf-8")

            return [string(n) for n in needed], string(soname) if soname is not None else None


def image_target(path: Path, image_root: Path) -> Path:
    """将镜像绝对链接限制在暂存根目录，不跟随到宿主机 /usr/lib。"""
    seen = set()
    while path.is_symlink():
        if path in seen:
            raise RuntimeError(f"镜像包含循环符号链接：{path}")
        seen.add(path)
        target = path.readlink()
        if target.is_absolute():
            path = image_root / str(target).lstrip("/")
        else:
            path = path.parent / target
        path = Path(os.path.abspath(path))
        if not path.is_relative_to(image_root):
            raise RuntimeError(f"镜像符号链接越出暂存目录：{path}")
    return path


def merge_missing(source: Path, destination: Path) -> None:
    """仅补齐缺失内容；整个新增目录原子落盘，已有配置/校准一律保留。"""
    if destination.exists() or destination.is_symlink():
        if source.is_dir() and not source.is_symlink() and destination.is_dir():
            for child in source.iterdir():
                merge_missing(child, destination / child.name)
        return
    destination.parent.mkdir(parents=True, exist_ok=True)
    os.replace(source, destination)


def dependency_closure(system: Path) -> tuple[dict[str, Path], set[str]]:
    available: dict[str, tuple[Path, list[str]]] = {}
    queue: list[tuple[Path, list[str]]] = []
    for prefix in (VENDOR / "install", VENDOR / "ros"):
        for path in sorted(prefix.rglob("*")):
            if not path.is_file():
                continue
            info = elf_info(path)
            if info is None:
                continue
            needed, soname = info
            available[path.name] = (path, needed)
            if soname:
                available[soname] = (path, needed)
            queue.append((path, needed))
    candidates = {}
    for path in sorted(system.rglob("*"), key=lambda p: (len(p.parts), str(p))):
        if path.is_file() or path.is_symlink():
            candidates.setdefault(path.name, path)
    selected: dict[str, Path] = {}
    host = set()
    for parent, needed in queue:
        for name in needed:
            if name in HOST_LIBRARIES:
                host.add(name)
                continue
            if name in available or name in selected:
                continue
            if "/" in name or name not in candidates:
                raise RuntimeError(f"无法解析 ELF 依赖 {name}（引用者：{parent}）；未写入完成标记。")
            path = image_target(candidates[name], system.parents[2])
            if not path.is_file():
                raise RuntimeError(f"镜像依赖链接目标不存在：{name} -> {path}")
            info = elf_info(path)
            if info is None:
                raise RuntimeError(f"镜像依赖不是 ELF：{path}")
            selected[name] = path
            queue.append((path, info[0]))
    return selected, host


def copy_notices(container: str, stage: Path, selected: dict[str, Path]) -> list[str]:
    """保留导入库所属 Debian 包的 copyright，另外保留原版 ROS/产品 notices。"""
    info, docs = stage / "dpkg-info", stage / "docs"
    docker("cp", f"{container}:/var/lib/dpkg/info/.", str(info))
    docker("cp", f"{container}:/usr/share/doc/.", str(docs))
    library_names = set(selected) | {path.name for path in selected.values()}
    owners = set()
    for listing in info.glob("*.list"):
        if any(Path(line).name in library_names for line in listing.read_text().splitlines()
               if line.startswith(("/usr/lib/", "/lib/"))):
            owners.add(listing.name.removesuffix(".list").split(":")[0])
    notices = stage / "output" / "licenses"
    notices.mkdir(parents=True)
    retained = []
    for package in sorted(owners):
        source = docs / package / "copyright"
        if source.is_file():
            target = notices / package / "copyright"
            target.parent.mkdir(parents=True)
            shutil.copy2(source, target)
            retained.append(package)
        else:
            print(f"提示：镜像内未提供 {package} 的 copyright 文件。", file=sys.stderr)
    return retained


def completed() -> bool:
    try:
        record = json.loads(MARKER.read_text())
        return (record["schema"] == SCHEMA and record["image"] == IMAGE
                and bool(record["files"])
                and all((VENDOR / path).is_file() for path in record["files"]))
    except (OSError, ValueError, KeyError, TypeError):
        return False


def bootstrap() -> None:
    os_release = platform.freedesktop_os_release()
    if platform.machine() != "x86_64" or os_release.get("ID") != "ubuntu" or os_release.get("VERSION_ID") != "22.04":
        raise RuntimeError("仅支持 Ubuntu 22.04 x86_64；glibc 由主机提供。")
    VENDOR.mkdir(parents=True, exist_ok=True)
    with (VENDOR / ".bootstrap.lock").open("w") as lock:
        fcntl.flock(lock, fcntl.LOCK_EX)
        if completed():
            print("发布物已完整导入；无需 Docker，可直接使用 Pixi 原生运行任务。")
            return
        if not shutil.which("docker"):
            raise RuntimeError("首次导入需要 Docker CLI 和可访问的 Docker daemon；完成后日常运行不再需要 Docker。")
        MARKER.unlink(missing_ok=True)
        container = None
        try:
            # docker create 在本地镜像缺失时拉取固定 digest；容器永不启动。
            container = docker("create", "--platform", "linux/amd64", "--network", "none", IMAGE)
            with tempfile.TemporaryDirectory(prefix=".import-", dir=VENDOR) as temporary:
                stage = Path(temporary)
                product, ros = stage / "product", stage / "ros"
                docker("cp", f"{container}:/opt/rysen-retargeting/.", str(product))
                docker("cp", f"{container}:/opt/ros/humble/.", str(ros))
                for path in product.iterdir():
                    merge_missing(path, VENDOR / path.name)
                merge_missing(ros, VENDOR / "ros")
                # 保留镜像目录布局以安全解析绝对 /lib、/usr/lib 符号链接。
                image_root = stage / "image"
                system = image_root / "usr/lib/x86_64-linux-gnu"
                system.parent.mkdir(parents=True)
                docker("cp", f"{container}:/usr/lib/x86_64-linux-gnu/.", str(system))
                (image_root / "lib").symlink_to("usr/lib", target_is_directory=True)
                selected, host = dependency_closure(system)
                output = stage / "output"
                libraries = output / "lib"
                libraries.mkdir(parents=True)
                hashes = {}
                for name, source in sorted(selected.items()):
                    # 以 DT_NEEDED 名称解引用复制，运行时不保留任何容器绝对链接。
                    target = libraries / name
                    shutil.copy2(source, target)
                    hashes[name] = hashlib.sha256(target.read_bytes()).hexdigest()
                notices = copy_notices(container, stage, selected)
                (output / "manifest.json").write_text(json.dumps({
                    "image": IMAGE, "libraries_sha256": hashes,
                    "host_glibc": sorted(host), "copyright_packages": notices,
                }, ensure_ascii=False, indent=2) + "\n")
                destination = VENDOR / "system"
                if destination.exists():
                    os.replace(destination, stage / "previous-system")
                os.replace(output, destination)
                files = sorted(str(path.relative_to(VENDOR))
                               for prefix in (VENDOR / "install", VENDOR / "ros", destination)
                               for path in prefix.rglob("*") if path.is_file())
                record = stage / "complete.json"
                record.write_text(json.dumps({"schema": SCHEMA, "image": IMAGE,
                                               "files": files}, indent=2) + "\n")
                os.replace(record, MARKER)
                print(f"导入完成：{len(selected)} 个系统库、{len(notices)} 份版权声明；glibc 使用主机版本。")
                print("未启动容器、未安装 udev 规则；后续使用 pixi run -e native teleop。")
        finally:
            if container:
                docker("rm", container)


if __name__ == "__main__":
    try:
        bootstrap()
    except (OSError, RuntimeError, ValueError, struct.error) as error:
        print(f"导入失败：{error}", file=sys.stderr)
        sys.exit(1)
