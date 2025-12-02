# Install script for directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/Widgets

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager/Widgets" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/Widgets/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/Widgets/addonmanager_colors.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/Widgets/addonmanager_widget_addon_buttons.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/Widgets/addonmanager_widget_filter_selector.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/Widgets/addonmanager_widget_global_buttons.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/Widgets/addonmanager_widget_package_details_view.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/Widgets/addonmanager_widget_progress_bar.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/Widgets/addonmanager_widget_readme_browser.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/Widgets/addonmanager_widget_search.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/Widgets/addonmanager_widget_view_control_bar.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/Widgets/addonmanager_widget_view_selector.py"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/AddonManager/Widgets/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
