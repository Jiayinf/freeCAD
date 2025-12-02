# Install script for directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/Init.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/InitGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCAD2Dgeom.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADFeatures.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADUtils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADCommands.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/exportCSG.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/importCSG.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/tokrules.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/colorcodeshapes.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/expandplacements.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/replaceobj.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/TestOpenSCADApp.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/TestOpenSCADGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/OpenSCAD/OpenSCAD_rc.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/OpenSCAD/Resources/icons" TYPE FILE FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/Resources/icons/OpenSCADWorkbench.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD/OpenSCADTest" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/test_information.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD/OpenSCADTest/app" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/app/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/app/test_importCSG.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD/OpenSCADTest/gui" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/gui/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/gui/test_dummy.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/OpenSCAD/OpenSCADTest/data" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/CSG.scad"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/CSG.csg"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/Cube.stl"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/Square.dxf"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/Surface.dat"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/Surface2.dat"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/OpenSCAD/OpenSCADTest/data/Surface.png"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/OpenSCAD/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
