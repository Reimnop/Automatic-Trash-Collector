#if !defined(__NAVIGATION_CONTROLLER_H__)
#define __NAVIGATION_CONTROLLER_H__

#include "LocationType.h"

class NavigationController {
public:
    void initialize();

    float getTargetLeftMotorSpeed();
    float getTargetRightMotorSpeed();
    float getCurrentVelocity();
    float getCurrentAngle();
    LocationType getTargetLocation();

    void setChargeBaseRelativeAngle(float angle);
    void setVelocity(float velocity, float angle);
    void setTargetLocation(LocationType location);
};

#endif