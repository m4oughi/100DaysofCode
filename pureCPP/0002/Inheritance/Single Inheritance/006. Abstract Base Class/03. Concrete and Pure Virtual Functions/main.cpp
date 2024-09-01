#include <iostream>
using namespace std;

// Abstract base class
class Vehicle {
public:
    void start() {  // Concrete function
        cout << "Vehicle started." << endl;
    }

    virtual void honk() = 0;  // Pure virtual function
};

// Derived class
class Car : public Vehicle {
public:
    void honk() override {  // Override the pure virtual function
        cout << "Car horn: Beep Beep!" << endl;
    }
};

int main() {
    Car car;
    car.start();  // Calls inherited function from Vehicle
    car.honk();   // Calls overridden function in Car

    return 0;
}