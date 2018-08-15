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

BOOST_AUTO_TEST_CASE(moonlander_autopilot_1d_test_acceleration_service_1) {
    /**
     * Given
     */
     // force in Newtons
    float force = 10;

    // weight in kgs
    float weight = 10;

    /**
     * When
     */
    float acceleration = AccelerationService::acceleration(force, weight);

    /**
     * Then
     */
    BOOST_CHECK_EQUAL(1.0f, acceleration);


}

BOOST_AUTO_TEST_CASE(moonlander_autopilot_1d_test_acceleration_service_2) {
    /**
     * Given
     */
    // force in Newtons
    float force = 44316.0f;

    // weight in kgs
    float weight = 14000.0f;

    /**
     * When
     */
    float acceleration = AccelerationService::acceleration(force, weight);

    /**
     * Then
     */
    BOOST_CHECK_EQUAL(3.16542864f, acceleration);


}
