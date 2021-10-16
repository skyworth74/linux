cmake_minimum_required(VERSION 3.10.2)
set(CSRC main.c)
set(libpath "misc/")
add_subdirectory(misc)
set(EXTRA_LIBS hap)#设置库名
include_directories(${libpath})
add_executable(hello ${CSRC})#生产可执行文件
target_link_libraries(hello ${EXTRA_LIBS})#链接库文件
target_include_directories(hello PRIVATE ${libpath})#设置头文件

