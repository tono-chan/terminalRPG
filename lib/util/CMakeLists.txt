cmake_minimum_required(VERSION 2.8)

add_library(util STATIC
        terminal_window.cpp
        term_msg.cpp
        string_util.cpp
        east_width_asian.cpp
        )
