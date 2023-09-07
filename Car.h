#ifndef CAR_H
#define CAR_H

class Car {
public:
    Car();
    Car(int price);

    // Getters
    int get_price() const;
    int get_emissions() const;

    // Setters
    void set_price(int price);
    void set_emissions(int emissions);

    // Virtual drive method
    virtual void drive(int kms);

private:
    int price;
    int emissions;
};

#endif // CAR_H
