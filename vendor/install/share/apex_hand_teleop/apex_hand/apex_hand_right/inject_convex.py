"""Separate visual meshes from all V-HACD collision pieces."""

from __future__ import annotations

from pathlib import Path
import re
import xml.etree.ElementTree as ET


ROOT = Path(__file__).resolve().parent.parent
HAND_DIR = Path(__file__).resolve().parent
INPUT_XML = ROOT / "scene_right.xml"
OUTPUT_XML = ROOT / "scene_right_convex.xml"


def hull_sort_key(path: Path) -> int:
    match = re.search(r"_hull_(\d+)$", path.stem)
    return int(match.group(1)) if match else -1


def update_mujoco_xml(input_xml: Path = INPUT_XML, output_xml: Path = OUTPUT_XML) -> None:
    tree = ET.parse(input_xml)
    root = tree.getroot()
    asset = root.find("asset")
    if asset is None:
        raise RuntimeError("Input MJCF has no asset section")

    visual_meshes: set[str] = set()
    collision_assets: dict[str, list[str]] = {}
    for mesh in list(asset.findall("mesh")):
        mesh_name = mesh.get("name")
        mesh_file = mesh.get("file", "")
        if not mesh_name or not mesh_file.startswith("apex_hand_right/meshes/"):
            continue
        visual_meshes.add(mesh_name)
        hulls = sorted((HAND_DIR / "convex").glob(f"{mesh_name}_hull_*.STL"), key=hull_sort_key)
        if not hulls:
            raise FileNotFoundError(f"No convex collision mesh found for {mesh_name}")

        collision_assets[mesh_name] = []
        insertion_index = list(asset).index(mesh) + 1
        for hull_index, hull in enumerate(hulls):
            collision_name = f"{mesh_name}_cvx_{hull_index}"
            collision_assets[mesh_name].append(collision_name)
            asset.insert(
                insertion_index + hull_index,
                ET.Element("mesh", name=collision_name, file=hull.relative_to(ROOT).as_posix()),
            )

    pose_attributes = ("pos", "quat", "euler", "axisangle", "xyaxes", "zaxis")
    for parent in root.iter():
        for index, geom in reversed(list(enumerate(list(parent)))):
            mesh_name = geom.get("mesh") if geom.tag == "geom" else None
            if mesh_name not in visual_meshes:
                continue
            geom.set("contype", "0")
            geom.set("conaffinity", "0")
            geom.set("group", "1")
            for offset, collision_name in enumerate(collision_assets[mesh_name], start=1):
                collision = ET.Element("geom", type="mesh", mesh=collision_name, group="3", rgba="1 0.2 0.2 0.2")
                for attribute in pose_attributes:
                    if attribute in geom.attrib:
                        collision.set(attribute, geom.attrib[attribute])
                parent.insert(index + offset, collision)

    ET.indent(tree, space="  ")
    tree.write(output_xml, encoding="unicode")
    print(
        f"Generated {output_xml.relative_to(ROOT)} with "
        f"{sum(map(len, collision_assets.values()))} convex mesh assets"
    )


if __name__ == "__main__":
    update_mujoco_xml()
