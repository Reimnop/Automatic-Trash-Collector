#include "AvoidObstacleActivity.h"

bool AvoidObstacleActivity::isActivityActive() {
    return ioController.getLeftAvoidanceSensor() || ioController.getRightAvoidanceSensor();
}

void AvoidObstacleActivity::update(float deltaTime) {
    if (ioController.getLeftAvoidanceSensor()) {
        // Move right
        float currentVelocity = navigationController.getCurrentVelocity();
        float currentAngle = navigationController.getCurrentAngle();
        navigationController.setVelocity(currentVelocity, currentAngle + 0.1f * deltaTime);
    } else if (ioController.getRightAvoidanceSensor()) {
        // Move left
        float currentVelocity = navigationController.getCurrentVelocity();
        float currentAngle = navigationController.getCurrentAngle();
        navigationController.setVelocity(currentVelocity, currentAngle - 0.1f * deltaTime);
    }
}