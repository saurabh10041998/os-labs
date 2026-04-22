cmake_minimum_required(VERSION 3.22)

project(
  osLabSrcTemplate
  VERSION 0.1.0
  LANGUAGES C CXX
)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(LIBRARY_NAME cmds)
set(SH_EXECUTABLE sh)

add_subdirectory(src)
add_subdirectory(app)

