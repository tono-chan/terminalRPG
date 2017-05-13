cmake_minimum_required(VERSION 2.8)

#include(../../cmake/boost.cmake)
add_executable(boost_signal main.cpp)
target_link_libraries(boost_signal ${Boost_LIBRARIES})

