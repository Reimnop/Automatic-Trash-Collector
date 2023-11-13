#if !defined(__AVOID_OBSTACLE_ACTIVITY_H__)
#define __AVOID_OBSTACLE_ACTIVITY_H__

#include "Activity.h"

class AvoidObstacleActivity : public Activity {
public:
    AvoidObstacleActivity(NavigationController& navigationController, IOController& ioController)
        : Activity(navigationController, ioController) {}

    bool isActivityActive();
    void update(float deltaTime);
};

#endif