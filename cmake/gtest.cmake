cmake_minimum_required(VERSION 2.8)

# Google Test settings
include(ExternalProject)

ExternalProject_Add(
        ### Target name
        GoogleTest

        ### Path to Git repository
        GIT_REPOSITORY https://github.com/google/googletest.git
        ### Specify Tag
        GIT_TAG release-1.8.0
        ## PATH to source tree
        SOURCE_DIR ${PROJECT_BINARY_DIR}/Depends/src/gtest
        ### Path to build tree
        BINARY_DIR ${PROJECT_BINARY_DIR}/Depends/build/gtest
        PREFIX ${PROJECT_BINARY_DIR}/Depends/lib
        BUILD_COMMAND make
        INSTALL_COMMAND ""
)
ExternalProject_Get_Property(GoogleTest source_dir)
ExternalProject_Get_Property(GoogleTest binary_dir)
include_directories(${source_dir}/googletest/include)
add_library(gtest STATIC IMPORTED)
set_property(
        TARGET gtest
        PROPERTY IMPORTED_LOCATION ${binary_dir}/googlemock/gtest/libgtest.a
)
add_library(gtest_main STATIC IMPORTED)
set_property(
        TARGET gtest_main
        PROPERTY IMPORTED_LOCATION ${binary_dir}/googlemock/gtest/libgtest_main.a
)
