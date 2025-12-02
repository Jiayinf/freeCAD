# Install script for directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/Project/FreeCAD-1.0.2-ori/Install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/TechDraw/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/TechDraw/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/Init.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TestTechDrawApp.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TestTechDrawGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/InitGui.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/TechDraw" TYPE DIRECTORY FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/Templates" FILES_MATCHING REGEX "/[^/]*\\.svg[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/TechDraw" TYPE DIRECTORY FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/PAT" FILES_MATCHING REGEX "/[^/]*\\.pat[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/TechDraw" TYPE DIRECTORY FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/CSVdata" FILES_MATCHING REGEX "/[^/]*\\.csv[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/TechDraw" TYPE DIRECTORY FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/LineGroup" FILES_MATCHING REGEX "/[^/]*\\.csv[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/TechDraw" TYPE DIRECTORY FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/Patterns" FILES_MATCHING REGEX "/[^/]*\\.svg[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/TechDraw" TYPE DIRECTORY FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/Symbols" FILES_MATCHING REGEX "/[^/]*\\.svg[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw/TechDrawTools" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/CommandMoveView.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/CommandShareView.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/CommandAxoLengthDimension.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/CommandPositionSectionView.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/CommandFillTemplateFields.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/CommandVertexCreations.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/CommandHoleShaftFit.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/TaskMoveView.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/TaskShareView.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/TaskFillTemplateFields.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/TaskHoleShaftFit.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/TaskAddOffsetVertex.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/TDToolsUtil.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TechDrawTools/TDToolsMovers.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw/TechDrawTools/Gui" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/Gui/TaskMoveView.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/Gui/TaskHoleShaftFit.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/Gui/TaskAddOffsetVertex.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/Gui/DlgPageChooser.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw/TDTest" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/DrawHatchTest.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/DrawProjectionGroupTest.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewAnnotationTest.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewImageTest.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewSymbolTest.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewDimensionTest.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewPartTest.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewSectionTest.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewBalloonTest.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/DrawViewDetailTest.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/TechDrawTestUtilities.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/TechDraw/TDTest" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/TestHatch.svg"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/TestImage.png"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/TestSymbol.svg"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/TestNonAsciiSymbol.svg"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/TechDraw/TDTest/TestTemplate.svg"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/TechDraw/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
