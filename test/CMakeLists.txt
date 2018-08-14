set(Boost_ADDITIONAL_VERSIONS "1.65" "1.65.0")

include_directories(${TEST_SOURCE_DIR}/src
        ${Boost_INCLUDE_DIRS}
        )
add_definitions(-DBOOST_TEST_DYN_LINK)
add_executable(UnitTest AbstractFactoryPatternExampleTest.cpp)
target_link_libraries(UnitTest
        AbstractFactoryPatternExample
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_SYSTEM_LIBRARY}
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        )

set_property(TARGET UnitTest PROPERTY CXX_STANDARD 17)