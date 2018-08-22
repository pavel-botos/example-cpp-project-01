//
// Created by pavel on 15.8.18.
//
#define BOOST_TEST_MODULE MoonGravityServiceUnitTest

#include <iostream>
#include <boost/test/unit_test.hpp>
#include "../src/moonlander/GravityService.h"

using namespace std;
using namespace Botos_Example;


BOOST_AUTO_TEST_CASE(moon_gravity_service_test_on_the_surface) {
    /**
     * Given
     */
    float height = 0.0f;
    GravityService *gravityService = new MoonGravityService();
    
    
    /**
     * When
     * 
     */
    float gravitationalAcceleration = gravityService->getAcceleration(height);
    
    /**
     * Then
     */
    BOOST_CHECK_EQUAL(gravitationalAcceleration, 1.62454622549737f);

}

BOOST_AUTO_TEST_CASE(moon_gravity_service_test_100km_above_the_surface) {
    /**
     * Given
     */
    float height = 100000.0f;
    GravityService *gravityService = new MoonGravityService();
    
    
    /**
     * When
     * 
     */
    float gravitationalAcceleration = gravityService->getAcceleration(height);
    
    /**
     * Then
     */
    BOOST_CHECK_EQUAL(gravitationalAcceleration, 1.45252728f);

}
