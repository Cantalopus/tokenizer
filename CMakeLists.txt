cmake_minimum_required(VERSION 3.31)

project(calculator LANGUAGES CXX)

set(CMAKE_VERBOSE_MAKEFILE OFF)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/utilities.cpp
    src/token.cpp
    src/i_expression.cpp
    src/i_term.cpp
    src/i_primary.cpp
    src/i_power.cpp
    src/token_stream.cpp
)

target_include_directories(${PROJECT_NAME}
    PRIVATE include
)

install(TARGETS ${PROJECT_NAME})

add_executable(test
    tests/tests.cpp
    src/utilities.cpp
    src/token.cpp
    src/i_expression.cpp
    src/i_term.cpp
    src/i_primary.cpp
    src/i_power.cpp
    src/token_stream.cpp
)

target_include_directories(test PRIVATE include)