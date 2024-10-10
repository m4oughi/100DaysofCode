#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() = 0;
    virtual void stopEngine() = 0;
};

class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Car engine started!" << endl;
    }
    void stopEngine() override {
        cout << "Car engine stopped!" << endl;
    }
};

int main() {
    Car car;
    car.startEngine();
    car.stopEngine();
    return 0;
}
