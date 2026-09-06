add_executable(calculator-tests
    tests.cpp
)

target_link_libraries(calculator-tests
    PRIVATE
        GTest::gtest_main
        lib
)

include(GoogleTest)

gtest_discover_tests(calculator-tests)