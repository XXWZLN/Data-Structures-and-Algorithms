# 设置最低支持cmake版本
cmake_minimum_required(VERSION 3.0)
# 项目名
project(Data_Structures_and_Algorithms)
# 添加存放源文件的子目录（每个目录中需要包含CMakeLists.txt）
add_subdirectory(src/first)
add_subdirectory(src/second)
add_subdirectory(src/test)
add_subdirectory(src/LianBiao)

