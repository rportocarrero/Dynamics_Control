include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(test_main test_main.cpp Integrator.test.cpp Simulation.test.cpp StateSpace.test.cpp)
target_link_libraries(test_main GTest::gtest_main integrator stateSpace simulation)


include(GoogleTest)
gtest_discover_tests(test_main)