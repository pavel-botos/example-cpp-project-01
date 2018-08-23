cmake_minimum_required(VERSION 3.5)
project(ExampleCPPProject01)



set(CMAKE_CXX_STANDARD 11)

find_package(Boost 1.58 REQUIRED COMPONENTS unit_test_framework)

add_subdirectory(src)
add_subdirectory(test)

enable_testing()

# declares a test with our executable
add_test(NAME test1 COMMAND UnitTest)
add_test(NAME builderTest COMMAND BuilderUnitTest)
add_test(NAME moonLanderAutopilot1DUnitTest COMMAND MoonLanderAutopilot1DUnitTest)
add_test(NAME moonGravityServiceUnitTest COMMAND MoonGravityServiceUnitTest)

add_test(NAME PropellantTankUnitTest COMMAND PropellantTankUnitTest)
