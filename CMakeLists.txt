cmake_minimum_required(VERSION 3.10)

project(polyGLow VERSION 1.0)

add_executable(polyGLow src/main.cpp)


set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Specify the include directory
include_directories(${CMAKE_SOURCE_DIR}/include)

# Specify the library directory
link_directories(${CMAKE_SOURCE_DIR}/lib)

set(OpenGL_GL_PREFERENCE GLVND)

# Find and link GLFW
find_package(glfw3 REQUIRED)
target_link_libraries(polyGLow glfw)

# Find and link OpenGL
find_package(OpenGL REQUIRED)
target_link_libraries(polyGLow OpenGL::GL)

