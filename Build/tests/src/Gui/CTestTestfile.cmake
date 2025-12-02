# CMake generated Testfile for 
# Source directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Gui
# Build directory: D:/Project/FreeCAD-1.0.2-ori/Build/tests/src/Gui
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(QuantitySpinBox_Tests_run "D:/Project/FreeCAD-1.0.2-ori/Build/tests/src/Gui/Debug/QuantitySpinBox_Tests_run.exe")
  set_tests_properties(QuantitySpinBox_Tests_run PROPERTIES  _BACKTRACE_TRIPLES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/CMakeLists.txt;62;add_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Gui/CMakeLists.txt;9;setup_qt_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Gui/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(QuantitySpinBox_Tests_run "D:/Project/FreeCAD-1.0.2-ori/Build/tests/src/Gui/Release/QuantitySpinBox_Tests_run.exe")
  set_tests_properties(QuantitySpinBox_Tests_run PROPERTIES  _BACKTRACE_TRIPLES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/CMakeLists.txt;62;add_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Gui/CMakeLists.txt;9;setup_qt_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Gui/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(QuantitySpinBox_Tests_run "D:/Project/FreeCAD-1.0.2-ori/Build/tests/src/Gui/MinSizeRel/QuantitySpinBox_Tests_run.exe")
  set_tests_properties(QuantitySpinBox_Tests_run PROPERTIES  _BACKTRACE_TRIPLES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/CMakeLists.txt;62;add_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Gui/CMakeLists.txt;9;setup_qt_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Gui/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(QuantitySpinBox_Tests_run "D:/Project/FreeCAD-1.0.2-ori/Build/tests/src/Gui/RelWithDebInfo/QuantitySpinBox_Tests_run.exe")
  set_tests_properties(QuantitySpinBox_Tests_run PROPERTIES  _BACKTRACE_TRIPLES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/CMakeLists.txt;62;add_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Gui/CMakeLists.txt;9;setup_qt_test;D:/Project/FreeCAD-1.0.2-ori/FreeCAD/tests/src/Gui/CMakeLists.txt;0;")
else()
  add_test(QuantitySpinBox_Tests_run NOT_AVAILABLE)
endif()
