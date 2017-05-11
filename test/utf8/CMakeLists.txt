cmake_minimum_required(VERSION 2.8)

add_executable(utf8-test main.cpp)
target_link_libraries(utf8-test
        gtest
        gtest_main
        pthread
        util
        )

add_test(
        NAME utf8
        COMMAND $<TARGET_FILE:utf8-test>
)

# run with: ctest -L lib
set_property(
        TEST utf8
        PROPERTY LABELS lib utf8
)
