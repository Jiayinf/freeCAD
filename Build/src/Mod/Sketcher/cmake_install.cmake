# Install script for directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher

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
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Sketcher/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Sketcher/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Sketcher" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher/Init.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher/SketcherExample.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher/TestSketcherApp.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher/Profiles.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher/InitGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher/TestSketcherGui.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Sketcher/ProfileLib" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher/ProfileLib/Hexagon.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher/ProfileLib/RegularPolygon.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher/ProfileLib/__init__.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Sketcher/SketcherTests" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher/SketcherTests/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher/SketcherTests/TestSketchFillet.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher/SketcherTests/TestSketcherSolver.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher/SketcherTests/TestSketchExpression.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Sketcher/SketcherTests/TestSketchValidateCoincidents.py"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Sketcher/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
