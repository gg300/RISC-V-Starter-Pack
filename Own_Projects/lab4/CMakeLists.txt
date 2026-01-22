cmake_minimum_required(VERSION 3.17)

project(lab C ASM)

set(SOURCE 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/lab.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/VanGogh_128.c
    # ${CMAKE_CURRENT_SOURCE_DIR}/src/TheScream_256.c /// not enough ram , DDR_0 overflowed by 137944 bytes
    ${CMAKE_CURRENT_SOURCE_DIR}/src/assemblySubroutines.S
    
)

set(TARGET_NAME lab.elf)

add_executable(${TARGET_NAME} ${SOURCE})

include(${CMAKE_CURRENT_SOURCE_DIR}/../RVfpga_Basys3/common/Common.cmake)


