
add_subdirectory(scientific-calculator)
add_subdirectory(standard-calculator)

target_include_directories(standard-calculator
    PRIVATE  
        lib
)
target_include_directories(scientific-calculator
    PRIVATE 
        lib
)

target_link_libraries(standard-calculator
    PRIVATE 
        lib
)
target_link_libraries(scientific-calculator
    PRIVATE 
        lib
)