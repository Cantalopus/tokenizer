cmake_minimum_required(VERSION 3.20)

project(tokenizer LANGUAGES CXX)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/utilities.cpp
    src/token.cpp
    src/i_expression.cpp
    src/i_term.cpp
    src/i_primary.cpp
    src/token_stream.cpp
)

target_include_directories(${PROJECT_NAME}
    PRIVATE include
)

add_executable(test
    tests/tests.cpp
    src/utilities.cpp
    src/token.cpp
    src/i_expression.cpp
    src/i_term.cpp
    src/i_primary.cpp
    src/token_stream.cpp
)

target_include_directories(test PRIVATE include)