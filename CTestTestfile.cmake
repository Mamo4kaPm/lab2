# CMake generated Testfile for 
# Source directory: H:/lab2
# Build directory: H:/lab2
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(SecondDerivativeTest "H:/lab2/Debug/lab2.exe")
  set_tests_properties(SecondDerivativeTest PROPERTIES  _BACKTRACE_TRIPLES "H:/lab2/CMakeLists.txt;24;add_test;H:/lab2/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(SecondDerivativeTest "H:/lab2/Release/lab2.exe")
  set_tests_properties(SecondDerivativeTest PROPERTIES  _BACKTRACE_TRIPLES "H:/lab2/CMakeLists.txt;24;add_test;H:/lab2/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(SecondDerivativeTest "H:/lab2/MinSizeRel/lab2.exe")
  set_tests_properties(SecondDerivativeTest PROPERTIES  _BACKTRACE_TRIPLES "H:/lab2/CMakeLists.txt;24;add_test;H:/lab2/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(SecondDerivativeTest "H:/lab2/RelWithDebInfo/lab2.exe")
  set_tests_properties(SecondDerivativeTest PROPERTIES  _BACKTRACE_TRIPLES "H:/lab2/CMakeLists.txt;24;add_test;H:/lab2/CMakeLists.txt;0;")
else()
  add_test(SecondDerivativeTest NOT_AVAILABLE)
endif()
subdirs("_deps/gtest-build")
