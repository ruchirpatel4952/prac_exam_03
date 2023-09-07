#include "Car.h"

// Default constructor
Car::Car() {
    price = 0;
    emissions = 0;
}

// Constructor with price
Car::Car(int price) {
    this->price = price;
    emissions = 0;
}

// Getter for price
int Car::get_price() const {
    return price;
}

// Getter for emissions
int Car::get_emissions() const {
    return emissions;
}

// Setter for price
void Car::set_price(int price) {
    this->price = price;
}

// Setter for emissions
void Car::set_emissions(int emissions) {
    this->emissions = emissions;
}

// Virtual drive method
void Car::drive(int kms) {
    emissions += 20 * kms;
}
