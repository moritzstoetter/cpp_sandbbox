cmake_minimum_required(VERSION 3.27)

project(app)
set(CMAKE_CXX_STANDARD 17)

set(BUILD_GMOCK YES)
add_subdirectory(gtest)

add_executable(app main.cpp)

target_link_libraries(app gtest)
target_link_libraries(app gmock)

# gcc

target_compile_options(app PRIVATE
        -Wall
        -Werror
        -Wcast-align
        -Wconversion
        -Wdouble-promotion
        -Wextra
        -Wformat=2
        -Wmisleading-indentation
        -Wnon-virtual-dtor
        -Wnon-virtual-dtor
        -Wnull-dereference
        -Wold-style-cast
        -Woverloaded-virtual
        -Wpedantic
        -Wshadow
        -Wshadow
        -Wsign-conversion
        -Wunused
        -fsanitize=undefined,address
        -pedantic
)
if(GCC)
    # add more
    target_compile_options(app PRIVATE
            -Wduplicated-branches
            -Wduplicated-cond
            -Wlogical-op
            -Wuseless-cast
    )
endif ()

target_link_options(app PRIVATE
        -fsanitize=undefined,address
)