if(NOT CCSP_BUILD_APP)
  return()
endif()

qt_add_executable(ccsp_app main.cpp)
set_target_properties(ccsp_app PROPERTIES OUTPUT_NAME "CCSPApp")

target_link_libraries(ccsp_app PRIVATE Qt6::Gui Qt6::Quick)

qt_add_qml_module(
  ccsp_app
  URI
  ccsp_app
  VERSION
  1.0
  QML_FILES
  main.qml)
