cmake_minimum_required(VERSION 3.23)
project(CHIP8)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(CHIP8 main.cpp src/Memory.cpp Memory.h src/Window.cpp Window.h src/Surface.cpp Surface.h Drawable.h)
target_link_libraries(CHIP8 sfml-graphics)
