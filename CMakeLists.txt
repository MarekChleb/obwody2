cmake_minimum_required (VERSION 3.1)

set(CMAKE_C_FLAGS "-g -Wall")

add_executable(circuit circuit.c parse.c graph.c graph.h)

install(TARGETS DESTINATION .)
