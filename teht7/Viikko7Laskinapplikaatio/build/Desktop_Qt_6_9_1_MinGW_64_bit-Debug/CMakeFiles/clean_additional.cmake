# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Viikko7Laskinapplikaatio_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Viikko7Laskinapplikaatio_autogen.dir\\ParseCache.txt"
  "Viikko7Laskinapplikaatio_autogen"
  )
endif()
