#if !defined(__CHARGE_ACTIVITY_H__)
#define __CHARGE_ACTIVITY_H__

#include "Activity.h"

class ChargeActivity : public Activity {
public:
    ChargeActivity(NavigationController& navigationController, IOController& ioController)
        : Activity(navigationController, ioController) {}

    bool isActivityActive();
    void update(float deltaTime);
};

#endif