cmake_minimum_required(VERSION 3.20)

project(Mathemagic)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.6 COMPONENTS graphics window system REQUIRED)

add_executable(
    Mathemagic
    src/main.cpp

    src/particle.cpp
    src/slider.cpp
    src/renderer.cpp
)

target_link_libraries(
    Mathemagic

    sfml-graphics
    sfml-window
    sfml-system
)