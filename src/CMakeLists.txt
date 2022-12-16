include(CompileOptions)
include(FindPkgConfig)
set(target_name parser)

add_library(${target_name} context.cpp context.h Primitives/abstractprimitive.cpp Primitives/abstractprimitive.h)
target_include_directories(${target_name} PRIVATE ${CMAKE_SOURCE_DIR}/external/pugixml/src)
target_link_libraries(${target_name} pugixml)

set_compile_options(${target_name})
