cmake_minimum_required(VERSION 2.8)

add_executable(map-test main.cpp)
target_link_libraries(map-test
        gtest
        gtest_main
        pthread
        map
        )

add_test(
        NAME map
        COMMAND $<TARGET_FILE:map-test>
)

# run with: ctest -L lib
set_property(
        TEST map
        PROPERTY LABELS lib map
)
