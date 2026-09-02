add_subdirectory(src)

target_include_directories(features
    PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
target_link_libraries(features
    PUBLIC 
        parser
        tokenizer
        utilities
)