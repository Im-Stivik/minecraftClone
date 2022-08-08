cmake_minimum_required(VERSION 3.23)
project(minecraftClone)

set(CMAKE_CXX_STANDARD 14)

add_executable(minecraftClone main.cpp glad.c)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

target_link_libraries(minecraftClone -lglfw3 -ldl -lm -lGL -lGLU -lX11)