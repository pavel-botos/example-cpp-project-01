//
// Created by pavel on 15.8.18.
//
#define BOOST_TEST_MODULE MoonLanderAutopilot1DUnitTest

#include <iostream>
#include <boost/test/unit_test.hpp>
#include "../src/MoonLanderAutopilot1D.h"

using namespace std;
using namespace Botos_Example;

BOOST_AUTO_TEST_CASE(moonlander_autopilot_1d_test_instantiation) {
    /**
     * Given
     */

    MoonLanderAutopilot1D *moonLanderAutopilot1D;

    /**
     * When
     */
    moonLanderAutopilot1D = new MoonLanderAutopilot1D();



    /**
     * Then
     */
    BOOST_CHECK(moonLanderAutopilot1D);


}
