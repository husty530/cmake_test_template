set(target lib)

# compile target
add_library(${target} src/calc.cpp)

# additional include directories
target_include_directories(${target} PRIVATE include)

# output directory (binary)
install(TARGETS ${target}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION bin
  RUNTIME DESTINATION bin
)

# output directory (header)
install(DIRECTORY include
  DESTINATION include
)