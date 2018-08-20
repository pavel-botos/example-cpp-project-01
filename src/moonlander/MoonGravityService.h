//
// Created by pavel on 20.8.18.
//

#ifndef EXAMPLECPPPROJECT01_MOONGRAVITYSERVICE_H
#define EXAMPLECPPPROJECT01_MOONGRAVITYSERVICE_H

/**
 *
 */
class MoonGravityService {
public:
    virtual void setGravityConstant(long double gravityConstant) = 0;
    virtual void setMoonWeight(long double moonWeight) = 0;
    virtual float getAcceleration(float height) = 0;
    virtual ~MoonGravityService() = 0;
};


#endif //EXAMPLECPPPROJECT01_MOONGRAVITYSERVICE_H
