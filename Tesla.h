#ifndef TESLA_H
#define TESLA_H
#include "Car.h"

class Tesla : public Car {
public:
    Tesla();
    Tesla(char model, int price);

    // Getters and setters for model and batteryPercentage
    char get_model() const;
    void set_model(char model);
    float get_batteryPercentage() const;
    void set_batteryPercentage(float percentage);

    // Methods
    void chargeBattery(int mins);
    void drive(int kms);

private:
    char model;
    float batteryPercentage;
};

#endif // TESLA_H
