#include <iostream>
#include "Fleet.h"

int main() {
    // Create a Fleet object
    Fleet myFleet;

    // Get the array of pointers to Car objects from the Fleet
    Car** fleetArray = myFleet.get_fleet();

    // Display information about the cars in the fleet
    for (int i = 0; i < 5; i++) {
        Car* car = fleetArray[i];
        std::cout << "Car " << i + 1 << " - Price: $" << car->get_price() << std::endl;
    }

    // Clean up memory for the dynamically allocated Car objects
    for (int i = 0; i < 5; i++) {
        delete fleetArray[i];
    }

    return 0;
}
