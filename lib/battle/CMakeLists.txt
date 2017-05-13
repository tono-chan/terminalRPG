cmake_minimum_required(VERSION 2.8)

add_library(battle STATIC
        BattleWindow.cpp
        CommandMenu.cpp
        CharaStatusWindow.cpp
        )
target_link_libraries(battle
        ncursesw
        chara
        util
        )