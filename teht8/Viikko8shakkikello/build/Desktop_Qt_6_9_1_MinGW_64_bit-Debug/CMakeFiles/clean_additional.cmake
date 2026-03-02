# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Viikko8shakkikello_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Viikko8shakkikello_autogen.dir\\ParseCache.txt"
  "Viikko8shakkikello_autogen"
  )
endif()
