#Cmake 最低版本号
cmake_minimum_required(VERSION 3.18)
#项目信息
project(optest)
#添加opencv库
#set(OpenCV_DIR /usr/local/opencv/lib/cmake/opencv4)
#
find_package(OpenCV REQUIRED)
#报告

message(STATUS "OpenCV library status:")
message(STATUS "    config: ${OpenCV_DIR}")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")

#添加编译目标
add_executable(optest main.cpp)

#添加lib链接
target_link_libraries(optest ${OpenCV_LIBS})
