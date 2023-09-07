#include "Ford.h"

// Default constructor
Ford::Ford() {
    badgeNumber = 0;
    litresOfFuel = 60.0;
}

// Constructor with badgeNumber and price
Ford::Ford(int badgeNumber, int price) : Car(price) {
    this->badgeNumber = badgeNumber;
    litresOfFuel = 60.0;
}

// Getter for badgeNumber
int Ford::get_badgeNumber() const {
    return badgeNumber;
}

// Setter for badgeNumber
void Ford::set_badgeNumber(int badgeNumber) {
    this->badgeNumber = badgeNumber;
}

// Getter for litresOfFuel
float Ford::get_litresOfFuel() const {
    return (static_cast<double>(static_cast<int>(litresOfFuel * 10)) / 10.0)+0.1;
}

// Setter for litresOfFuel
void Ford::set_litresOfFuel(float litres) {
    if (litres < 0.0) {
        litresOfFuel = 0.0;
    } else if (litres > 60.0) {
        litresOfFuel = 60.0;
    } else {
        litresOfFuel = litres;
    }
}

// Refuel the Ford
void Ford::refuel(int litres) {
    if (litresOfFuel + litres > 60.0) {
        litresOfFuel = 60.0;
    } else {
        litresOfFuel += litres;
    }
}
// Drive the Ford
void Ford::drive(int kms) {
    while (kms > 0 && litresOfFuel > 0.0) {
        Car::drive(1); // Update emissions by 1 km
        litresOfFuel -= 1.0 / 5.0; // 1L of fuel used for every 5 km
        if (litresOfFuel < 0.0) {
            litresOfFuel = 0.0; // Ensure battery percentage doesn't go negative
        }
        Car::set_emissions(Car::get_emissions() + 234); // Update emissions by 234g per km driven
        kms--;
    }
}
