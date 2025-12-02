# Install script for directory: D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft

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
  include("D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Draft/App/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/Init.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/InitGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/Draft.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/DraftTools.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/DraftGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/DraftVecUtils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/DraftGeomUtils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/WorkingPlane.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/TestDraft.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/TestDraftGui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/importAirfoilDAT.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/importDXF.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/importDWG.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/importOCA.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/importSVG.py"
    "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Draft/Draft_rc.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/drafttests" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/auxiliary.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/test_import.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/test_import_gui.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/test_import_tools.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/test_pivy.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/test_array.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/test_creation.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/test_modification.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/test_svg.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/test_dxf.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/test_dwg.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/test_oca.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/test_airfoildat.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/test_draftgeomutils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/draft_test_objects.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttests/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftgeoutils" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/general.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/edges.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/intersections.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/sort_edges.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/faces.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/geometry.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/geo_arrays.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/wires.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/arcs.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/fillets.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/offsets.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/linear_algebra.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/cuboids.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/circles.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/circles_apollonius.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/circle_inversion.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftgeoutils/circles_incomplete.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftutils" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftutils/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftutils/groups.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftutils/init_tools.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftutils/init_draft_statusbar.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftutils/params.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftutils/units.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftutils/utils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftutils/gui_utils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftutils/todo.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftutils/translate.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftutils/messages.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftutils/README.md"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftutils/grid_observer.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftfunctions" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/array.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/cut.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/downgrade.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/draftify.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/dxf.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/extrude.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/fuse.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/heal.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/join.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/mirror.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/move.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/offset.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/rotate.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/scale.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/split.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/svg.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/svgshapes.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/svgtext.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/upgrade.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftfunctions/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftmake" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_arc_3points.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_array.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_bezcurve.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_block.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_bspline.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_circle.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_circulararray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_clone.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_copy.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_dimension.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_ellipse.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_facebinder.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_fillet.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_label.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_layer.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_line.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_orthoarray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_patharray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_point.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_pointarray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_polararray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_polygon.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_rectangle.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_shape2dview.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_shapestring.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_sketch.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_text.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_wire.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_wpproxy.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/make_hatch.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftmake/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftobjects" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/array.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/base.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/bezcurve.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/block.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/bspline.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/circle.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/clone.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/ellipse.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/facebinder.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/draft_annotation.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/fillet.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/draftlink.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/label.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/layer.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/dimension.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/patharray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/pathtwistedarray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/point.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/pointarray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/polygon.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/rectangle.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/shapestring.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/shape2dview.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/text.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/wire.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/wpproxy.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/hatch.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftobjects/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftviewproviders" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_array.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_base.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_bezcurve.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_bspline.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_circulararray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_clone.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_facebinder.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_orthoarray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_polararray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_draft_annotation.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_fillet.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_draftlink.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_label.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_layer.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_dimension.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_point.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_rectangle.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_text.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_wire.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_wpproxy.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_hatch.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/view_shapestring.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftviewproviders/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftguitools" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_annotationstyleeditor.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_base.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_base_original.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_tool_utils.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_planeproxy.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_selectplane.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_snaps.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_snapper.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_trackers.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_base_object.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_draft_objects.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_arch_objects.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_part_objects.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_edit_sketcher_objects.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_edit.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_togglemodes.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_groups.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_grid.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_heal.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_dimension_ops.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_lineslope.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_layers.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_setstyle.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_hyperlink.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_lines.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_fillets.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_splines.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_beziers.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_rectangles.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_arcs.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_circles.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_polygons.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_ellipses.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_texts.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_dimensions.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_shapestrings.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_points.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_facebinders.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_labels.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_hatch.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_subelements.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_move.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_styles.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_rotate.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_offset.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_stretch.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_join.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_split.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_upgrade.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_downgrade.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_trimex.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_scale.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_wire2spline.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_shape2dview.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_draft2sketch.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_arrays.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_circulararray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_orthoarray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_patharray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_pathtwistedarray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_pointarray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_polararray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_clone.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/gui_mirror.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/draftguitools/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/drafttaskpanels" TYPE FILE FILES
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttaskpanels/__init__.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttaskpanels/task_circulararray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttaskpanels/task_orthoarray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttaskpanels/task_polararray.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttaskpanels/task_scale.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttaskpanels/task_selectplane.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttaskpanels/task_shapestring.py"
    "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/drafttaskpanels/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/Mod/Draft/Resources/icons" TYPE FILE FILES "D:/Project/FreeCAD-1.0.2-ori/FreeCAD/src/Mod/Draft/Resources/icons/DraftWorkbench.svg")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/Project/FreeCAD-1.0.2-ori/Build/src/Mod/Draft/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
