cmake_minimum_required (VERSION 3.0)

set(CXXFLAGS = -std=c++17 -Wconversion -Wall -Werror -Wextra -pedantic)
file( GLOB SRC_CH_03 Chapters/Ch3/*.cc )
add_library(strstrlib
${SRC_CH_03}
)
project (Stroustrup-exs)
include_directories (
    "${PROJECT_SOURCE_DIR}/include"
    "${PROJECT_SOURCE_DIR}/include/Chapt_headers"
    )
add_executable(strstr main.cc)
target_link_libraries(strstr strstrlib)