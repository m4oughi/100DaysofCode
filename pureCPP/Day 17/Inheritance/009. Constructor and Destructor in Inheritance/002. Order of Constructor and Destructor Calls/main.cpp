#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle constructor called." << endl;
    }

    ~Vehicle() {
        cout << "Vehicle destructor called." << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    Car() {
        cout << "Car constructor called." << endl;
    }

    ~Car() {
        cout << "Car destructor called." << endl;
    }
};

int main() {
    Car myCar;  // Observe the order of constructor and destructor calls
    return 0;
}
