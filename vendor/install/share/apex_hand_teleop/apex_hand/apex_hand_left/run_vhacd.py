import pybullet as p
import trimesh
import os
import glob

def process_all_meshes():
    # 设定工作目录为当前脚本所在目录
    base_dir = os.path.dirname(os.path.abspath(__file__))
    output_dir = os.path.join(base_dir, "convex")
    
    # 强制指定 meshes 文件夹路径 (防止脚本路径和模型路径不一致)
    meshes_dir = os.path.join(base_dir, "meshes")
    
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)
        print(f"📁 创建输出目录: {output_dir}")

    # 获取 meshes 目录下所有的 STL 文件
    target_files = glob.glob(os.path.join(meshes_dir, "*.STL")) + glob.glob(os.path.join(meshes_dir, "*.stl"))
    target_files = list(set(target_files))
    
    if not target_files:
        print(f"⚠️ 在 {meshes_dir} 没找到 STL 文件，请检查路径！")
        return

    print(f"🔍 总共找到 {len(target_files)} 个零件，准备进行稳健版 V-HACD 处理！")

    for input_path in target_files:
        filename = os.path.basename(input_path)
        name, _ = os.path.splitext(filename)
        
        # 定义两个临时文件：一个用于输入(转码后)，一个用于输出
        temp_in_obj = os.path.join(base_dir, f"temp_in_{name}.obj")
        temp_out_obj = os.path.join(base_dir, f"temp_out_{name}.obj")
        log_path = os.path.join(base_dir, "vhacd_log.txt")
        
        print(f"\n🔨 正在处理: {filename} ...")
        
        try:
            # 【核心修复】第一步：用 trimesh 读取 STL 并安全导出为 OBJ
            original_mesh = trimesh.load(input_path, force='mesh')
            original_mesh.export(temp_in_obj)
            
            # 第二步：调用 V-HACD，喂给它 obj 文件
            p.vhacd(
                temp_in_obj, 
                temp_out_obj, 
                log_path, 
                resolution=100000,
                concavity=0.0025
            )
            
            # 检查 V-HACD 是否真的生成了输出文件
            if not os.path.exists(temp_out_obj):
                print(f"❌ V-HACD 底层计算失败，跳过 {filename}")
                continue
            
            # 第三步：读取 V-HACD 结果并分离碎片
            scene = trimesh.load(temp_out_obj, force='scene')
            
            # 兼容处理：有时 V-HACD 只输出一个单独的 mesh 而不是 scene
            if isinstance(scene, trimesh.Scene):
                for i, geom_name in enumerate(scene.geometry):
                    hull_mesh = scene.geometry[geom_name]
                    output_file = os.path.join(output_dir, f"{name}_hull_{i}.STL")
                    hull_mesh.export(output_file)
                    print(f"  -> 生成碎片: {name}_hull_{i}.STL")
            else:
                output_file = os.path.join(output_dir, f"{name}_hull_0.STL")
                scene.export(output_file)
                print(f"  -> 生成单凸包: {name}_hull_0.STL")
                
        except Exception as e:
            print(f"❌ 处理 {filename} 时发生异常: {e}")
            
        finally:
            # 清理所有临时文件
            for temp_file in [temp_in_obj, temp_out_obj, log_path]:
                if os.path.exists(temp_file):
                    os.remove(temp_file)

    print("\n✅ 批量凸分解执行完毕！请检查 convex 文件夹。")

if __name__ == "__main__":
    process_all_meshes()