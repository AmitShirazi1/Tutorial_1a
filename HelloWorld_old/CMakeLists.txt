cmake_minimum_required(VERSION 3.22)
project(HelloWorld C)

set(CMAKE_C_STANDARD 99)

add_executable(HelloWorld hello-world.c hello-world.h)
