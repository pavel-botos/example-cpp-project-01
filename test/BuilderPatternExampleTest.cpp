//
// Created by pavel on 14.8.18.
//
#define BOOST_TEST_MODULE BuilderPatternExampleTest

#include <iostream>
#include <boost/test/unit_test.hpp>
#include "../src/BuilderPatternExample.cpp"

using namespace std;
using namespace Botos_Example;

BOOST_AUTO_TEST_CASE(builder_example_test) {
    /**
     * Given
     */
    BuilderPatternExample builderPatternExample;

    /**
     * When
     */

    SomeComplicatedClass *someComplicatedClass = builderPatternExample.setCounter(10)->setValue(100.9f)->build();

    /**
     * Then
     */
     BOOST_CHECK(someComplicatedClass);
     BOOST_CHECK_EQUAL(10, someComplicatedClass->getCounter());
     BOOST_CHECK_EQUAL(100.9f, someComplicatedClass->getValue());


}

