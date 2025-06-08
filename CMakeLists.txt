cmake_minimum_required(VERSION 3.30)
project(CLI_calculator C)

set(CMAKE_C_STANDARD 11)
# Main C CLI executable — ONLY plain C code
add_executable(CLI_calculator
        src/main.c
        calc/calculator.c
        calc/calculator.h

)
add_executable(test_calculator
        calc/test_calculator.c
        calc/calculator.c
        calc/calculator.h)

enable_testing()
add_test(NAME calculator_test COMMAND test_calculator)

# Python extension module
find_package(Python3 REQUIRED COMPONENTS Interpreter Development)
include_directories(${Python3_INCLUDE_DIRS}
        ${CMAKE_SOURCE_DIR}/calc
        ${CMAKE_SOURCE_DIR}/python_bindings)

add_library(py_calculator MODULE
        python_bindings/py_calculator.c
        calc/calculator.c
        calc/calculator.h
)
target_include_directories(py_calculator PRIVATE
        ${Python3_INCLUDE_DIRS}
        ${PROJECT_SOURCE_DIR}/calc
)
target_link_libraries(py_calculator PRIVATE Python3::Python
)

# Ensure extension has correct name (.pyd on Windows)
set_target_properties(py_calculator PROPERTIES
        PREFIX ""
        SUFFIX ".pyd"
)
