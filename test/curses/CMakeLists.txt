cmake_minimum_required(VERSION 2.8)

add_executable(curses-test main.cpp)
target_link_libraries(curses-test
        ncursesw
        util)

add_executable(curses-test2 anime.cpp)
target_link_libraries(curses-test2
        ncursesw
        util)

