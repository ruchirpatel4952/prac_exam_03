#include <iostream>
#include "Tesla.h"
#include <cmath>

int main() {
    // Create a Tesla object with a model and price
    Tesla myTesla('S', 75000);

    // Access and set model and batteryPercentage
    std::cout << "Tesla Model: " << myTesla.get_model() << std::endl;
    myTesla.set_model('3');
    std::cout << "Updated Tesla Model: " << myTesla.get_model() << std::endl;

    std::cout << "Battery Percentage: " << myTesla.get_batteryPercentage() << "%" << std::endl;
    myTesla.set_batteryPercentage(110.0); // Set it to a value > 100
    std::cout << "Updated Battery Percentage: " << myTesla.get_batteryPercentage() << "%" << std::endl;

    // Charge the battery
    myTesla.chargeBattery(120); // Charge for 120 minutes
    std::cout << "Charged Battery Percentage: " << myTesla.get_batteryPercentage() << "%" << std::endl;

    // Drive the Tesla
    myTesla.set_emissions(0); // Reset emissions
    myTesla.drive(40); // Drive for 50 km
    std::cout << "Emissions after driving: " << std::round(myTesla.get_emissions()) << " g/km" << std::endl;

    return 0;
}
