include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

if (WIN32)
  set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif()
FetchContent_MakeAvailable(googletest)

file(GLOB_RECURSE TESTS test_*.cpp)
foreach(test ${TESTS})
  get_filename_component(target ${test} NAME_WE)
  add_executable(${target} ${test})
  target_link_libraries(${target} gtest_main lib)
  target_include_directories(${target} PRIVATE ../lib/include)
  include(GoogleTest)
  gtest_discover_tests(${target})
endforeach()
