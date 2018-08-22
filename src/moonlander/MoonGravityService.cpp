//
// Created by pavel on 20.8.18.
//

#include <math.h>
#include "GravityService.h"

namespace Botos_Example {

    MoonGravityService::MoonGravityService()
    {
    }
    
    float MoonGravityService::getAcceleration(float height){
        return gravitionalConstant * moonWeight / pow(moonRadius + height, 2.0);        
    }
    
    MoonGravityService::~MoonGravityService()
    {
    }


}
