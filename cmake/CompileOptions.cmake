function(set_compile_options target_name)
    string(TOLOWER ${CMAKE_BUILD_TYPE} build_type)
    if (${build_type} STREQUAL release)
        target_compile_options(${target_name} PRIVATE -O2)
    else()
        target_compile_options(${target_name} PRIVATE -g2 -Wall -Wextra -pedantic -O0)
    endif()
endfunction()
