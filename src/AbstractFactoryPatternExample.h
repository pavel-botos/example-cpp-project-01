//
// Created by pavel on 14.8.18.
//
#include <stdio.h>
#include <stdlib.h>
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
	Vehicle() {
	}
	virtual string drive() = 0;
	virtual ~Vehicle() {
	}
};

class SkodaFabia: public Vehicle {
public:
	SkodaFabia();
	string drive() override;
	~SkodaFabia();
};

class Trabant: public Vehicle {
public:
	Trabant();
	string drive() override;
	~Trabant();
};

/**
 * Abstract Factory Pattern example.
 */
class AbstractFactoryPatternExample {
public:
	virtual Vehicle *create() = 0;
	virtual ~AbstractFactoryPatternExample() {
	}
};

/**
 * Skoda Car Factory Implementation.
 */
class SkodaCarFactoryImplementation: public AbstractFactoryPatternExample {
public:
	Vehicle *create() override;
};

/**
 * Sachsenring Car Factory Implementation.
 */
class SachsenringCarFactoryImplementation: public AbstractFactoryPatternExample {
public:
	Vehicle *create() override;
};

}
#endif //EXAMPLECPPPROJECT01_ABSTRACTFACTORYPATTERNEXAMPLE_H
