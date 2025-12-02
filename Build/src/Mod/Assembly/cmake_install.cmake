# Install script for directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly

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
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Assembly/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Assembly/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Assembly" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/Init.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/CommandCreateAssembly.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/CommandCreateBom.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/CommandInsertLink.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/CommandSolveAssembly.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/CommandCreateJoint.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/CommandCreateView.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/CommandExportASMT.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/TestAssemblyWorkbench.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/JointObject.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/Preferences.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/AssemblyImport.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/SoSwitchMarker.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/UtilsAssembly.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/InitGui.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Assembly/AssemblyTests" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/AssemblyTests/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/AssemblyTests/TestCore.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Assembly/Assembly" TYPE FILE FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Assembly/Assembly/__init__.py")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Assembly/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
