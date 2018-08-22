set(Boost_ADDITIONAL_VERSIONS "1.65" "1.65.0")

include_directories(${TEST_SOURCE_DIR}/src
        ${Boost_INCLUDE_DIRS}
        )

add_definitions(-DBOOST_TEST_DYN_LINK)


add_executable(BuilderUnitTest BuilderPatternExampleTest.cpp)



add_executable(UnitTest AbstractFactoryPatternExampleTest.cpp)
target_link_libraries(UnitTest
        AbstractFactoryPatternExample
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_SYSTEM_LIBRARY}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        )

set_property(TARGET UnitTest PROPERTY CXX_STANDARD 11)

target_link_libraries(BuilderUnitTest
        BuilderPatternExample
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_SYSTEM_LIBRARY}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        )

set_property(TARGET BuilderUnitTest PROPERTY CXX_STANDARD 11)


add_executable(MoonLanderAutopilot1DUnitTest MoonLanderAutopilot1DUnitTest.cpp)

target_link_libraries(MoonLanderAutopilot1DUnitTest
        MoonLanderAutopilot1D
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_SYSTEM_LIBRARY}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        )

set_property(TARGET MoonLanderAutopilot1DUnitTest PROPERTY CXX_STANDARD 11)

add_executable(MoonGravityServiceUnitTest MoonGravityServiceUnitTest.cpp)

target_link_libraries(MoonGravityServiceUnitTest
        GravityService
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_SYSTEM_LIBRARY}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        )

set_property(TARGET MoonGravityServiceUnitTest PROPERTY CXX_STANDARD 11)
