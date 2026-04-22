add_executable(
  ${SH_EXECUTABLE}
  sh.c
)

target_link_libraries(
  ${SH_EXECUTABLE}
  PUBLIC
  ${LIBRARY_NAME}
)
