cmake_minimum_required(VERSION 2.8)

add_executable(battle-test main.cpp)
target_link_libraries(battle-test
        ncursesw
        util
        battle)
