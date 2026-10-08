cmake_minimum_required(VERSION 3.16)
project(rysen_apexhand VERSION 1.5.2 LANGUAGES C CXX)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

get_filename_component(APEX_TELEOP_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../.." ABSOLUTE)
set(SDK_DIR "${APEX_TELEOP_ROOT}/vendor/apex-sdk")
set(SDK_INCLUDE_DIR "${SDK_DIR}/include")
set(SDK_LIB_DIR "${SDK_DIR}/lib")
set(SYSTEM_LIB_DIR "${APEX_TELEOP_ROOT}/vendor/system/lib")

if(NOT CMAKE_SYSTEM_PROCESSOR MATCHES "^(x86_64|amd64|AMD64)$")
  message(FATAL_ERROR "The vendored ApexHand SDK supports amd64 only")
endif()
if(NOT EXISTS "${SDK_INCLUDE_DIR}/rysen_apexhand_sdk.hpp" OR
   NOT EXISTS "${SDK_LIB_DIR}/librysen_sdk.so.1.5.2")
  message(FATAL_ERROR "ApexHand SDK is missing from ${SDK_DIR}")
endif()

# Prefer the project's original ROS distribution and its existing message package.
list(PREPEND CMAKE_PREFIX_PATH
  "${APEX_TELEOP_ROOT}/vendor/install"
  "${APEX_TELEOP_ROOT}/vendor/ros"
)
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rysen_apexhand_msgs REQUIRED)
find_package(fmt REQUIRED CONFIG)
find_package(Python3 REQUIRED COMPONENTS Interpreter Development NumPy)

# 原消息包导出了镜像内的 Python/NumPy 路径；只改本次构建的导入目标。
get_property(ROS_IMPORTED_TARGETS DIRECTORY PROPERTY IMPORTED_TARGETS)
foreach(imported_target IN LISTS ROS_IMPORTED_TARGETS)
  foreach(property INTERFACE_INCLUDE_DIRECTORIES INTERFACE_LINK_LIBRARIES)
    get_target_property(exported_paths "${imported_target}" "${property}")
    if(exported_paths)
      string(REPLACE "/usr/local/lib/python3.10/dist-packages/numpy/_core/include"
        "${Python3_NumPy_INCLUDE_DIRS}" exported_paths "${exported_paths}")
      string(REPLACE "/usr/lib/x86_64-linux-gnu/libpython3.10.so"
        "${SYSTEM_LIB_DIR}/libpython3.10.so.1.0" exported_paths "${exported_paths}")
      set_property(TARGET "${imported_target}" PROPERTY "${property}" "${exported_paths}")
    endif()
  endforeach()
endforeach()

# Pixi 提供同版本开发头文件，链接仍使用原版 ROS/SDK 的共享库，避免混装两份 ABI。
set_target_properties(spdlog::spdlog PROPERTIES
  IMPORTED_LOCATION "${SYSTEM_LIB_DIR}/libspdlog.so.1"
  IMPORTED_LOCATION_RELEASE "${SYSTEM_LIB_DIR}/libspdlog.so.1"
)
set_target_properties(fmt::fmt PROPERTIES
  IMPORTED_LOCATION "${SYSTEM_LIB_DIR}/libfmt.so.8"
  IMPORTED_LOCATION_RELEASE "${SYSTEM_LIB_DIR}/libfmt.so.8"
)

# The original ROS export embeds a host-only tinyxml2 path. Relocate the imported
# target in memory; never modify the original vendor/ros CMake files.
if(TARGET fastrtps)
  get_target_property(FASTDDS_LINK_LIBRARIES fastrtps INTERFACE_LINK_LIBRARIES)
  list(TRANSFORM FASTDDS_LINK_LIBRARIES REPLACE
    "^/usr/lib/x86_64-linux-gnu/libtinyxml2\\.so$"
    "${SYSTEM_LIB_DIR}/libtinyxml2.so.9"
  )
  set_property(TARGET fastrtps PROPERTY
    INTERFACE_LINK_LIBRARIES "${FASTDDS_LINK_LIBRARIES}")
endif()

add_library(rysen_sdk SHARED IMPORTED)
set_target_properties(rysen_sdk PROPERTIES
  IMPORTED_LOCATION "${SDK_LIB_DIR}/librysen_sdk.so.1.5.2"
  IMPORTED_SONAME "librysen_sdk.so.1"
)

add_library(${PROJECT_NAME}_node SHARED src/rysen_apexhand_node.cpp)
target_include_directories(${PROJECT_NAME}_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<BUILD_INTERFACE:${SDK_INCLUDE_DIR}>
  $<INSTALL_INTERFACE:include>
)
ament_target_dependencies(${PROJECT_NAME}_node
  rclcpp std_msgs sensor_msgs geometry_msgs builtin_interfaces rysen_apexhand_msgs
)
target_link_libraries(${PROJECT_NAME}_node rysen_sdk)
set_target_properties(${PROJECT_NAME}_node PROPERTIES
  BUILD_RPATH "${SDK_LIB_DIR};${SYSTEM_LIB_DIR}"
  INSTALL_RPATH "$ORIGIN/../../vendor/apex-sdk/lib;$ORIGIN/../../vendor/system/lib"
)

add_executable(${PROJECT_NAME}_node_exe src/rysen_apexhand_main.cpp)
ament_target_dependencies(${PROJECT_NAME}_node_exe rclcpp)
target_link_libraries(${PROJECT_NAME}_node_exe ${PROJECT_NAME}_node rysen_sdk)
set_target_properties(${PROJECT_NAME}_node_exe PROPERTIES
  BUILD_RPATH "${SDK_LIB_DIR};${SYSTEM_LIB_DIR}"
  INSTALL_RPATH "$ORIGIN/..;$ORIGIN/../../../vendor/apex-sdk/lib;$ORIGIN/../../../vendor/system/lib"
)

# Resolve the SDK's indirect dependencies without host /usr/lib development links.
foreach(target ${PROJECT_NAME}_node ${PROJECT_NAME}_node_exe)
  target_link_options(${target} PRIVATE
    "LINKER:-rpath-link,${SDK_LIB_DIR}"
    "LINKER:-rpath-link,${SYSTEM_LIB_DIR}"
    "LINKER:-rpath-link,${APEX_TELEOP_ROOT}/vendor/ros/lib"
    "LINKER:-rpath-link,${APEX_TELEOP_ROOT}/vendor/install/lib"
  )
endforeach()

# Deliberately do not build or install the motion-producing example executable.
install(TARGETS ${PROJECT_NAME}_node ${PROJECT_NAME}_node_exe
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)
install(DIRECTORY launch/ DESTINATION share/${PROJECT_NAME}/launch)
install(DIRECTORY include/ DESTINATION include)
install(DIRECTORY "${SDK_INCLUDE_DIR}/" DESTINATION include
  FILES_MATCHING PATTERN "*.hpp" PATTERN "*.h")
install(FILES LICENSE DESTINATION share/${PROJECT_NAME})

ament_export_include_directories(include)
ament_export_libraries(${PROJECT_NAME}_node)
ament_export_dependencies(
  rclcpp std_msgs sensor_msgs geometry_msgs builtin_interfaces rysen_apexhand_msgs
)
ament_package()
