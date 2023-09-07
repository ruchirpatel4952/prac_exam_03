#include <iostream>
#include <cmath>
#include "Ford.h"

int main() {
    // Create a Ford object with badgeNumber and price
    Ford myFord(12345, 25000);

    // Access and set badgeNumber and litresOfFuel
    std::cout << "Ford Badge Number: " << myFord.get_badgeNumber() << std::endl;
    myFord.set_badgeNumber(54321);
    std::cout << "Updated Ford Badge Number: " << myFord.get_badgeNumber() << std::endl;

    std::cout << "Litres of Fuel: " << myFord.get_litresOfFuel() << " L" << std::endl;
    myFord.set_litresOfFuel(70.0); // Set it to a value > 60
    std::cout << "Updated Litres of Fuel: " << myFord.get_litresOfFuel() << " L" << std::endl;

    // Refuel the Ford
    myFord.refuel(10); // Refuel with 10L
    std::cout << "Refueled Litres of Fuel: " << myFord.get_litresOfFuel()<< " L" << std::endl;

    // Drive the Ford
    myFord.drive(50); // Drive for 50 km
    std::cout << "Emissions after driving: " << myFord.get_emissions() << " g/km" << std::endl;

    return 0;
}
