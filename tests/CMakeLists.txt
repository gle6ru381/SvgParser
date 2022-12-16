include(CompileOptions)
set(target_name context)

add_executable(${target_name} context.cpp)
target_link_libraries(${target_name} parser)
target_include_directories(${target_name} PRIVATE ${CMAKE_SOURCE_DIR}/src)
