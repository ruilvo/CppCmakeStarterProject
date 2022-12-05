if(NOT CCSP_BUILD_LIB)
  return()
endif()

add_library(ccsp_lib)

set_target_properties(ccsp_lib PROPERTIES OUTPUT_NAME "CCSPlib" DEFINE_SYMBOL
                                                                    "CCSP_LIB_EXPORTING")
target_compile_features(ccsp_lib PUBLIC cxx_std_20)

generate_export_header(
  ccsp_lib
  BASE_NAME
  "CCSP_LIB"
  EXPORT_MACRO_NAME
  "CCSP_LIB_API"
  EXPORT_FILE_NAME
  include/ccsp_lib/api.hpp)

target_include_directories(ccsp_lib PUBLIC ${CMAKE_CURRENT_BINARY_DIR}/include)
target_sources(ccsp_lib PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/include/ccsp_lib/api.hpp)

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(tests)
