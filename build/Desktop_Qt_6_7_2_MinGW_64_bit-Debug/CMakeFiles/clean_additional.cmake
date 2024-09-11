# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Ex3_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Ex3_autogen.dir\\ParseCache.txt"
  "Ex3_autogen"
  )
endif()
