# Install script for directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Idf/Idflibs" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/License.txt"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/0603_SMD.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/0805_SMD.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/1206_SMD.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/1210_SMD.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/1812_SMD.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/2225_SMD.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/2512_SMD.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/CAP_50SGV_8_10.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/EPL22_6_16.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/footprints_models.csv"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/I22_2_5_16.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/I22_2_5_16withEPL22_6_16.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/MSOP_10.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/RLF_12545.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/RLF_7030.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/SMB_DO_214AA.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/SMC_DO_214AB.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/SOD_323.igs"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/SOD_323.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/SOD_523.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/SOT23.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/SOT404.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/SOT428_DPAK.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/SOT_323_3.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/SOT_96.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/TCMT1107_4.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/TSM_103_01_L_DV_A.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/TSM_104_01_L_DV_A.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/TSS0P_8.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/VC0603_SMD.stp"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/RLF_12545.igs"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/SOT23.igs"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idflibs/SOT404.igs"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Idf" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Init.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Idf/Idf.py"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Idf/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
