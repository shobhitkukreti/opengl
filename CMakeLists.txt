cmake_minimum_required(VERSION 3.1)
# Project's name

project(opengl)
# Set the output folder where your program will be created

set (GLFW "/usr/local/Cellar/glfw/3.2.1/lib/cmake")
find_package(glfw3)

INCLUDE_DIRECTORIES ( /System/Library/Frameworks )
FIND_LIBRARY(COCOA_LIBRARY Cocoa)
FIND_LIBRARY(GLUT_LIBRARY GLUT )
FIND_LIBRARY(OpenGL_LIBRARY OpenGL )

MARK_AS_ADVANCED (COCOA_LIBRARY
                     GLUT_LIBRARY
                     OpenGL_LIBRARY)
SET(EXTRA_LIBS ${COCOA_LIBRARY} ${GLUT_LIBRARY} ${OpenGL_LIBRARY})

link_directories(/usr/local/Cellar/glfw/3.2.1/lib)
message(STATUS ${GLUT_LIBRARY_GLUT})
add_executable(opengl hello.c)
target_link_libraries(opengl glfw ${EXTRA_LIBS})
