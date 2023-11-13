#if !defined(__IO_CONTROLLER_H__)
#define __IO_CONTROLLER_H__

class IOController {
public:
    void initialize();

    bool getLeftAvoidanceSensor();
    bool getRightAvoidanceSensor();
    bool getCharging();
    float getChargeBaseRelativeAngle();
    float getBatteryLevel();

    void setLeftMotorSpeed(float speed);
    void setRightMotorSpeed(float speed);
    void setVacuumPower(float power);
};

#endif