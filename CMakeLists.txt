cmake_minimum_required(VERSION 3.31)
project(calculator LANGUAGES CXX)
enable_testing()
find_package(GTest CONFIG REQUIRED)
set(GRAPHVIZ_CUSTOM_TARGETS TRUE)
# https://dreampuf.github.io/GraphvizOnline/

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(CMAKE_EXPORT_COMPILE_COMMANDS)
    message(STATUS "CMAKE_EXPORT_COMPILE_COMMANDS: ON")
endif()
if(GRAPHVIZ_CUSTOM_TARGETS)
    message(STATUS "GRAPHVIZ_CUSTOM_TARGETS: ON")
endif()
if(GTest_FOUND)
    message(STATUS "GoogleTest found")
endif()

add_subdirectory(src bin)