//
// Created by pavel on 15.8.18.
//

#ifndef EXAMPLECPPPROJECT01_MOONLANDERAUTOPILOT1D_H
#define EXAMPLECPPPROJECT01_MOONLANDERAUTOPILOT1D_H

namespace Botos_Example {


    class AccelerationService {
    public:
        float acceleration(float force, float weight) {
            return force / weight;
        }
    };

    class PropellantTank {
    private:
        // weight is in kgs
        float propellantWeight = 10000.0f;
    public:
        void setPropellantWeight(float propellantWeight) {
            this->propellantWeight = propellantWeight;
        };

        virtual float getPropellantWeight() {
            return propellantWeight;
        };

        PropellantTank() {};

        ~PropellantTank() {

        };

    };

    class DescentEngine {
    private:
        // in Newtons
        float thrust = 44316.0f;

        // fuel consumption in kg per second
        float consumption = 28.0f;

        PropellantTank *propellantTank;

        bool running;


    public:
        DescentEngine(PropellantTank *propellantTank, float thrust, float consumption) {
            this->propellantTank = propellantTank;
            this->thrust = thrust;
            this->consumption = consumption;
            this->running = false;
        }

        void ignite() {
            running = true;
        }

        void stop() {
            running = false;
        }

        ~DescentEngine() {
            stop();
            delete this->propellantTank;
        };

        float getThrust(float timeDelta){
            if(running) {
                propellantTank->setPropellantWeight(propellantTank->getPropellantWeight() - (timeDelta * consumption));
                return thrust;
            }
            return 0.0f;
        }
    };


    class MoonLanderAutopilot1D {
        DescentEngine *descentEngine;

    };

    class LunarModule {
    private:
        // weight is in kgs
        float moduleWeight = 4000.0f;
        float actualHeight = 0.0f;
        float actualSpeed = 0.0f;
        PropellantTank *propellantTank;
        DescentEngine *descentEngine;
        MoonLanderAutopilot1D *moonLanderAutopilot1D;

    public:
        LunarModule(DescentEngine *descentEngine, PropellantTank *propellantTank, float initialHeight){
            this->descentEngine = descentEngine;
            this->propellantTank = propellantTank;
            this->actualHeight = initialHeight;
        }

        void setMoonLanderAutopilot(MoonLanderAutopilot1D *moonLanderAutopilot1D){
            this->moonLanderAutopilot1D = moonLanderAutopilot1D;
        }

        ~LunarModule();


    };

   

}

#endif //EXAMPLECPPPROJECT01_MOONLANDERAUTOPILOT1D_H
