# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Memory_Game_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Memory_Game_autogen.dir\\ParseCache.txt"
  "Memory_Game_autogen"
  )
endif()
