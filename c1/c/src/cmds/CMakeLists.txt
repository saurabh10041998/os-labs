add_library(
  ${LIBRARY_NAME}
  STATIC
  ls.c
)

target_include_directories(
  ${LIBRARY_NAME}
  PUBLIC
  "./"
)
