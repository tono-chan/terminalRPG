cmake_minimum_required(VERSION 2.8)

#include(../../cmake/boost.cmake)
add_executable(boost_signal main.cpp)
target_link_libraries(boost_signal ${Boost_LIBRARIES})

add_executable(boost_signal_timer timer.cpp)
target_link_libraries(boost_signal_timer
        pthread
        boost_thread
        boost_system
        )

add_executable(boost_uniqu unique.cpp)
target_link_libraries(boost_uniqu
        pthread
        boost_thread
        boost_system
        )