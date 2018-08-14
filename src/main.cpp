#include <iostream>
#include "AbstractFactoryPatternExample.h"

using namespace Botos_Example;

int main() {
    std::cout << "Abstract Factory Pattern Example - START" << std::endl;
    AbstractFactoryPatternExample *carFactoryImplementation = new SkodaCarFactoryImplementation();
    std::cout << "SkodaCarFactoryImplementation produces Skoda Fabia car."
              << carFactoryImplementation->create()->drive() << std::endl;

    carFactoryImplementation = new SachsenringCarFactoryImplementation();
    std::cout << "SachsenringCarFactoryImplementation produces Trabant car."
              << carFactoryImplementation->create()->drive() << std::endl;
    std::cout << "Abstract Factory Pattern Example - FINISH\n" << std::endl;
    return 0;
}