# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appHelloWorld_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appHelloWorld_autogen.dir\\ParseCache.txt"
  "appHelloWorld_autogen"
  )
endif()
