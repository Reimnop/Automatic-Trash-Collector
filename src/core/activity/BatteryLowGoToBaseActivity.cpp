#include "BatteryLowGoToBaseActivity.h"

bool BatteryLowGoToBaseActivity::isActivityActive() {
    return ioController.getBatteryLevel() < 0.2f;
}

void BatteryLowGoToBaseActivity::update(float deltaTime) {
    // Turn off vacuum since we're going to the base
    ioController.setVacuumPower(0.0f);

    if (navigationController.getTargetLocation() != LocationType::CHARGE_BASE) {
        navigationController.setTargetLocation(LocationType::CHARGE_BASE);
    }
}