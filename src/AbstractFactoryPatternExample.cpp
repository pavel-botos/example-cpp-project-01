//
// Created by pavel on 14.8.18.
//

#include "AbstractFactoryPatternExample.h"

namespace Botos_Example {

SkodaFabia::SkodaFabia() {
}
SkodaFabia::~SkodaFabia() {
}

string SkodaFabia::drive() {
	return "You are driving SKODA FABIA.";
}

Trabant::Trabant(){
}


Trabant::~Trabant(){
}

string Trabant::drive() {
	return "You are driving TRABANT.";
}

Vehicle *SkodaCarFactoryImplementation::create() {
	return new SkodaFabia;
}

Vehicle *SachsenringCarFactoryImplementation::create() {
	return new Trabant;
}

}
