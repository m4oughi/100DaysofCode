#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle started." << endl;
    }

    virtual ~Vehicle() {
        cout << "Vehicle destroyed." << endl;
    }
};

// Intermediate derived class
class Car : public Vehicle {
public:
    void start() override {
        cout << "Car started." << endl;
    }

    virtual ~Car() {
        cout << "Car destroyed." << endl;
    }
};

// Final derived class
class SportsCar : public Car {
public:
    void start() override {
        cout << "Sports car started with a roar!" << endl;
    }

    ~SportsCar() {
        cout << "Sports car destroyed." << endl;
    }
};

int main() {
    Vehicle* vehiclePtr = new SportsCar();  // Base class pointer to FinalDerived object
    vehiclePtr->start();  // Calls SportsCar's start()

    delete vehiclePtr;  // Ensures proper cleanup
    return 0;
}