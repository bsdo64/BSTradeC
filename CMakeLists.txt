cmake_minimum_required(VERSION 3.11)
project(BSTradeC)

set(CMAKE_PREFIX_PATH "/Users/bsdo/Qt/5.11.1/clang_64")
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

add_subdirectory(src)
