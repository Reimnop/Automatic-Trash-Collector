#if !defined(__ACTIVITY_H__)
#define __ACTIVITY_H__

#include "../IOController.h"
#include "../NavigationController.h"

class Activity {
public:
    Activity(NavigationController& navigationController, IOController& ioController)
        : navigationController(navigationController), ioController(ioController) {}

    virtual bool isActivityActive() = 0;
    virtual void update(float deltaTime) = 0;
protected:
    NavigationController& navigationController;
    IOController& ioController;
};

#endif