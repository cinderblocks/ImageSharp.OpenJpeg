# -*- cmake -*-

cmake_minimum_required(VERSION 3.19)

project(ISOJ DESCRIPTION "JP2000 codec for ImageSharp")

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_COLOR_MAKEFILE ON)

#add_subdirectory(cmake)

IF (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING
            "Build type. One of: Debug Release RelWithDebInfo" FORCE)
ENDIF(NOT CMAKE_BUILD_TYPE)

# Version info
set(VERSION_MAJOR 2)
set(VERSION_MINOR 4)
set(VERSION_PATCH 0)
set(VERSION_DATE 20220103)

add_subdirectory(ImageSharpOpenJpeg)
add_subdirectory(ImageSharpOpenJpegNative)