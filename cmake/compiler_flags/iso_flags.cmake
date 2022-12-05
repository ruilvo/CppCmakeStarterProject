include_guard(GLOBAL)

if(NOT CCSP_USE_ISO_FLAGS)
  return()
endif()

set(ISO_FLAGS "/EHsc" "/volatile:iso" "/Zc:preprocessor" "/Zc:throwingNew" "/Zc:externConstexpr")

foreach(ISO_FLAG ${ISO_FLAGS})
  check_cxx_compiler_flag(${ISO_FLAG} CCSP_HAS_${ISO_FLAG})
  if(CCSP_HAS_${ISO_FLAG})
    add_compile_options(${ISO_FLAG})
  endif()
endforeach()
