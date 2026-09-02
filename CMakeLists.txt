cmake_minimum_required(VERSION 3.31)
project(calculator LANGUAGES CXX)
set(GRAPHVIZ_CUSTOM_TARGETS TRUE)
# https://dreampuf.github.io/GraphvizOnline/

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src bin)