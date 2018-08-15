//
// Created by pavel on 14.8.18.
//

#define BOOST_TEST_MODULE AbstractFactoryPatternExample

#include <iostream>
#include <boost/test/unit_test.hpp>
#include "../src/AbstractFactoryPatternExample.h"

using namespace std;
using namespace Botos_Example;

BOOST_AUTO_TEST_CASE(abstract_factory_example_test) {
    /**
     * Given
     */
    SkodaCarFactoryImplementation skodaCarFactoryImplementation;
    SachsenringCarFactoryImplementation sachsenringCarFactoryImplementation;

    /**
     * When
     */
     Vehicle *skodaFabia = skodaCarFactoryImplementation.create();
     Vehicle *trabant = sachsenringCarFactoryImplementation.create();

    /**
     * Then
     */
    BOOST_CHECK_EQUAL("You are driving SKODA FABIA.", skodaFabia->drive());
    BOOST_CHECK_EQUAL("You are driving TRABANT.", trabant->drive());

}

