#include "Tesla.h"

// Default constructor
Tesla::Tesla() {
    model = ' ';
    batteryPercentage = 100.0;
}

// Constructor with model and price
Tesla::Tesla(char model, int price) : Car(price) {
    this->model = model;
    batteryPercentage = 100.0;
}

// Getter for model
char Tesla::get_model() const {
    return model;
}

// Setter for model
void Tesla::set_model(char model) {
    this->model = model;
}

// Getter for batteryPercentage
float Tesla::get_batteryPercentage() const {
    return (static_cast<double>(static_cast<int>(batteryPercentage * 10)) / 10.0)+0.1;
}

// Setter for batteryPercentage
void Tesla::set_batteryPercentage(float percentage) {
    if (percentage < 0.0) {
        batteryPercentage = 0.0;
    } else if (percentage > 100.0) {
        batteryPercentage = 100.0;
    } else {
        batteryPercentage = percentage;
    }
}

// Charge the battery
void Tesla::chargeBattery(int mins) {
    float chargePercentage = mins * 0.5; // 0.5% added per minute
    if (batteryPercentage + chargePercentage > 100.0) {
        batteryPercentage = 100.0;
    } else {
        batteryPercentage += chargePercentage;
    }
}

// Drive the Tesla
void Tesla::drive(int kms) {
    while (kms > 0 && batteryPercentage > 0.0) {
        Car::drive(1); // Update emissions by 1 km
        batteryPercentage -= 1.0 / 5.0; // 1% battery used for every 5 km
        if (batteryPercentage < 0.0) {
            batteryPercentage = 0.0; // Ensure battery percentage doesn't go negative
        }
        Car::set_emissions(Car::get_emissions() + 74); // Update emissions by 74g per km driven
        kms--;
    }
}
