"""Add the simulation and control configuration used by the current hand."""

from __future__ import annotations

import copy
from pathlib import Path
import xml.etree.ElementTree as ET


ROOT = Path(__file__).resolve().parent.parent
INPUT_XML = ROOT / "apex_hand_right.xml"
OUTPUT_XML = ROOT / "scene_right.xml"
FINGERS = {"thumb": 5, "index": 4, "middle": 4, "ring": 4, "pinky": 4}


def link_name(finger: str, index: int) -> str:
    return f"right_{finger}_link{index}"


def add_contact_exclusions(root: ET.Element) -> None:
    contact = ET.SubElement(root, "contact")
    for finger, link_count in FINGERS.items():
        links = [link_name(finger, i) for i in range(link_count)]
        palm_exclusion_count = 3 if finger == "thumb" else 2
        for link in links[:palm_exclusion_count]:
            ET.SubElement(contact, "exclude", body1="right_palm_link", body2=link)
        for body1, body2 in zip(links, links[1:]):
            ET.SubElement(contact, "exclude", body1=body1, body2=body2)


def add_couplings(root: ET.Element) -> None:
    equality = ET.SubElement(root, "equality")
    for joint1, joint2 in (
        ("right_thumb_j4", "right_thumb_j3"),
        ("right_index_j3", "right_index_j2"),
        ("right_middle_j3", "right_middle_j2"),
        ("right_ring_j3", "right_ring_j2"),
        ("right_pinky_j3", "right_pinky_j2"),
    ):
        ET.SubElement(equality, "joint", joint1=joint1, joint2=joint2, polycoef="0 1 0 0 0")


def add_actuators_and_sensors(root: ET.Element, joints: dict[str, ET.Element]) -> None:
    actuator = ET.SubElement(root, "actuator")
    sensor = ET.SubElement(root, "sensor")
    driven = [
        "right_thumb_j0", "right_thumb_j1", "right_thumb_j2", "right_thumb_j3",
        "right_index_j0", "right_index_j1", "right_index_j2",
        "right_middle_j0", "right_middle_j1", "right_middle_j2",
        "right_ring_j0", "right_ring_j1", "right_ring_j2",
        "right_pinky_j0", "right_pinky_j1", "right_pinky_j2",
    ]
    missing = [name for name in driven if name not in joints]
    if missing:
        raise RuntimeError(f"Missing expected driven joints: {missing}")
    for joint_name in driven:
        short_name = joint_name.removeprefix("right_")
        actuator_name = f"act_right_{short_name}"
        ET.SubElement(
            actuator,
            "position",
            name=actuator_name,
            joint=joint_name,
            kp="10",
            kv="0.3",
            ctrlrange=joints[joint_name].get("range", "-1 1"),
            forcerange="-10 10",
        )
        ET.SubElement(sensor, "actuatorfrc", name=f"torque_{short_name}", actuator=actuator_name)


def build_scene() -> None:
    tree = ET.parse(INPUT_XML)
    root = tree.getroot()
    root.set("model", "right_apex_hand")

    compiler = root.find("compiler")
    insert_at = list(root).index(compiler) + 1 if compiler is not None else 0
    default = ET.Element("default")
    ET.SubElement(default, "geom", contype="1", conaffinity="1")
    ET.SubElement(default, "joint", armature="0.001", damping="0.05")
    root.insert(insert_at, default)
    option = ET.Element("option", gravity="0 0 0", timestep="0.0005")
    ET.SubElement(option, "flag", constraint="enable", contact="enable")
    root.insert(insert_at + 1, option)

    asset = root.find("asset")
    if asset is None:
        raise RuntimeError("Converted MJCF has no asset section")
    asset.insert(0, ET.Element("material", name="matplane", reflectance="0.3", texture="texplane", texrepeat="1 1", texuniform="true"))
    asset.insert(0, ET.Element("texture", name="texplane", type="2d", builtin="checker", rgb1=".2 .3 .4", rgb2=".1 .15 .2", width="512", height="512", mark="cross", markrgb=".8 .8 .8"))
    asset.insert(0, ET.Element("texture", type="skybox", builtin="gradient", rgb1=".3 .5 .7", rgb2="0 0 0", width="512", height="512"))

    worldbody = root.find("worldbody")
    if worldbody is None:
        raise RuntimeError("Converted MJCF has no worldbody")
    raw_children = [copy.deepcopy(child) for child in list(worldbody)]
    worldbody.clear()
    ET.SubElement(worldbody, "light", pos="0 0 3", dir="0 0 -1", diffuse="1 1 1", directional="true")
    ET.SubElement(worldbody, "geom", name="floor", type="plane", size="0 0 1", material="matplane")
    palm = ET.SubElement(worldbody, "body", name="right_palm_link", pos="0 0 0.5")
    for child in raw_children:
        palm.append(child)

    joints = {node.get("name"): node for node in root.iter("joint") if node.get("name")}
    add_contact_exclusions(root)
    add_couplings(root)
    add_actuators_and_sensors(root, joints)
    ET.indent(tree, space="  ")
    tree.write(OUTPUT_XML, encoding="unicode")
    print(f"Generated {OUTPUT_XML.relative_to(ROOT)}")


if __name__ == "__main__":
    build_scene()
