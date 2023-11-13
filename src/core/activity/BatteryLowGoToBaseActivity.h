#if !defined(__BATTERY_LOW_GO_TO_BASE_ACTIVITY_H__)
#define __BATTERY_LOW_GO_TO_BASE_ACTIVITY_H__

#include "Activity.h"

class BatteryLowGoToBaseActivity : public Activity {
public:
    BatteryLowGoToBaseActivity(NavigationController& navigationController, IOController& ioController)
        : Activity(navigationController, ioController) {}

    bool isActivityActive();
    void update(float deltaTime);
};

#endif