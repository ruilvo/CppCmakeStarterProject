cmake_minimum_required(VERSION 3.23)

project(
  CppCmakeStarterProject
  VERSION 0.1
  LANGUAGES C CXX)

include(CMakeDependentOption)

# Options ------------------------------------------------------------------------------------------

option(BUILD_SHARED_LIBS "Build libraries as shared libraries." OFF)

option(CCSP_DEVELOPER_MODE "Enable developer helpers." OFF)
option(CCSP_BUILD_APP "Build the main application." OFF)
cmake_dependent_option(CCSP_BUILD_LIB "Build the supporting library." ON
                       "NOT CCSP_BUILD_EXPLORER" ON)

option(CCSP_SET_CXX_STANDARD "Set the C++ standard directly." ON)
option(CCSP_USE_LTO "Enable link-time optimization when possible." ON)
option(CCSP_USE_FAST_MATH "Use fast math when possible (-ffast-math or /fp:fast)." OFF)
option(CCSP_USE_ISO_FLAGS "Add extra compiler flags to make compilers more compliant." ON)
option(CCSP_USE_X86_HIGH_SIMD
       "Use agressive x86 architecture options (-march=skylake or /arch:AVX2)." OFF)

# --------------------------------------------------------------------------------------------------

include(GenerateExportHeader)
include(CheckCXXCompilerFlag)
include(CheckIPOSupported)
include(GNUInstallDirs)

# Local modules
include(cmake/output_structure.cmake)
include(cmake/install_structure.cmake)
include(cmake/default_visibility.cmake)

include(cmake/compiler_flags/cxx_standard.cmake)
include(cmake/compiler_flags/fast_math.cmake)
include(cmake/compiler_flags/ipo_support.cmake)
include(cmake/compiler_flags/iso_flags.cmake)
include(cmake/compiler_flags/x86_high_simd.cmake)

include(cmake/dependencies/openmp.cmake)
include(cmake/dependencies/qt.cmake)

include(cmake/developer_mode.cmake)

# Projects
add_subdirectory(ccsp_lib)
add_subdirectory(ccsp_app)
