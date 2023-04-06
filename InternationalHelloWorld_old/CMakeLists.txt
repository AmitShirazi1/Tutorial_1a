cmake_minimum_required(VERSION 3.22)
project(InternationalHelloWorld C)

set(CMAKE_C_STANDARD 99)

add_executable(InternationalHelloWorld international-hello-world.c international-hello-world.h)
