cmake_minimum_required(VERSION 2.8)

set_property(GLOBAL PROPERTY USE_FOLDERS ON) 

project(xapian)

include(config_h_cmake.txt)

option(BUILD_BACKEND_CHERT_OR_GLASS "" ON)
option(BUILD_BACKEND_CHERT "" ON)
option(BUILD_BACKEND_GLASS "" ON)
option(BUILD_BACKEND_INMEMORY "" ON)
option(BUILD_BACKEND_REMOTE "" ON)

include(version_h_cmake.txt)

SET(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "" FORCE)

enable_language( CXX )
set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED on )

IF(MSVC)
IF(CMAKE_CXX_COMPILER_VERSION VERSION_LESS 19.16)
    MESSAGE(FATAL_ERROR "Visual Studio 2017 15.9.5 or later is required to build on Windows")
ELSE()
SET(MY_CMAKE_CXX_FLAGS "-W4 -WX -Zi  -DWIN32_LEAN_AND_MEAN -DNOMINMAX -D_CRT_SECURE_NO_WARNINGS -D_CRT_NONSTDC_NO_DEPRECATE -D_WINSOCK_DEPRECATED_NO_WARNINGS -std:c++17 ")

SET(MY_CMAKE_CXX_FLAGS_DEBUG "${MY_CMAKE_CXX_FLAGS} -MTd -Od")
SET(MY_CMAKE_CXX_FLAGS_RELEASE "${MY_CMAKE_CXX_FLAGS} -MT -Ox -DNDEBUG")

SET (VCPKG_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/../vcpkg/installed/x64-windows-static/include )
SET (VCPKG_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../vcpkg/installed/x64-windows-static)


ENDIF()
ELSE()
MESSAGE(FATAL_ERROR "Sorry, only Visual C++ is supported")
ENDIF()

include_directories( ${VCPKG_INCLUDE} )
link_directories(${VCPKG_BASE_DIR} )


SET(CMAKE_CXX_FLAGS_DEBUG ${MY_CMAKE_CXX_FLAGS_DEBUG} CACHE STRING "" FORCE)
SET(CMAKE_CXX_FLAGS_RELEASE ${MY_CMAKE_CXX_FLAGS_RELEASE} CACHE STRING "" FORCE)
SET(CMAKE_INCLUDE_CURRENT_DIR OFF)


include_directories( ${CMAKE_CURRENT_SOURCE_DIR}
					 ${CMAKE_CURRENT_SOURCE_DIR}/include 
					 ${CMAKE_CURRENT_SOURCE_DIR}/common 
					 ${CMAKE_CURRENT_BINARY_DIR}
					 ${CMAKE_CURRENT_BINARY_DIR}/include)

add_library(libxapian STATIC "")
add_library(libgetopt STATIC "")

set_target_properties(libgetopt PROPERTIES FOLDER "libgetopt")
set_target_properties(libxapian PROPERTIES FOLDER "libxapian")

target_sources(libxapian PRIVATE config.h)
target_sources(libxapian PRIVATE include/xapian/version.h)

# disable some level 4 warnings in source that does not include config.h
file(GLOB SPECIAL_SRC_FILES
        "${CMAKE_CURRENT_SOURCE_DIR}/languages/compiler/*.c")
set_source_files_properties(${SPECIAL_SRC_FILES} PROPERTIES COMPILE_FLAGS "-wd4244 -wd4267 -wd4456")

set(LIBRARY_DIR ${CMAKE_CURRENT_BINARY_DIR}/$<CONFIG>)

add_subdirectory(api)
add_subdirectory(bin)
add_subdirectory(backends)
add_subdirectory(common)
add_subdirectory(examples)
add_subdirectory(expand)
add_subdirectory(geospatial)
add_subdirectory(include)
add_subdirectory(languages)
add_subdirectory(matcher)
add_subdirectory(net)
add_subdirectory(queryparser)
add_subdirectory(unicode)
add_subdirectory(weight)

enable_testing()
add_subdirectory(tests)
