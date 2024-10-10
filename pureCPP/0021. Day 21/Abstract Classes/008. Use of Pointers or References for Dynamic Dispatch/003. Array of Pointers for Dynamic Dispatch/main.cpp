#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() = 0;
};

class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Car engine starting..." << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    void startEngine() override {
        cout << "Motorcycle engine starting..." << endl;
    }
};

int main() {
    Vehicle* vehicles[2];  // Array of base class pointers

    vehicles[0] = new Car();
    vehicles[1] = new Motorcycle();

    for (int i = 0; i < 2; ++i) {
        vehicles[i]->startEngine();  // Dynamic dispatch
    }

    delete vehicles[0];
    delete vehicles[1];

    return 0;
}
