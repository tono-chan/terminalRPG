cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")

add_subdirectory(util)
add_subdirectory(chara)
add_subdirectory(battle)
add_subdirectory(window)
add_subdirectory(map)
add_subdirectory(manager)
add_subdirectory(command)