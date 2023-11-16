cmake_minimum_required(VERSION 3.11)
project(GlGallery CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(DRAW_SOURCE
    src/primitives/pyramid.cpp
    src/draw.cpp
    )

add_executable(draw.out ${DRAW_SOURCE})

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})
target_link_libraries(draw.out ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})

target_compile_options(draw.out PRIVATE -Wall)

