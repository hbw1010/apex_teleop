"""Generate independent V-HACD collision pieces for every right-hand STL."""

from __future__ import annotations

import glob
from pathlib import Path
import re

import pybullet as p
import trimesh


BASE_DIR = Path(__file__).resolve().parent
MESH_DIR = BASE_DIR / "meshes"
OUTPUT_DIR = BASE_DIR / "convex"


def object_index(name: str) -> int:
    match = re.search(r"(\d+)$", name)
    return int(match.group(1)) if match else -1


def process_all_meshes() -> None:
    OUTPUT_DIR.mkdir(exist_ok=True)
    target_files = sorted(
        {Path(path) for pattern in ("*.STL", "*.stl") for path in glob.glob(str(MESH_DIR / pattern))}
    )
    if not target_files:
        raise FileNotFoundError(f"No STL files found in {MESH_DIR}")

    # Convex files are generated artifacts. Clear all previous right-hand
    # pieces so renamed/removed links from an older model cannot survive.
    stale_files = list(OUTPUT_DIR.glob("right_*_hull_*.STL"))
    for stale in stale_files:
        stale.unlink()
    if stale_files:
        print(f"Removed {len(stale_files)} stale collision mesh files")

    print(f"Found {len(target_files)} meshes; generating V-HACD collision pieces")
    failures: list[str] = []

    for index, input_path in enumerate(target_files, start=1):
        name = input_path.stem
        temp_in = BASE_DIR / f"temp_in_{name}.obj"
        temp_out = BASE_DIR / f"temp_out_{name}.obj"
        log_path = BASE_DIR / f"vhacd_{name}.log"
        print(f"[{index:02d}/{len(target_files)}] {input_path.name}")
        try:
            trimesh.load_mesh(input_path, force="mesh").export(temp_in)
            p.vhacd(
                str(temp_in),
                str(temp_out),
                str(log_path),
                resolution=100000,
                concavity=0.0025,
            )
            if not temp_out.exists():
                raise RuntimeError("V-HACD produced no output")

            # V-HACD writes each convex piece as an OBJ object. Keeping these
            # objects separate prevents MuJoCo from rebuilding one large hull.
            result = trimesh.load_scene(
                temp_out,
                split_objects=True,
                group_material=False,
            )
            geometries = [
                geometry
                for _, geometry in sorted(
                    result.geometry.items(), key=lambda item: object_index(item[0])
                )
            ]
            if not geometries:
                raise RuntimeError("V-HACD output contains no geometry")
            for piece_index, hull_mesh in enumerate(geometries):
                hull_mesh.export(OUTPUT_DIR / f"{name}_hull_{piece_index}.STL")
            print(f"  -> {len(geometries)} collision mesh file(s)")
        except Exception as exc:
            failures.append(f"{input_path.name}: {exc}")
            print(f"  !! {exc}")
        finally:
            for temp_file in (temp_in, temp_out, log_path):
                temp_file.unlink(missing_ok=True)

    if failures:
        raise RuntimeError("V-HACD failures:\n" + "\n".join(failures))
    print(f"Generated collision meshes in {OUTPUT_DIR}")


if __name__ == "__main__":
    process_all_meshes()
