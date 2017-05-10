cmake_minimum_required(VERSION 2.8)
project(terminalRPG)

#set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

# include path
include_directories("./include")
add_subdirectory("./include")

# libraries
add_subdirectory(lib)

#executables
add_executable(main main.cpp)
target_link_libraries( main
    util)

# tests
if ( NOT without-test )
    enable_testing()
    include(cmake/gtest.cmake)
    add_subdirectory(test)
endif()
