add_subdirectory(features)
add_subdirectory(src)

target_include_directories(features
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
target_include_directories(parser 
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(parser
    PUBLIC 
        features
)