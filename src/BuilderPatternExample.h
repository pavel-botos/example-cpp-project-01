//
// Created by pavel on 14.8.18.
//

#ifndef EXAMPLECPPPROJECT01_BUILDEREXAMPLE_H
#define EXAMPLECPPPROJECT01_BUILDEREXAMPLE_H

namespace Botos_Example {

    class SomeComplicatedClass {
    private:

        int counter = 0;
        float value;



    public:
        explicit SomeComplicatedClass(float value) {
            this->value = value;
        }

        void setCounter(int counter) {
            this->counter = counter;
        }

        int getCounter() {
            return counter;
        }

        void setValue(float value) {
            this->counter++;
            this->value = value;
        }

        float getValue() {
            return value;
        }


    };


    class BuilderPatternExample {
    private:
        SomeComplicatedClass *someComplicatedClass;
    public:
        BuilderPatternExample(){
            this->someComplicatedClass = new SomeComplicatedClass(0.0);
        }

        BuilderPatternExample *setCounter(int counter) {
            this->someComplicatedClass->setCounter(counter);
            return this;
        }

        BuilderPatternExample *setValue(float value){
            int previousCounter = this->someComplicatedClass->getCounter();
            this->someComplicatedClass->setValue(value);
            this->someComplicatedClass->setCounter(previousCounter);
            return this;
        }

        SomeComplicatedClass *build(){
            return this->someComplicatedClass;
        }
    };

}


#endif //EXAMPLECPPPROJECT01_BUILDEREXAMPLE_H
