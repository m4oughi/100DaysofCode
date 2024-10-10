#include <iostream>
using namespace std;

// Abstract Class 1
class Engine {
public:
    virtual void start() = 0;  // Pure virtual function
    virtual void stop() {      // Virtual function with default implementation
        cout << "Engine stopped!" << endl;
    }
};

// Abstract Class 2
class Wheels {
public:
    virtual void rotate() = 0;  // Pure virtual function
};

// Derived Class
class Car : public Engine, public Wheels {
public:
    void start() override {
        cout << "Car engine started!" << endl;
    }
    void rotate() override {
        cout << "Car wheels rotating!" << endl;
    }
    void stop() override {  // Override default implementation of stop()
        cout << "Car engine stopped smoothly!" << endl;
    }
};

int main() {
    Car car;
    car.start();    // Outputs: Car engine started!
    car.rotate();   // Outputs: Car wheels rotating!
    car.stop();     // Outputs: Car engine stopped smoothly!

    return 0;
}
