cmake_minimum_required(VERSION 3.5)

project(SvgParser LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(SvgParser)

install(TARGETS SvgParser
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
