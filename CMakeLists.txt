cmake_minimum_required(VERSION 3.5)

project(SvgParser LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)

add_subdirectory(external)
add_subdirectory(src)
add_subdirectory(tests)
