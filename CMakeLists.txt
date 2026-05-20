cmake_minimum_required(VERSION 3.20)

project(tokenizer LANGUAGES CXX)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/utilities.cpp
    src/token.cpp)

target_include_directories(${PROJECT_NAME}
    PRIVATE include
)