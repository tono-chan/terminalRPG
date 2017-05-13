cmake_minimum_required(VERSION 2.8)

add_library(window STATIC
        WindowController.cpp
        Window.cpp
        StartWindow.cpp
        )
target_link_libraries(window
        ncursesw
        battle
        )