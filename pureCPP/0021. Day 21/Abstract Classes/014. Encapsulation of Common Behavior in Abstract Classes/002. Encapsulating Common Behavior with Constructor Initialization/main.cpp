#include <iostream>
using namespace std;

// Abstract Base Class
class Vehicle {
protected:
    int speed;
public:
    Vehicle(int s) : speed(s) {
        cout << "Vehicle created with speed: " << speed << endl;
    }
    
    void move() {
        cout << "Moving at speed: " << speed << " km/h" << endl;
    }
    
    virtual void fuelType() = 0;  // Pure virtual function
};

// Derived Class
class Car : public Vehicle {
public:
    Car(int s) : Vehicle(s) {}

    void fuelType() override {
        cout << "This car uses petrol." << endl;
    }
};

int main() {
    Car car(120);
    car.move();        // Outputs: Moving at speed: 120 km/h
    car.fuelType();    // Outputs: This car uses petrol.

    return 0;
}
