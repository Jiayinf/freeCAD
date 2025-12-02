# Install script for directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM

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
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/CAM/App/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/CAM/libarea/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/CAM/PathSimulator/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/CAM/Gui/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Init.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/PathCommands.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/TestCAMApp.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/InitGui.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/PathScripts" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/PathScripts/PathUtils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/PathScripts/PathUtilsGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/PathScripts/PathPropertyBag.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/PathScripts/PathPropertyBagGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/PathScripts/__init__.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Log.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Geom.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/GuiInit.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Preferences.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Base" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Drillable.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/FeedRate.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Language.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/MachineState.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Property.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/PropertyBag.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/SetupSheet.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/SetupSheetOpPrototype.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Util.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Base/Generator" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Generator/dogboneII.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Generator/drill.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Generator/helix.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Generator/rotation.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Generator/threadmilling.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Generator/toolchange.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Base/Gui" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Gui/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Gui/GetPoint.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Gui/IconViewProvider.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Gui/PreferencesAdvanced.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Gui/PropertyBag.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Gui/PropertyEditor.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Gui/SetupSheet.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Gui/SetupSheetOpPrototype.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Base/Gui/Util.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Dressup" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Utils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Boundary.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/DogboneII.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Tags.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Dressup/Gui" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Gui/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Gui/AxisMap.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Gui/Dogbone.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Gui/DogboneII.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Gui/Dragknife.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Gui/LeadInOut.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Gui/Boundary.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Gui/Preferences.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Gui/RampEntry.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Gui/Tags.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Gui/TagPreferences.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Dressup/Gui/ZCorrect.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Main" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Job.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Stock.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Main/Gui" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Gui/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Gui/Camotics.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Gui/Fixture.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Gui/Inspect.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Gui/Job.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Gui/JobCmd.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Gui/JobDlg.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Gui/PreferencesJob.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Gui/SanityCmd.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Gui/Simulator.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Gui/SimulatorGL.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Main/Sanity" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Sanity/Sanity.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Sanity/ImageBuilder.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Sanity/ReportGenerator.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Sanity/HTMLTemplate.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Sanity/Sanity_Bulb.svg"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Sanity/Sanity_Caution.svg"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Sanity/Sanity_Note.svg"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Main/Sanity/Sanity_Warning.svg"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Op" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Adaptive.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Area.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Base.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/CircularHoleBase.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Custom.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Deburr.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Engrave.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/EngraveBase.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/FeatureExtension.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Drilling.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Helix.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/MillFace.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Pocket.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/PocketBase.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/PocketShape.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Probe.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Profile.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Slot.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Surface.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/SurfaceSupport.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/ThreadMilling.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Util.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Vcarve.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Waterline.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Op/Gui" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Adaptive.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Array.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Base.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/CircularHoleBase.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Comment.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Copy.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Custom.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Deburr.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Drilling.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Engrave.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/FeatureExtension.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Helix.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/MillFace.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Pocket.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/PocketBase.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/PocketShape.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Probe.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Profile.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Selection.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/SimpleCopy.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Slot.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Stop.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Surface.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/ThreadMilling.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Vcarve.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Op/Gui/Waterline.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Post" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/Command.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/Processor.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/Utils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/UtilsArguments.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/UtilsExport.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/UtilsParse.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Post/scripts" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/centroid_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/comparams_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/dxf_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/dynapath_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/estlcam_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/example_pre.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/fablin_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/fanuc_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/fangling_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/gcode_pre.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/generic_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/grbl_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/heidenhain_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/jtech_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/KineticNCBeamicon2_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/linuxcnc_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/mach3_mach4_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/marlin_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/nccad_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/opensbp_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/opensbp_pre.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/philips_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/refactored_centroid_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/refactored_grbl_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/refactored_linuxcnc_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/refactored_mach3_mach4_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/refactored_test_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/rml_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/rrf_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/slic3r_pre.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/smoothie_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/uccnc_post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Post/scripts/wedm_post.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Tool" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Tool/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Tool/Bit.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Tool/Controller.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Path/Tool/Gui" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Tool/Gui/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Tool/Gui/Bit.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Tool/Gui/BitCmd.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Tool/Gui/BitEdit.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Tool/Gui/BitLibraryCmd.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Tool/Gui/BitLibrary.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Path/Tool/Gui/Controller.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/CAMTests" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/boxtest.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/boxtest1.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/Drilling_1.FCStd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/drill_test1.FCStd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/FilePathTestUtils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/PathTestUtils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/test_adaptive.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/test_profile.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/test_centroid_00.ngc"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/test_filenaming.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/test_geomop.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/test_holes00.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestCAMSanity.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestCentroidPost.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestGrblPost.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestLinuxCNCPost.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestMach3Mach4Post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathAdaptive.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathCore.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathDepthParams.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathDressupDogbone.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathDressupDogboneII.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathDressupHoldingTags.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathDrillGenerator.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathDrillable.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathGeneratorDogboneII.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathGeom.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathHelix.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathHelpers.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathHelixGenerator.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathLanguage.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathLog.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathOpDeburr.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathOpUtil.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathPost.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathPreferences.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathProfile.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathPropertyBag.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathRotationGenerator.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathSetupSheet.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathStock.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathToolChangeGenerator.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathThreadMilling.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathThreadMillingGenerator.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathToolBit.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathToolController.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathUtil.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathVcarve.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestPathVoronoi.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestRefactoredCentroidPost.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestRefactoredGrblPost.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestRefactoredLinuxCNCPost.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestRefactoredMach3Mach4Post.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestRefactoredTestPost.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestRefactoredTestPostGCodes.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/TestRefactoredTestPostMCodes.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/Tools/Bit/test-path-tool-bit-bit-00.fctb"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/Tools/Library/test-path-tool-bit-library-00.fctl"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/Tools/Shape/test-path-tool-bit-shape-00.fcstd"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/CAMTests/Fixtures" TYPE FILE FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/Fixtures/OpHelix_v0-21.FCStd")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/CAMTests" TYPE DIRECTORY FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/CAMTests/Tools")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/PathPythonGui" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/PathPythonGui/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/PathPythonGui/simple_edit_panel.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Tools" TYPE FILE FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/README.md")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Tools/Bit" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Bit/45degree_chamfer.fctb"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Bit/5mm-thread-cutter.fctb"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Bit/5mm_Drill.fctb"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Bit/5mm_Endmill.fctb"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Bit/60degree_Vbit.fctb"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Bit/6mm_Ball_End.fctb"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Bit/6mm_Bullnose.fctb"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Bit/probe.fctb"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Bit/slittingsaw.fctb"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Tools/Library" TYPE FILE FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Library/Default.fctl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Tools/Shape" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Shape/ballend.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Shape/bullnose.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Shape/chamfer.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Shape/dovetail.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Shape/drill.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Shape/endmill.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Shape/probe.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Shape/slittingsaw.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Shape/thread-mill.fcstd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Tools/Shape/v-bit.fcstd"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Images/Ops" TYPE FILE FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Images/Ops/chamfer.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Images/Tools" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Images/Tools/drill.svg"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Images/Tools/endmill.svg"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Images/Tools/v-bit.svg"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/CAM/Data/Threads" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Data/Threads/imperial-external-2A.csv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Data/Threads/imperial-external-3A.csv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Data/Threads/imperial-internal-2B.csv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Data/Threads/imperial-internal-3B.csv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Data/Threads/metric-external-4G6G.csv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Data/Threads/metric-external-6G.csv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/CAM/Data/Threads/metric-internal-6H.csv"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/CAM/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
