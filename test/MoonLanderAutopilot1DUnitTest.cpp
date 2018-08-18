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

    AccelerationService *accelerationService = new AccelerationService();

    /**
     * When
     */
    float acceleration = accelerationService->acceleration(force, weight);

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

    AccelerationService *accelerationService = new AccelerationService();

    /**
     * When
     */
    float acceleration = accelerationService->acceleration(force, weight);

    /**
     * Then
     */
    BOOST_CHECK_EQUAL(3.16542864f, acceleration);


}

BOOST_AUTO_TEST_CASE(descending_engine_off_test_consumption) {
    /**
     * Given
     */

    PropellantTank *propellantTank = new PropellantTank();
    propellantTank->setPropellantWeight(20000.0f);
    DescentEngine *descentEngine = new DescentEngine(propellantTank, 10000.0f, 30.0f);

    /**
     * When engine is turned off it is giving no thrust and cosumes no fuel.
     */
    float thrust = descentEngine->getThrust(1.0);

    /**
     * Then
     */
    BOOST_CHECK_EQUAL(0.0, thrust);

    BOOST_CHECK_EQUAL(20000.0f, propellantTank->getPropellantWeight());

}

BOOST_AUTO_TEST_CASE(descending_engine_on_test_consumption) {
    /**
     * Given
     */

    PropellantTank *propellantTank = new PropellantTank();
    propellantTank->setPropellantWeight(20000.0f);
    DescentEngine *descentEngine = new DescentEngine(propellantTank, 10000.0f, 30.0f);

    /**
     * When engine is turned off it is giving no thrust and cosumes no fuel.
     */
    descentEngine->ignite();
    float thrust = descentEngine->getThrust(10.0);

    /**
     * Then
     */
    BOOST_CHECK_EQUAL(10000.0, thrust);

    BOOST_CHECK_EQUAL(19700.0f, propellantTank->getPropellantWeight());

}

BOOST_AUTO_TEST_CASE(moonlander_autopilot_1d_test_decelleration_1) {
    /**
     * Given
     */
    // force in Newtons
    float force = 44316.0f;

    // weight in kgs
    float lmWeight = 4000.0f;
    float fuelWeight = 10000.0f;
    float weight = lmWeight + fuelWeight;
    // in meter per second
    float initialDescentSpeed = 68.8f;

    // in meter per second square
    float moonGravity = 1.62f;
    float time = 0.0f;

    // in meters
    float heightAboveMoon = 15000.0f;


    /**
     * When
     */
    float speed = initialDescentSpeed;
    while (heightAboveMoon > 0.0f) {
        float timeFraction = 0.1f;
        time += timeFraction;
        speed = initialDescentSpeed + (moonGravity * time);
        heightAboveMoon -= speed * timeFraction;
        std::cout << "time: " << time << " speed: " << speed << " height: " << heightAboveMoon << std::endl;
    }

    /**
     * Then
     */
    BOOST_CHECK_LE(speed, 1.0f);
    BOOST_CHECK_GE(speed, 0.0f);
    BOOST_CHECK_EQUAL(0.0f, time);
    BOOST_CHECK_LE(heightAboveMoon, 0.0f);

}