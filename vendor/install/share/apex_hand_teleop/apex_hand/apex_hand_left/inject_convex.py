import re

def update_mujoco_xml(input_xml, output_xml):
    with open(input_xml, 'r', encoding='utf-8') as f:
        content = f.read()

    # 1. 自动注册 <asset> 中的凸分解碎片
    # 匹配原始 mesh 定义并追加新的 cvx mesh
    def asset_repl(match):
        orig_line = match.group(0)
        mesh_name = match.group(1)
        # 添加新的凸分解网格路径 (Group 3 使用)
        cvx_line = f'\n    <mesh name="{mesh_name}_cvx" file="apex_hand_left/convex/{mesh_name}_hull_0.STL"/>'
        return orig_line + cvx_line
    
    # 正则查找 <mesh name="xxx" content_type="model/stl" file="..."/>
    asset_pattern = re.compile(r'<mesh name="([^"]+)" content_type="model/stl" file="apex_hand_left/meshes/[^"]+\.[sS][tT][lL]"\s*/>')
    content = asset_pattern.sub(asset_repl, content)

    # 2. 自动更新 <worldbody> 中的 <geom> 标签
    def geom_repl(match):
        full_geom = match.group(0)
        
        # 避免重复处理
        if 'contype="0"' in full_geom: 
            return full_geom 
        
        mesh_name = match.group(1)
        
        # 将原始 geom 转变为纯视觉体 (关闭物理，归入 group 1)
        visual_geom = full_geom.replace('/>', ' contype="0" conaffinity="0" group="1"/>')
        
        # 提取可能存在的位姿偏移，让碰撞体继承这些参数
        pos_match = re.search(r'pos="([^"]+)"', full_geom)
        quat_match = re.search(r'quat="([^"]+)"', full_geom)
        
        pos_attr = f'pos="{pos_match.group(1)}" ' if pos_match else ''
        quat_attr = f'quat="{quat_match.group(1)}" ' if quat_match else ''
        
        # 创建新的碰撞体 geom (启用物理，归入 group 3，设为半透明红色方便调试)
        collision_geom = f'\n              <geom {pos_attr}{quat_attr}type="mesh" mesh="{mesh_name}_cvx" group="3" rgba="1 0.2 0.2 0.2"/>'
        
        return visual_geom + collision_geom

    # 正则查找带有 mesh="xxx" 属性的 geom
    geom_pattern = re.compile(r'<geom [^>]*mesh="([^"]+)"[^>]*/>')
    content = geom_pattern.sub(geom_repl, content)

    # 保存新的模型文件
    with open(output_xml, 'w', encoding='utf-8') as f:
        f.write(content)
    print(f"✅ 转换完成！新文件已保存为: {output_xml}")

if __name__ == "__main__":
    # 请确保 scene.xml 在同一目录下
    update_mujoco_xml("../scene.xml", "../scene_convex.xml")