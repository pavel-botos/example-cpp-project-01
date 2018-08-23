set(Boost_ADDITIONAL_VERSIONS "1.65" "1.65.0")

include_directories(${PROJECT_SOURCE_DIR}/src
        ${PROJECT_SOURCE_DIR}/src/moonlander
        ${Boost_INCLUDE_DIRS}
        )

add_definitions(-DBOOST_TEST_DYN_LINK)

add_executable(PropellantTankUnitTest PropellantTankUnitTest.cpp)

target_link_libraries(
        PropellantTankUnitTest
        MoonLanderAutopilot1D
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_SYSTEM_LIBRARY}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        )

