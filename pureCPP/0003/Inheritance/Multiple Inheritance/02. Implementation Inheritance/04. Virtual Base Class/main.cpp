#include <iostream>

// Virtual base class
class Vehicle {
public:
    void start() const {
        std::cout << "Vehicle started." << std::endl;
    }
};

// Base class 1
class Engine : virtual public Vehicle {
public:
    void startEngine() const {
        std::cout << "Engine started." << std::endl;
    }
};

// Base class 2
class Wheels : virtual public Vehicle {
public:
    void roll() const {
        std::cout << "Wheels are rolling." << std::endl;
    }
};

// Derived class combining functionality
class Car : public Engine, public Wheels {
public:
    void drive() const {
        start();        // Start vehicle
        startEngine();  // Start engine
        roll();         // Roll wheels
        std::cout << "Car is driving." << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.drive();  // Output: Vehicle started. Engine started. Wheels are rolling. Car is driving.
    return 0;
}
