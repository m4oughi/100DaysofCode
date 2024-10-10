#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void drive() = 0;
    virtual ~Vehicle() {
        cout << "Vehicle destroyed." << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() override {
        cout << "Driving a car." << endl;
    }
    ~Car() {
        cout << "Car destroyed." << endl;
    }
};

int main() {
    Vehicle* vehicle = new Car();
    vehicle->drive();
    delete vehicle;  // Calls virtual destructor
    return 0;
}
