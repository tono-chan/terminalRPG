cmake_minimum_required(VERSION 2.8)

add_executable(msg-test main.cpp)
target_link_libraries(msg-test
        gtest
        gtest_main
        pthread
        util
        )

add_test(
        NAME msg
        COMMAND $<TARGET_FILE:msg-test>
)

# run with: ctest -L lib
set_property(
        TEST msg
        PROPERTY LABELS lib msg
)
