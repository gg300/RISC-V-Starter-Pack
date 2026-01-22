cmake_minimum_required(VERSION 3.17)

project(lab ASM)

set(SOURCE 
    # ${CMAKE_CURRENT_SOURCE_DIR}/src/lab.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/lab.S
)

set(TARGET_NAME lab.elf)

add_executable(${TARGET_NAME} ${SOURCE})

include(${CMAKE_CURRENT_SOURCE_DIR}/../RVfpga_Basys3/common/Common.cmake)


