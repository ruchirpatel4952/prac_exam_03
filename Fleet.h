#ifndef FLEET_H
#define FLEET_H
#include "Tesla.h"
#include "Ford.h"
#include "Car.h"

class Fleet {
private:
    Car* fleet[5];

public:
    Fleet();
    Car** get_fleet();
};

#endif // FLEET_H
