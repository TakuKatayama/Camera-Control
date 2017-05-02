set(OpenCV_DIR "C:/opencv-3.1.0/build/install")

include_directories(${OpenCV_INCLUDE_DIRS})
cmake_minimum_required(VERSION 2.6)
project( Sample_OpenCV_with_CMake)
find_package( OpenCV REQUIRED)
add_executable( My_Project main.cpp)
TARGET_LINK_LIBRARIES( My_Project ${OpenCV_LIBS})
