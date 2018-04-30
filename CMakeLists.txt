cmake_minimum_required(VERSION 3.8.2)
project(AES)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c AES.h AES.c Utils.c Utils.h)
add_executable(AES ${SOURCE_FILES})