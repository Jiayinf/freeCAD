# Install script for directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part

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
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Part/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Part/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/Init.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/JoinFeatures.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/MakeBottle.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/PartEnums.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/TestPartApp.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/InitGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/TestPartGui.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/AttachmentEditor" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/AttachmentEditor/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/AttachmentEditor/Commands.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/AttachmentEditor/FrozenClass.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/AttachmentEditor/TaskAttachmentEditor.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/AttachmentEditor/TaskAttachmentEditor.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/BasicShapes" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BasicShapes/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BasicShapes/Shapes.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BasicShapes/Utils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BasicShapes/ShapeContent.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BasicShapes/CommandShapes.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BasicShapes/ViewProviderShapes.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BasicShapes/TaskTube.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/BOPTools" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BOPTools/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BOPTools/BOPFeatures.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BOPTools/GeneralFuseResult.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BOPTools/JoinAPI.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BOPTools/JoinFeatures.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BOPTools/ShapeMerge.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BOPTools/SplitAPI.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BOPTools/SplitFeatures.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/BOPTools/Utils.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/CompoundTools" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/CompoundTools/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/CompoundTools/_CommandCompoundFilter.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/CompoundTools/_CommandExplodeCompound.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/CompoundTools/CompoundFilter.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/CompoundTools/Explode.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Part/parttests" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/parttests/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/parttests/BRep_tests.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/parttests/Geom2d_tests.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/parttests/part_test_objects.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/parttests/regression_tests.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/parttests/TopoShapeListTest.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/parttests/ColorPerFaceTest.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/parttests/ColorTransparencyTest.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Part/parttests/TopoShapeTest.py"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Part/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
