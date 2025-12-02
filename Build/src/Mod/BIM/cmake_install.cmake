# Install script for directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/BIM" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/Init.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/InitGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchComponent.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchIFC.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchIFCView.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchIFCSchema.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchProject.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchWall.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/Arch.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchSite.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchStructure.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchCommands.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchSectionPlane.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchWindow.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchWindowPresets.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchAxis.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchAxisSystem.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchGrid.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchVRM.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchRoof.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchStairs.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchSpace.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchRebar.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/TestArch.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchFrame.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchPanel.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchEquipment.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchCutPlane.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchMaterial.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchSchedule.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchProfile.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchPrecast.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchPipe.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchNesting.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchBuildingPart.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchReference.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchFence.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/OfflineRenderingUtils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchTruss.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchCurtainWall.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/ArchSketchObject.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/BimSelect.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/BimStatus.py"
    "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/BIM/Arch_rc.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/BIM/Dice3DS" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/Dice3DS/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/Dice3DS/util.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/Dice3DS/dom3ds.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/BIM/importers" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/importIFC.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/importIFClegacy.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/importIFCHelper.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/importIFCmulticore.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/importDAE.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/importOBJ.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/importWebGL.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/importJSON.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/importSH3D.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/import3DS.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/importSHP.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/importGBXML.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/exportIFCStructuralTools.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/exportIFC.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/importers/exportIFCHelper.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/BIM/bimcommands" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimArchUtils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimAxis.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimBackground.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimBeam.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimBox.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimBuilder.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimBuildingPart.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimClassification.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimClone.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimColumn.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimCommon.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimCompound.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimConvert.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimCopy.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimCurtainwall.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimCutPlane.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimCut.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimDiff.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimDimensions.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimDoor.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimEmptyTrash.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimEquipment.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimExamples.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimExtrude.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimFence.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimFrame.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimFuse.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimGlue.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimHelp.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimIfcElements.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimIfcExplorer.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimIfcProperties.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimIfcQuantities.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimImagePlane.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimLayers.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimLeader.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimLibrary.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimMaterial.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimMoveView.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimNudge.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimOffset.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimPanel.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimPipe.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimPreflight.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimProfile.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimProjectManager.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimProject.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimRebar.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimReextrude.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimReference.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimReorder.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimResetCloneColors.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimRewire.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimRoof.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimSchedule.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimSectionPlane.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimSetup.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimShape2DView.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimSimpleCopy.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimSite.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimSketch.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimSlab.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimSpace.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimStairs.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimTDPage.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimTDView.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimText.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimTogglePanels.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimTrash.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimTruss.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimTutorial.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimUnclone.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimUngroup.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimViews.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimWall.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimWelcome.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimWindow.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimWindows.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/BimWPCommands.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/bimcommands/__init__.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/BIM/nativeifc" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_commands.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_diff.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_generator.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_geometry.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_import.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_layers.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_materials.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_objects.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_observer.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_performance_test.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_psets.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_selftest.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_status.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_tools.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_tree.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_viewproviders.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/nativeifc/ifc_openshell.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/BIM" TYPE DIRECTORY FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/Presets")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/BIM/Resources/icons" TYPE FILE FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/BIM/Resources/icons/BIMWorkbench.svg")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/BIM/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
