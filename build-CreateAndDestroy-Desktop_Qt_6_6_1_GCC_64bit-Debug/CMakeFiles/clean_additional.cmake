# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/CreateAndDestroy_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/CreateAndDestroy_autogen.dir/ParseCache.txt"
  "CreateAndDestroy_autogen"
  )
endif()
