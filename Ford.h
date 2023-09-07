#ifndef FORD_H
#define FORD_H
#include "Car.h"

class Ford : public Car {
public:
    Ford();
    Ford(int badgeNumber, int price);

    // Getters and setters for badgeNumber and litresOfFuel
    int get_badgeNumber() const;
    void set_badgeNumber(int badgeNumber);
    float get_litresOfFuel() const;
    void set_litresOfFuel(float litres);

    // Methods
    void refuel(int litres);
    void drive(int kms);

private:
    int badgeNumber;
    double litresOfFuel;
};

#endif // FORD_H
