# CMake generated Testfile for 
# Source directory: C:/Users/Admin/CLionProjects/CLI_calculator
# Build directory: C:/Users/Admin/CLionProjects/CLI_calculator/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[calculator_test]=] "C:/Users/Admin/CLionProjects/CLI_calculator/build/Debug/test_calculator.exe")
  set_tests_properties([=[calculator_test]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Admin/CLionProjects/CLI_calculator/CMakeLists.txt;18;add_test;C:/Users/Admin/CLionProjects/CLI_calculator/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[calculator_test]=] "C:/Users/Admin/CLionProjects/CLI_calculator/build/Release/test_calculator.exe")
  set_tests_properties([=[calculator_test]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Admin/CLionProjects/CLI_calculator/CMakeLists.txt;18;add_test;C:/Users/Admin/CLionProjects/CLI_calculator/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[calculator_test]=] "C:/Users/Admin/CLionProjects/CLI_calculator/build/MinSizeRel/test_calculator.exe")
  set_tests_properties([=[calculator_test]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Admin/CLionProjects/CLI_calculator/CMakeLists.txt;18;add_test;C:/Users/Admin/CLionProjects/CLI_calculator/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[calculator_test]=] "C:/Users/Admin/CLionProjects/CLI_calculator/build/RelWithDebInfo/test_calculator.exe")
  set_tests_properties([=[calculator_test]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Admin/CLionProjects/CLI_calculator/CMakeLists.txt;18;add_test;C:/Users/Admin/CLionProjects/CLI_calculator/CMakeLists.txt;0;")
else()
  add_test([=[calculator_test]=] NOT_AVAILABLE)
endif()
