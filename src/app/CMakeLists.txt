
add_subdirectory(scientific-calculator)
add_subdirectory(standard-calculator)

target_include_directories(standard-calculator
    PUBLIC 
        lib
)
target_include_directories(scientific-calculator
    PUBLIC 
        lib
)

target_link_libraries(standard-calculator
    PUBLIC 
        lib
)
target_link_libraries(scientific-calculator
    PUBLIC 
        lib
)