//
// Created by pavel on 14.8.18.
//

#include "AbstractFactoryPatternExample.h"


namespace Botos_Example {

    string SkodaFabia::drive() {
        return "You are driving SKODA FABIA.";
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