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
        string drive() override;
    };

    class Trabant : public Vehicle {
    public:
        string drive() override;
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
        Vehicle *create() override;
    };

    /**
     * Sachsenring Car Factory Implementation.
     */
    class SachsenringCarFactoryImplementation : public AbstractFactoryPatternExample {
    public:
        Vehicle *create() override;
    };

}
#endif //EXAMPLECPPPROJECT01_ABSTRACTFACTORYPATTERNEXAMPLE_H
