#include "ChargeActivity.h"

bool ChargeActivity::isActivityActive() {
    return ioController.getCharging();
}

void ChargeActivity::update(float deltaTime) {
    navigationController.setVelocity(0.0f, navigationController.getCurrentAngle());

    // We stop the robot from navigating if it is charging
    if (navigationController.getTargetLocation() != LocationType::NONE) {
        navigationController.setTargetLocation(LocationType::NONE);
    }
}