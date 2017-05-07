# Build example
add_executable(example
  window.cpp
  glew.c
  example.cpp
  vec2.cpp
  mat2.cpp
  circle.cpp)
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  m)
add_dependencies(example glfw ${COPY_BINARY})

add_executable(tests
  vec2.cpp
  mat2.cpp
  circle.cpp
  window.cpp
  glew.c
  tests.cpp)
target_link_libraries(tests
  glfw
${GLFW_LIBRARIES})