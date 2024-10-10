#include <iostream>
using namespace std;

// Abstract Base Class
class Vehicle {
protected:
    string name;
public:
    Vehicle(string n) : name(n) {
        cout << "Vehicle constructor: " << name << " created!" << endl;
    }
    
    virtual ~Vehicle() {
        cout << "Vehicle destructor: " << name << " destroyed!" << endl;
    }
    
    virtual void drive() = 0;  // Pure virtual function
};

// Derived Class
class Car : public Vehicle {
public:
    Car(string n) : Vehicle(n) {
        cout << "Car constructor called!" << endl;
    }
    
    ~Car() {
        cout << "Car destructor called!" << endl;
    }
    
    void drive() override {
        cout << name << " is driving!" << endl;
    }
};

int main() {
    Vehicle* vehicle = new Car("Sports Car");
    vehicle->drive();  // Outputs: Sports Car is driving!
    delete vehicle;    // Outputs destructors in reverse order: Car, Vehicle

    return 0;
}
