cmake_minimum_required(VERSION 3.22)

project(
  osLabSrcTemplate
  VERSION 0.1.0
  LANGUAGES C CXX
)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_executable(
  sh
  sh.c
)
