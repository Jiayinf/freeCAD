if(EXISTS "D:/Project/FreeCAD-1.0.2-ori/Build/tests/Debug/Tests_run.exe")
  if(NOT EXISTS "D:/Project/FreeCAD-1.0.2-ori/Build/tests/Tests_run[1]_tests-Debug.cmake" OR
     NOT "D:/Project/FreeCAD-1.0.2-ori/Build/tests/Tests_run[1]_tests-Debug.cmake" IS_NEWER_THAN "D:/Project/FreeCAD-1.0.2-ori/Build/tests/Debug/Tests_run.exe" OR
     NOT "D:/Project/FreeCAD-1.0.2-ori/Build/tests/Tests_run[1]_tests-Debug.cmake" IS_NEWER_THAN "${CMAKE_CURRENT_LIST_FILE}")
    include("D:/Program Files/CMake/share/cmake-3.31/Modules/GoogleTestAddTests.cmake")
    gtest_discover_tests_impl(
      TEST_EXECUTABLE [==[D:/Project/FreeCAD-1.0.2-ori/Build/tests/Debug/Tests_run.exe]==]
      TEST_EXECUTOR [==[]==]
      TEST_WORKING_DIR [==[D:/Project/FreeCAD-1.0.2-ori/Build/tests]==]
      TEST_EXTRA_ARGS [==[]==]
      TEST_PROPERTIES [==[]==]
      TEST_PREFIX [==[]==]
      TEST_SUFFIX [==[]==]
      TEST_FILTER [==[]==]
      NO_PRETTY_TYPES [==[FALSE]==]
      NO_PRETTY_VALUES [==[FALSE]==]
      TEST_LIST [==[Tests_run_TESTS]==]
      CTEST_FILE [==[D:/Project/FreeCAD-1.0.2-ori/Build/tests/Tests_run[1]_tests-Debug.cmake]==]
      TEST_DISCOVERY_TIMEOUT [==[5]==]
      TEST_DISCOVERY_EXTRA_ARGS [==[]==]
      TEST_XML_OUTPUT_DIR [==[]==]
    )
  endif()
  include("D:/Project/FreeCAD-1.0.2-ori/Build/tests/Tests_run[1]_tests-Debug.cmake")
else()
  add_test(Tests_run_NOT_BUILT Tests_run_NOT_BUILT)
endif()
