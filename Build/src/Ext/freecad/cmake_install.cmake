# Install script for directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Ext/freecad

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
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "D:/Project/FreeCAD-1.0.2-ori/LibPack-1.0.0-v3.0.0-Release/bin/Lib/site-packages/freecad/__init__.py;D:/Project/FreeCAD-1.0.2-ori/LibPack-1.0.0-v3.0.0-Release/bin/Lib/site-packages/freecad/freecad_doc.py;D:/Project/FreeCAD-1.0.2-ori/LibPack-1.0.0-v3.0.0-Release/bin/Lib/site-packages/freecad/module_io.py;D:/Project/FreeCAD-1.0.2-ori/LibPack-1.0.0-v3.0.0-Release/bin/Lib/site-packages/freecad/part.py;D:/Project/FreeCAD-1.0.2-ori/LibPack-1.0.0-v3.0.0-Release/bin/Lib/site-packages/freecad/partdesign.py;D:/Project/FreeCAD-1.0.2-ori/LibPack-1.0.0-v3.0.0-Release/bin/Lib/site-packages/freecad/project_utility.py;D:/Project/FreeCAD-1.0.2-ori/LibPack-1.0.0-v3.0.0-Release/bin/Lib/site-packages/freecad/sketcher.py;D:/Project/FreeCAD-1.0.2-ori/LibPack-1.0.0-v3.0.0-Release/bin/Lib/site-packages/freecad/UiTools.py;D:/Project/FreeCAD-1.0.2-ori/LibPack-1.0.0-v3.0.0-Release/bin/Lib/site-packages/freecad/utils.py;D:/Project/FreeCAD-1.0.2-ori/LibPack-1.0.0-v3.0.0-Release/bin/Lib/site-packages/freecad/utils_zip.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "D:/Project/FreeCAD-1.0.2-ori/LibPack-1.0.0-v3.0.0-Release/bin/Lib/site-packages/freecad" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/Build/Ext/freecad/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Ext/freecad/freecad_doc.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Ext/freecad/module_io.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Ext/freecad/part.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Ext/freecad/partdesign.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Ext/freecad/project_utility.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Ext/freecad/sketcher.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Ext/freecad/UiTools.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Ext/freecad/utils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Ext/freecad/utils_zip.py"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/Project/FreeCAD-1.0.2-ori/Build/src/Ext/freecad/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
