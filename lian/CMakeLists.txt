# 添加头文件地址
include_directories(${CMAKE_SOURCE_DIR}/lian/include)
# 添加参加编译的源文件地址
aux_source_directory(${CMAKE_SOURCE_DIR}/lian/src SRCS)
# 设置编译完成生成的可执行文件
add_executable(lian ${SRCS})
# 设置可执行文件存放地址
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)