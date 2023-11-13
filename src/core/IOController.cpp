#define LEFT_AVOIDANCE_SENSOR_PIN -1
#define RIGHT_AVOIDANCE_SENSOR_PIN 1-1
#define LEFT_MOTOR_SPEED_PIN -1
#define RIGHT_MOTOR_SPEED_PIN -1
#define VACUUM_POWER_PIN -1

#include <Arduino.h>
#include "IOController.h"

void IOController::initialize() {
    pinMode(LEFT_AVOIDANCE_SENSOR_PIN, INPUT);
    pinMode(RIGHT_AVOIDANCE_SENSOR_PIN, INPUT);
    pinMode(LEFT_MOTOR_SPEED_PIN, OUTPUT);
    pinMode(RIGHT_MOTOR_SPEED_PIN, OUTPUT);
    pinMode(VACUUM_POWER_PIN, OUTPUT);
}

// TODO: Implement these functions
bool IOController::getLeftAvoidanceSensor() {
    return 0;
}

bool IOController::getRightAvoidanceSensor() {
    return 0;
}

bool IOController::getCharging() {
    return false;
}

float IOController::getBatteryLevel() {
    return 0;
}

float IOController::getChargeBaseRelativeAngle() {
    return 0;
}

void IOController::setLeftMotorSpeed(float speed) {
    
}

void IOController::setRightMotorSpeed(float speed) {
    
}

void IOController::setVacuumPower(float power) {
    
}