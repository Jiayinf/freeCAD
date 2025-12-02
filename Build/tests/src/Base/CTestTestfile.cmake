# CMake generated Testfile for 
# Source directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Base
# Build directory: D:/Project/FreeCAD-1.0.2-ori/Build/tests/src/Base
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(InventorBuilder_Tests_run "D:/Project/FreeCAD-1.0.2-ori/Build/tests/src/Base/Debug/InventorBuilder_Tests_run.exe")
  set_tests_properties(InventorBuilder_Tests_run PROPERTIES  _BACKTRACE_TRIPLES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/CMakeLists.txt;62;add_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Base/CMakeLists.txt;30;setup_qt_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Base/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(InventorBuilder_Tests_run "D:/Project/FreeCAD-1.0.2-ori/Build/tests/src/Base/Release/InventorBuilder_Tests_run.exe")
  set_tests_properties(InventorBuilder_Tests_run PROPERTIES  _BACKTRACE_TRIPLES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/CMakeLists.txt;62;add_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Base/CMakeLists.txt;30;setup_qt_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Base/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(InventorBuilder_Tests_run "D:/Project/FreeCAD-1.0.2-ori/Build/tests/src/Base/MinSizeRel/InventorBuilder_Tests_run.exe")
  set_tests_properties(InventorBuilder_Tests_run PROPERTIES  _BACKTRACE_TRIPLES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/CMakeLists.txt;62;add_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Base/CMakeLists.txt;30;setup_qt_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Base/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(InventorBuilder_Tests_run "D:/Project/FreeCAD-1.0.2-ori/Build/tests/src/Base/RelWithDebInfo/InventorBuilder_Tests_run.exe")
  set_tests_properties(InventorBuilder_Tests_run PROPERTIES  _BACKTRACE_TRIPLES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/CMakeLists.txt;62;add_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Base/CMakeLists.txt;30;setup_qt_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Base/CMakeLists.txt;0;")
else()
  add_test(InventorBuilder_Tests_run NOT_AVAILABLE)
endif()
