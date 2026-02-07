cmake_minimum_required(VERSION 3.16)

project(Viikko5Notifikaattori LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Viikko5Notifikaattori main.cpp
    seuraaja.h seuraaja.cpp
    notifikaattori.h notifikaattori.cpp)

include(GNUInstallDirs)
install(TARGETS Viikko5Notifikaattori
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
