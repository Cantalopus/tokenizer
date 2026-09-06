add_subdirectory(utilities)
add_subdirectory(tokenizer)
add_subdirectory(parser)

add_library(lib
    INTERFACE
)

target_link_libraries(lib
    INTERFACE 
        utilities
        tokenizer
        parser
)