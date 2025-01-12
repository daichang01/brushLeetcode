# for each "src/x.cpp", generate target "x"
# file(GLOB_RECURSE all_srcs *.cpp) # 获取当前目录及其子目录下所有的.cpp文件
file(GLOB_RECURSE all_srcs CONFIGURE_DEPENDS "*.cpp")
foreach(v ${all_srcs}) # 遍历所有.cpp文件
    string(REGEX MATCH "src/.*" relative_path ${v}) # 获取.cpp文件相对于src目录的路径
    # message(${relative_path})
    string(REGEX REPLACE "src/" "" target_name ${relative_path}) # 将路径中的src/替换为空，得到目标名称
    string(REGEX REPLACE ".cpp" "" target_name ${target_name}) # 将目标名称中的.cpp替换为空，得到最终的目标名称
    # 将路径中的斜杠替换为下划线，以避免路径层次问题
    string(REPLACE "/" "_" target_name ${target_name})

    add_executable(${target_name} ${v}) # 根据目标名称和.cpp文件路径生成可执行文件
endforeach()
