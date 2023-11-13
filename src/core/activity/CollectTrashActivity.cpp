#include "CollectTrashActivity.h"

bool CollectTrashActivity::isActivityActive() {
    return true;
}

void CollectTrashActivity::update(float deltaTime) {
    // Move forward
    navigationController.setVelocity(1.0f, navigationController.getCurrentAngle());

    // Set maximum vacuum power
    ioController.setVacuumPower(1.0f);
}