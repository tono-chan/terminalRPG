cmake_minimum_required(VERSION 2.8)

add_executable(player-test main.cpp)
target_link_libraries(player-test
        gtest
        gtest_main
        pthread
        util
        chara
        )
add_test(
        NAME player
        COMMAND $<TARGET_FILE:player-test>
)

# run with: ctest -L lib
set_property(
        TEST player
        PROPERTY LABELS lib player
)
