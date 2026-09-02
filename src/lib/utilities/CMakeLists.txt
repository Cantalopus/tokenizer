
add_subdirectory(src)

target_include_directories(utilities
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)