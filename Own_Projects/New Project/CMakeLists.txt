cmake_minimum_required(VERSION 3.17)

project(Example C)

set(SOURCE 
   
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Example.c
    
)

set(TARGET_NAME Example.elf)

add_executable(${TARGET_NAME} ${SOURCE})

include(${CMAKE_CURRENT_SOURCE_DIR}/../RVfpga_Basys3/common/Common.cmake)


