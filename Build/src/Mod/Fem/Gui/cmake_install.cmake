# Install script for directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Fem/Resources/icons" TYPE FILE FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/icons/FemWorkbench.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Fem/Resources/symbols" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/symbols/ConstraintContact.iv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/symbols/ConstraintDisplacement.iv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/symbols/ConstraintFixed.iv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/symbols/ConstraintForce.iv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/symbols/ConstraintHeatFlux.iv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/symbols/ConstraintPlaneRotation.iv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/symbols/ConstraintPressure.iv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/symbols/ConstraintRigidBody.iv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/symbols/ConstraintSectionPrint.iv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/symbols/ConstraintSpring.iv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/symbols/ConstraintTemperature.iv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/symbols/ConstraintTransform.iv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/symbols/ConstraintTie.iv"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Fem/Resources/ui" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/BodyHeatSource.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ConstraintCentrif.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ConstraintTie.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ConstraintSectionPrint.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/CurrentDensity.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/DlgSettingsNetgen.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ElectrostaticPotential.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ElementFluid1D.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ElementGeometry1D.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ElementGeometry2D.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ElementRotation1D.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/FlowVelocity.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/InitialFlowVelocity.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/InitialPressure.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/Magnetization.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/Material.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/MaterialReinforcement.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/MeshBoundaryLayer.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/MeshGmsh.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/MeshGroup.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/MeshGroupXDMFExport.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/MeshNetgen.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/MeshRegion.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ResultHints.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/ResultShow.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Fem/Gui/Resources/ui/SolverCalculix.ui"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Fem/Gui/Debug/FemGui_d.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Fem/Gui/Release/FemGui.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Fem/Gui/MinSizeRel/FemGui.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Fem/Gui/RelWithDebInfo/FemGui.lib")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "D:/Project/FreeCAD-1.0.2-ori/Build/Mod/Fem/FemGui_d.pyd")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "D:/Project/FreeCAD-1.0.2-ori/Build/Mod/Fem/FemGui.pyd")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "D:/Project/FreeCAD-1.0.2-ori/Build/Mod/Fem/MinSizeRel/FemGui.pyd")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "D:/Project/FreeCAD-1.0.2-ori/Build/Mod/Fem/RelWithDebInfo/FemGui.pyd")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Fem/Gui/CMakeFiles/FemGui.dir/install-cxx-module-bmi-Debug.cmake" OPTIONAL)
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Fem/Gui/CMakeFiles/FemGui.dir/install-cxx-module-bmi-Release.cmake" OPTIONAL)
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Fem/Gui/CMakeFiles/FemGui.dir/install-cxx-module-bmi-MinSizeRel.cmake" OPTIONAL)
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Fem/Gui/CMakeFiles/FemGui.dir/install-cxx-module-bmi-RelWithDebInfo.cmake" OPTIONAL)
  endif()
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Fem/Gui/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
