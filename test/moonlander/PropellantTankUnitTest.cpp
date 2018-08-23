//
// Created by pavel on 23.8.18.
//
#define BOOST_TEST_MODULE PropellantTankUnitTest

#include <iostream>
#include <boost/test/unit_test.hpp>
#include "MoonLanderAutopilot1D.h"

using namespace std;
using namespace Botos_Example;

BOOST_AUTO_TEST_CASE(propellant_tank_test_initialization) {
    /**
     * Given
     */
    PropellantTank *propellantTank;

    /**
     * When
     */
    propellantTank = new PropellantTank();


    /**
     * Then
     */
    BOOST_CHECK(propellantTank);

    /**
     * cleanup
     */
    delete propellantTank;

}


BOOST_AUTO_TEST_CASE(propellant_tank_test_clone) {
    /**
     * Given
     */
    PropellantTank *propellantTankOriginal = new PropellantTank();
    propellantTankOriginal->setPropellantWeight(5000.0f);

    PropellantTank *propellantTankClone = nullptr;

    /**
     * When
     */

    propellantTankClone = propellantTankOriginal->clone();

    /**
     * Then
     */
    BOOST_CHECK(propellantTankOriginal);

    BOOST_CHECK(propellantTankClone);

    BOOST_CHECK(propellantTankOriginal != propellantTankClone);

    BOOST_CHECK_EQUAL(propellantTankClone->getPropellantWeight(), 5000.0f);

    /**
     * cleanup
     */
    delete propellantTankOriginal;

    delete propellantTankClone;

}