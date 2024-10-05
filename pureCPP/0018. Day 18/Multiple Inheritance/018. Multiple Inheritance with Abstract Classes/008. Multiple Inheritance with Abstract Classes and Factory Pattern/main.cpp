#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() = 0;
};

class Fuelable {
public:
    virtual void refuel() = 0;
};

class Car : public Vehicle, public Fuelable {
public:
    void startEngine() override {
        cout << "Car engine started" << endl;
    }

    void refuel() override {
        cout << "Car refueled with gasoline" << endl;
    }
};

class ElectricCar : public Vehicle {
public:
    void startEngine() override {
        cout << "Electric car engine started silently" << endl;
    }
};

class VehicleFactory {
public:
    static Vehicle* createVehicle(bool isElectric) {
        if (isElectric) {
            return new ElectricCar();
        } else {
            return new Car();
        }
    }
};

int main() {
    Vehicle* myVehicle = VehicleFactory::createVehicle(false);  // Create a gasoline car
    myVehicle->startEngine();
    
    delete myVehicle;

    return 0;
}
