#include <Arduino.h>

#include "core/IOController.h"
#include "core/NavigationController.h"
#include "core/activity/Activity.h"
#include "core/activity/ChargeActivity.h"
#include "core/activity/AvoidObstacleActivity.h"
#include "core/activity/BatteryLowGoToBaseActivity.h"
#include "core/activity/CollectTrashActivity.h"

IOController ioController;
NavigationController navigationController;

Activity* activities[] = {
    new ChargeActivity(navigationController, ioController),
    new AvoidObstacleActivity(navigationController, ioController),
    new BatteryLowGoToBaseActivity(navigationController, ioController),
    new CollectTrashActivity(navigationController, ioController)
};

float time = 0.0f;

void setup() {
    ioController.initialize();
    navigationController.initialize();
}

void loop() {
    float currentTime = millis() / 1000.0f;
    float deltaTime = currentTime - time;

    float chargeBaseRelativeAngle = ioController.getChargeBaseRelativeAngle();
    navigationController.setChargeBaseRelativeAngle(chargeBaseRelativeAngle);

    for (size_t i = 0; i < sizeof(activities) / sizeof(activities[0]); i++) {
        if (activities[i]->isActivityActive()) {
            activities[i]->update(deltaTime);
            break;
        }
    }

    // Get sensor data
    float leftMotorSpeed = navigationController.getTargetLeftMotorSpeed();
    float rightMotorSpeed = navigationController.getTargetRightMotorSpeed();

    // Set them to their consumers
    ioController.setLeftMotorSpeed(leftMotorSpeed);
    ioController.setRightMotorSpeed(rightMotorSpeed);

    // Delay to save battery
    delay(15);

    // Set timing
    time = currentTime;
}