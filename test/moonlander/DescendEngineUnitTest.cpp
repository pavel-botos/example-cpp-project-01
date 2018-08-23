//
// Created by pavel on 23.8.18.
//
#define BOOST_TEST_MODULE PropellantTankUnitTest

#include <iostream>
#include <boost/test/unit_test.hpp>
#include "MoonLanderAutopilot1D.h"

using namespace std;
using namespace Botos_Example;

BOOST_AUTO_TEST_CASE(descent_engine_test_initialization) {
    /**
     * Given
     */
    PropellantTank *propellantTank = new PropellantTank();
    propellantTank->setPropellantWeight(6000.0f);

    DescentEngine *descentEngine;

    /**
     * When
     */
    descentEngine = new DescentEngine(propellantTank, 44000.0f, 30.0f);


    /**
     * Then
     */
    BOOST_CHECK(descentEngine);

    /**
     * cleanup
     */
    delete descentEngine;
    delete propellantTank;


}


BOOST_AUTO_TEST_CASE(descent_engine_test_clone) {
    /**
     * Given
     */
    PropellantTank *propellantTankOriginal = new PropellantTank();
    propellantTankOriginal->setPropellantWeight(7000.0f);
    DescentEngine *descentEngineOriginal = new DescentEngine(propellantTankOriginal, 44000.0f, 30.0f);

    PropellantTank *propellantTankClone = nullptr;
    DescentEngine *descentEngineClone = nullptr;

    /**
     * When
     */

    propellantTankClone = propellantTankOriginal->clone();
    descentEngineClone = descentEngineOriginal->clone(propellantTankClone);
    propellantTankClone->setPropellantWeight(5000.0f);

    float thrustFromOriginal = descentEngineOriginal->getThrust(1.0f);

    descentEngineClone->ignite();
    float thrustFromClone = descentEngineClone->getThrust(1.0f);

    /**
     * Then
     */
    BOOST_CHECK(propellantTankOriginal);
    BOOST_CHECK_EQUAL(propellantTankOriginal->getPropellantWeight(), 7000.0f);

    BOOST_CHECK(propellantTankClone);
    BOOST_CHECK_EQUAL(propellantTankClone->getPropellantWeight(), 4970.0f);

    BOOST_CHECK(descentEngineOriginal);
    BOOST_CHECK_EQUAL(thrustFromOriginal, 0.0f);

    BOOST_CHECK(descentEngineClone);
    BOOST_CHECK(descentEngineClone != descentEngineOriginal);
    BOOST_CHECK_EQUAL(thrustFromClone, 44000.0f);



    /**
     * cleanup
     */
    delete propellantTankOriginal;

    delete propellantTankClone;

    delete descentEngineOriginal;
    delete descentEngineClone;

}