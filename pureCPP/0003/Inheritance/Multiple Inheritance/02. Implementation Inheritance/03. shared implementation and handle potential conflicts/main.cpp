#include <iostream>

// Base class 1 with implementation
class Engine {
public:
    void startEngine() const {
        std::cout << "Engine started." << std::endl;
    }
};

// Base class 2 with implementation
class Wheels {
public:
    void roll() const {
        std::cout << "Wheels are rolling." << std::endl;
    }
};

// Base class 3 with implementation
class Lights {
public:
    void turnOnLights() const {
        std::cout << "Lights are on." << std::endl;
    }
};

// Derived class combining functionality
class Car : public Engine, public Wheels, public Lights {
public:
    void drive() const {
        startEngine();
        roll();
        turnOnLights();
        std::cout << "Car is driving." << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.drive();  // Output: Engine started. Wheels are rolling. Lights are on. Car is driving.
    return 0;
}
