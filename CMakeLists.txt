cmake_minimum_required(VERSION 3.10)
project(ExampleCPPProject01)



set(CMAKE_CXX_STANDARD 17)

find_package(Boost 1.65 REQUIRED COMPONENTS unit_test_framework)

add_subdirectory(src)
add_subdirectory(test)

enable_testing()

# declares a test with our executable
add_test(NAME test1 COMMAND UnitTest)
