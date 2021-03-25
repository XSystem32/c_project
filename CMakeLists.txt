cmake_minimum_required(VERSION 3.17)
project(TestProject C)

set(CMAKE_C_STANDARD 99)

add_executable(main main.c)
add_executable(readS readS.c)
add_executable(primeNumber primeNumber.c)