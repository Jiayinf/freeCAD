# Install script for directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign

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
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/PartDesign/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/PartDesign/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Init.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/TestPartDesignApp.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/InitGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/TestPartDesignGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/InvoluteGearFeature.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/InvoluteGearFeature.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/SprocketFeature.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/SprocketFeature.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/Scripts" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Scripts/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Scripts/DistanceBolt.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Scripts/Epitrochoid.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Scripts/FilletArc.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Scripts/Gear.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Scripts/Parallelepiped.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Scripts/RadialCopy.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Scripts/Spring.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/PartDesignTests" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestDatum.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestShapeBinder.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPad.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPocket.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestHelix.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestHole.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestRevolve.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestLoft.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPipe.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPrimitive.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestMirrored.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestLinearPattern.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestPolarPattern.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestMultiTransform.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestBoolean.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestFillet.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestChamfer.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestDraft.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestThickness.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestTopologicalNamingProblem.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestInvoluteGear.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestSketch.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/TestMaterial.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/PartDesignTests/Fixtures" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/Fixtures/InvoluteGear_v0-20.FCStd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/PartDesignTests/Fixtures/InternalInvoluteGear_v0-20.FCStd"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/fcgear" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/fcgear/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/fcgear/fcgear.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/fcgear/involute.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/fcgear/svggear.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/fcsprocket" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/fcsprocket/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/fcsprocket/fcsprocket.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/fcsprocket/fcsprocketdialog.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/fcsprocket/sprocket.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/PartDesign/Resources/Hole" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Resources/Hole/din7984.json"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso10642.json"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso10642-fine.json"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso12474-fine.json"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso14583.json"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso14583part.json"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso2009.json"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso4762_7089.json"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso4762.json"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso4762-fine.json"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/Resources/Hole/iso7046.json"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/PartDesign/WizardShaft" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/WizardShaft/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/WizardShaft/WizardShaft.svg"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/WizardShaft/WizardShaft.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/WizardShaft/WizardShaftTable.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/WizardShaft/Shaft.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/WizardShaft/ShaftFeature.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/WizardShaft/ShaftDiagram.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/PartDesign/WizardShaft/SegmentFunction.py"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/PartDesign/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
