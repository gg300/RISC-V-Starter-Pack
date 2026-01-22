cmake_minimum_required(VERSION 3.17)

project(program C)

set(SOURCE 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/program.c
)

set(TARGET_NAME program.elf)

add_executable(${TARGET_NAME} ${SOURCE})

include(${CMAKE_CURRENT_SOURCE_DIR}/../RVfpga_Basys3/common/Common.cmake)


