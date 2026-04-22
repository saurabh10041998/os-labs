add_library(
  ${LIBRARY_NAME}
  STATIC
  ls.c
  echo.c
)

target_include_directories(
  ${LIBRARY_NAME}
  PUBLIC
  "./"
)
