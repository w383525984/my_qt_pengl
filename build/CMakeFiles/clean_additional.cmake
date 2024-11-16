# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QtBasicLibrary_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QtBasicLibrary_autogen.dir/ParseCache.txt"
  "CMakeFiles/QtBasicWindow_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QtBasicWindow_autogen.dir/ParseCache.txt"
  "QtBasicLibrary_autogen"
  "QtBasicWindow_autogen"
  )
endif()
