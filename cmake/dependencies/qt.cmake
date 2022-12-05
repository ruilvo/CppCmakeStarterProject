include_guard(GLOBAL)

set(QT_REQUIRED CCSP_DEVELOPER_MODE OR CCSP_BUILD_APP)

if(NOT QT_REQUIRED)
  return()
endif()

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC OFF) # Deprecated

find_package(
  Qt6 6.2
  COMPONENTS Core Test Gui Widgets Quick
  REQUIRED)
