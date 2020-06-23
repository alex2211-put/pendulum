cmake_minimum_required(VERSION 3.15)
project(pendulum)

set(CMAKE_CXX_STANDARD 20)

add_executable(pendulum main.cpp)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(pendulum ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
