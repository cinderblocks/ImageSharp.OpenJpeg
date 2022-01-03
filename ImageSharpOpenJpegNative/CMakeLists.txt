# -*- cmake -*-

project(ImageSharpOpenJpeg LANGUAGES C)

include(CPack)
include(ExternalProject)
include(GenerateExportHeader)

set(VERSION_MAJOR 2)
set(VERSION_MINOR 4)
set(VERSION_PATCH 0)
set(VERSION_DATE 20210725)

# Only GCC requires -fPIC
if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
endif()

# set architecture
if (NOT ${CMAKE_GENERATOR} MATCHES "Visual Studio")
	if ("${TARGET_ARCH}" STREQUAL "x86")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m32")
    elseif ("${TARGET_ARCH}" STREQUAL "x64")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m64")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m64")
    endif()
endif()

if(WIN32)
    add_compile_definitions(_WIN32 WIN32_LEAN_AND_MEAN)
endif(WIN32)

if(MSVC)
    add_compile_definitions(_MSVC _CRT_SECURE_NO_WARNINGS)
  	# C4819: The file contains a character that cannot be represented in the current code page
	# C4503: identifier' : decorated name length exceeded, name was truncated
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd4819 /wd4503 /bigobj")

	# C4146: unary minus operator applied to unsigned type, result still unsigned
	if ("${CMAKE_SYSTEM_NAME}" STREQUAL "WindowsStore")
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd4146 /wd4996 /ZW /EHsc")
	endif()
	#set parallel build
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
endif(MSVC)

# Collect our source files
set(SOURCE_FILES
    src/stdlib.c
    #src/extensions.c
    #src/openjpeg.c
    #src/opj_decompress.c
    )

set(HEADER_FILES
    src/shared.h
    src/stdlib.h
    #src/extensions.h
    #src/openjpeg.codec.compression.h
    #src/openjpeg.codec.decompression.h
    #src/openjpeg.constant.h
    #src/openjpeg.h
    #src/openjpeg.image.h
    #src/openjpeg.mct.h
    #src/openjpeg.stream.h
    #src/openjpeg.thread.h
    #src/opj_decompress.h
    )

list(APPEND SOURCE_FILES ${HEADER_FILES})
set_source_files_properties(${HEADER_FILES} PROPERTIES HEADER_FILE_ONLY TRUE)

add_library(ImageSharpOpenJpeg SHARED ${SOURCE_FILES})

target_include_directories(ImageSharpOpenJpeg
	PUBLIC
		$<INSTALL_INTERFACE:include>
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/exports>
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/src)

generate_export_header(ImageSharpOpenJpeg
                       EXPORT_FILE_NAME ${CMAKE_BINARY_DIR}/exports/ImageSharpOpenJpeg_Exports.h)

ExternalProject_Add(external_openjpeg
	GIT_REPOSITORY https://github.com/uclouvain/openjpeg
    GIT_TAG "v2.4.0"
    GIT_SUBMODULES_RECURSE ON
	PREFIX ${BUILD_DIR}/openjpeg)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
