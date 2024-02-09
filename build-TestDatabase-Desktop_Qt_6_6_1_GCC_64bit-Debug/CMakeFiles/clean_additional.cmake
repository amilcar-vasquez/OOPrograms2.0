# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/TestDatabase_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/TestDatabase_autogen.dir/ParseCache.txt"
  "TestDatabase_autogen"
  )
endif()
