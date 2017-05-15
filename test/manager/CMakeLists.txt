cmake_minimum_required(VERSION 2.8)

add_executable(manager-keybord keybord.cpp
        ../../lib/manager/KeyboardManager.cpp )
target_link_libraries(manager-keybord
        pthread
        manager
        boost_thread
        boost_system
        ncursesw
        )
