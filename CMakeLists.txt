cmake_minimum_required (VERSION 3.5.1)
project (RefactoringKata)

set (CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

include ("${CMAKE_CURRENT_SOURCE_DIR}/cmake_files/add_clang_flags.cmake")
include ("${CMAKE_CURRENT_SOURCE_DIR}/cmake_files/add_gcc_flags.cmake")

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    add_clang_flags()
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    add_gcc_flags()
endif ()

link_directories (${CMAKE_CURRENT_BINARY_DIR})

enable_testing ()

include_directories ("${CMAKE_CURRENT_SOURCE_DIR}/include"
                     "${CMAKE_CURRENT_SOURCE_DIR}/tests/include"
                     "${CMAKE_CURRENT_SOURCE_DIR}/txt_files"
                     "/usr/include")

file (GLOB HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h"
                   "${CMAKE_CURRENT_SOURCE_DIR}/tests/include/*.h")

file (GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/sources/*.cpp"
                   "${CMAKE_CURRENT_SOURCE_DIR}/tests/src/*.cpp")

file (GLOB MISC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/txt_files/*.txt")

add_executable (${PROJECT_NAME} ${SOURCES} ${HEADERS} ${MISC_FILES})
target_link_libraries (${PROJECT_NAME} gtest gtest_main)
add_test (${PROJECT_NAME} ${PROJECT_NAME})
