cmake_minimum_required(VERSION 3.5)

project(QtBasicWindow)

# 设置 Qt 的 CMake 路径
find_package(Qt6 REQUIRED COMPONENTS Widgets)

set(CMAKE_AUTOMOC ON)

# 设置源文件路径
set(SOURCES
    src/main.cpp
    src/mainwindow.cpp
)

# 设置头文件路径
set(HEADERS
    src/mainwindow.h
)
# 生成动态库
add_library(QtBasicLibrary SHARED ${SOURCES} ${HEADERS})

# 链接 Qt 库
target_link_libraries(QtBasicLibrary Qt6::Widgets)

# 设置 C++ 标准
set_target_properties(QtBasicLibrary PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
)

# 启用 Qt6 元对象编译器处理
set(CMAKE_AUTOMOC ON)

# 生成可执行文件，并链接到动态库
add_executable(QtBasicWindow src/main.cpp)
target_link_libraries(QtBasicWindow QtBasicLibrary)

# 设置目标属性
set_target_properties(QtBasicWindow PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
)
