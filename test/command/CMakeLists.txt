cmake_minimum_required(VERSION 2.8)

add_executable(command-test main.cpp)
target_link_libraries(command-test
        gtest
        gtest_main
        pthread
        command
        )

add_test(
        NAME command
        COMMAND $<TARGET_FILE:command-test>
)

# run with: ctest -L lib
set_property(
        TEST command
        PROPERTY LABELS command
)
