add_subdirectory(utilities)
add_subdirectory(tokenizer)
add_subdirectory(parser)

add_library(lib
    OBJECT
        parser
        tokenizer
        utilities
)

target_link_libraries(lib
    PUBLIC 
        utilities
        tokenizer
        parser
)