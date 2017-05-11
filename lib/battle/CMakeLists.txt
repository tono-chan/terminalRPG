cmake_minimum_required(VERSION 2.8)

add_library(battle STATIC
        BattleWindow.cpp)
target_link_libraries(battle
        ncursesw
        )