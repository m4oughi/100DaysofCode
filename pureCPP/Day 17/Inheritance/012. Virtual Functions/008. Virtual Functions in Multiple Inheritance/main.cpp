#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Base class 2
class Vehicle {
public:
    virtual void sound() {
        cout << "Vehicle makes a noise." << endl;
    }
};

// Derived class with multiple inheritance overriding both virtual functions
class BatMobile : public Animal, public Vehicle {
public:
    void sound() override {
        cout << "BatMobile roars!" << endl;
    }
};

int main() {
    BatMobile batmobile;
    batmobile.sound();  // Calls BatMobile's overridden function
    return 0;
}
