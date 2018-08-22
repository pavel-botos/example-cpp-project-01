//
// Created by pavel on 20.8.18.
//

#ifndef EXAMPLECPPPROJECT01_MOONGRAVITYSERVICE_H
#define EXAMPLECPPPROJECT01_MOONGRAVITYSERVICE_H

namespace Botos_Example {
    
    // Gravitional Constant in N * kg –square * m square.
    const double gravitionalConstant = 6.674e-11;
    
    // Approximate Moon Weight in kgs
    const double moonWeight = 7.3476e22;
    
    // Approximate Moon Radius in meters
    const double moonRadius = 1737400.0;
    
    
    
    /**
    * GravityService is providing some mathematical model of the gravity well.
    */
    class GravityService {
    public:                
        virtual float getAcceleration(float height) = 0;
        virtual ~GravityService(){};
    };
    
    class MoonGravityService: public GravityService{
    public:
        MoonGravityService();
        float getAcceleration(float height) override;
        ~MoonGravityService();
    };

}
#endif //EXAMPLECPPPROJECT01_MOONGRAVITYSERVICE_H
