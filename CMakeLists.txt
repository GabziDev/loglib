cmake_minimum_required(VERSION 3.28)
project(loglib C)

set(CMAKE_C_STANDARD 11)

add_library(loglib SHARED
        src/log.c
        src/file.c
        src/rotation.c
        src/thread.c)

target_include_directories(loglib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)