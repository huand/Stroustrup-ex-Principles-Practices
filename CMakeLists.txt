cmake_minimum_required (VERSION 3.0)

set(CXXFLAGS = -std=c++17 -Wconversion -Wall -Werror -Wextra -pedantic)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
file( GLOB SRC_CH_03 Chapters/Ch3/*.cc )
file( GLOB SRC_CH_04 Chapters/Ch4/*.cc )
file( GLOB SRC_CH_05 Chapters/Ch5/*.cc )
add_library(strstrlib
${SRC_CH_03}
${SRC_CH_04}
${SRC_CH_05}
)
project (Stroustrup-exs)
include_directories (
    "${PROJECT_SOURCE_DIR}/include"
    "${PROJECT_SOURCE_DIR}/include/Chapt_headers"
    )
add_executable(strstr main.cc)
target_link_libraries(strstr strstrlib)