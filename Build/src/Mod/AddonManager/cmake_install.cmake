# Install script for directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager

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
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/AddonManager/Widgets/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/add_toolbar_button_dialog.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/Addon.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonStats.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManager.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManager.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_cache.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_connection_checker.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_dependency_installer.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_devmode.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_add_content.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_license_selector.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_licenses_table.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_metadata_checker.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_person_editor.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_people_table.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_predictor.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_devmode_validators.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_firstrun.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_freecad_interface.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_git.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_installer.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_installer_gui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_licenses.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_macro.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_macro_parser.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_metadata.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_package_details_controller.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_preferences_defaults.json"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_pyside_interface.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_readme_controller.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_update_all_gui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_uninstaller.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_uninstaller_gui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_utilities.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_workers_installation.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_workers_startup.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/addonmanager_workers_utility.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerOptions.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerOptions_AddCustomRepository.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerOptions.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/ALLOWED_PYTHON_PACKAGES.txt"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/change_branch.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/change_branch.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/compact_view.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/composite_view.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/dependency_resolution_dialog.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/developer_mode.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/developer_mode_add_content.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/developer_mode_advanced_freecad_versions.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/developer_mode_copyright_info.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/developer_mode_dependencies.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/developer_mode_edit_dependency.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/developer_mode_freecad_versions.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/developer_mode_license.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/developer_mode_licenses_table.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/developer_mode_people.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/developer_mode_people_table.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/developer_mode_select_from_list.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/developer_mode_tags.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/expanded_view.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/first_run.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/Init.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/InitGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/install_to_toolbar.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/loading.html"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/manage_python_dependencies.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/NetworkManager.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/package_list.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/PythonDependencyUpdateDialog.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/select_toolbar_dialog.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/TestAddonManagerApp.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/update_all.ui"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/TestAddonManagerGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/AddonManager/AddonManager_rc.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager/AddonManagerTest" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/test_information.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager/AddonManagerTest/app" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/mocks.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_addon.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_cache.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_dependency_installer.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_freecad_interface.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_git.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_installer.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_macro.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_macro_parser.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_metadata.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_utilities.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/app/test_uninstaller.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager/AddonManagerTest/gui" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/gui_mocks.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/test_gui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/test_installer_gui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/test_update_all_gui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/test_uninstaller_gui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/test_workers_startup.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/gui/test_workers_utility.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/AddonManager/AddonManagerTest/data" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/addon_update_stats.json"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/bad_macro_metadata.FCStd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/combination.xml"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/corrupted_metadata.zip"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/depends_on_all_workbenches.xml"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/DoNothing.FCMacro"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/git_submodules.txt"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/good_macro_metadata.FCStd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/good_package.xml"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/icon_cache.zip"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/icon_cache.zip.sha1"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/macro_only.xml"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/macro_template.FCStd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/MacrosRecipesWikiPage.zip"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/metadata.zip"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/missing_macro_metadata.FCStd"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/prefpack_only.xml"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/test_addon_with_fcmacro.zip"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/test_github_style_repo.zip"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/test_repo.zip"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/test_simple_repo.zip"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/test_version_detection.xml"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/TestWorkbench.zip"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/AddonManager/AddonManagerTest/data/workbench_only.xml"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/AddonManager/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
