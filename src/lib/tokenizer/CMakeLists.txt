
add_subdirectory(src)

target_include_directories(tokenizer
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
) 