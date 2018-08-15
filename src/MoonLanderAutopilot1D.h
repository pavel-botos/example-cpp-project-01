//
// Created by pavel on 15.8.18.
//

#ifndef EXAMPLECPPPROJECT01_MOONLANDERAUTOPILOT1D_H
#define EXAMPLECPPPROJECT01_MOONLANDERAUTOPILOT1D_H

namespace Botos_Example {


    class AccelerationService {
    public:
        static float acceleration(float force, float weight) {
            return force/weight;
        }
    };

    class PropellantTank {
        // weight is in kgs
        float propellantWeight = 10000.0f;
    };

    class DescentEngine {
    private:
        // in Newtons
        float thrust = 44316.0f;

        // fuel consuption in kg per second
        float consuption = 28.0f;

    public:
        /**
         * @param time
         * @return consumed fuel in kgs
         */
        virtual float ignite(float time);
        virtual ~DescentEngine();
    };


    class LunarModule {
    private:
        // weight is in kgs
        float moduleWeight = 4000.0f;


    };


    class MoonLanderAutopilot1D {

    };

}

#endif //EXAMPLECPPPROJECT01_MOONLANDERAUTOPILOT1D_H
