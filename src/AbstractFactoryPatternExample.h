//
// Created by pavel on 14.8.18.
//
#include <iostream>

#ifndef EXAMPLECPPPROJECT01_ABSTRACTFACTORYPATTERNEXAMPLE_H
#define EXAMPLECPPPROJECT01_ABSTRACTFACTORYPATTERNEXAMPLE_H
using namespace std;

namespace Botos_Example {

    /**
     * Common Vehicle interface
     */
    class Vehicle {
    public:
        virtual string drive() = 0;
    };

    class SkodaFabia : public Vehicle {
    public:
        string drive();
    };

    class Trabant : public Vehicle {
    public:
        string drive();
    };

    /**
     * Abstract Factory Pattern example.
     */
    class AbstractFactoryPatternExample {
    public:
        virtual Vehicle *create() = 0;
    };

    /**
     * Skoda Car Factory Implementation.
     */
    class SkodaCarFactoryImplementation : public AbstractFactoryPatternExample {
    public:
        Vehicle *create();
    };

    /**
     * Sachsenring Car Factory Implementation.
     */
    class SachsenringCarFactoryImplementation : public AbstractFactoryPatternExample {
    public:
        Vehicle *create();
    };

}
#endif //EXAMPLECPPPROJECT01_ABSTRACTFACTORYPATTERNEXAMPLE_H
