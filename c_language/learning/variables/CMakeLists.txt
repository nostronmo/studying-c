cmake_minimum_required(VERSION 3.0)

project(variables_project LANGUAGES C)

add_executable(variables variables.c)
add_executable(variables01 variables01.c)
add_executable(variables02 variables02.c)
add_executable(variables03 variables03.c)
add_executable(variables04 variables04.c)

install(TARGETS
    variables
    variables01
    variables02
    variables03
    variables04
    RUNTIME DESTINATION bin
)
