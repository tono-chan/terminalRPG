cmake_minimum_required(VERSION 2.8)
add_library(map STATIC
        MapModel.cpp
        MapObject.cpp
        MapController.cpp
        )
target_link_libraries(map window
        pthread)