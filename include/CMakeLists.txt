cmake_minimum_required(VERSION 2.8)

FILE(GLOB INCLUDES_SRC *.h)
add_custom_target(includes SOURCES ${INCLUDES_SRC})