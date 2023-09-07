#include <iostream>
#include "Car.h"

int main() {
    // Create a Car object with a price
    Car myCar(20000);

    // Access and set price
    std::cout << "Car price: $" << myCar.get_price() << std::endl;
    myCar.set_price(25000);
    std::cout << "Updated car price: $" << myCar.get_price() << std::endl;

    // Drive the car and update emissions
    myCar.drive(10); // Driven for 10 kms
    std::cout << "Emissions after driving: " << myCar.get_emissions() << " g/km" << std::endl;

    return 0;
}
