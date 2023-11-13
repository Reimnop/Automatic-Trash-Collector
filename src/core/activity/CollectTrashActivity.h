#if !defined(__COLLECT_TRASH_ACTIVITY_H__)
#define __COLLECT_TRASH_ACTIVITY_H__

#include "Activity.h"

class CollectTrashActivity : public Activity {
public:
    CollectTrashActivity(NavigationController& navigationController, IOController& ioController)
        : Activity(navigationController, ioController) {}

    bool isActivityActive();
    void update(float deltaTime);
};

#endif