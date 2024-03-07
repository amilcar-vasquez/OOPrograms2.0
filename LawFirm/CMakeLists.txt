cmake_minimum_required(VERSION 3.5)

project(LawFirm LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LawFirm main.cpp
    employee.h employee.cpp
    janitor.h janitor.cpp
    lawyer.h lawyer.cpp
    secretary.h secretary.cpp)

include(GNUInstallDirs)
install(TARGETS LawFirm
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
