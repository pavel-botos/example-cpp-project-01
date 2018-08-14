//
// Created by pavel on 14.8.18.
//

#ifndef EXAMPLECPPPROJECT01_BUILDEREXAMPLE_H
#define EXAMPLECPPPROJECT01_BUILDEREXAMPLE_H

namespace Botos_Example {

    class SomeComplicatedClass {
    private:
        int counter;
        float value;
    public:
        void setCounter(int value){
            counter = value;
        }

        int getCounter(){
            return counter;
        }


    };

    class BuilderPatternExample {

    };
}


#endif //EXAMPLECPPPROJECT01_BUILDEREXAMPLE_H
