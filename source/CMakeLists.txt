# Build example
add_executable(example
  window.cpp
  glew.c
  example.cpp)
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES})
add_dependencies(example glfw nanovg ${COPY_BINARY})

# Build tests
add_executable(tests
  vec2.cpp
  mat2.cpp
  circle.cpp
  rectangle.cpp
  glew.c
  window.cpp
  tests.cpp)
target_link_libraries(tests
  glfw
${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES})
add_dependencies(example glfw nanovg ${COPY_BINARY})
