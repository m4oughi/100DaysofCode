#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Another base class
class Vehicle {
public:
    virtual void sound() {
        cout << "Vehicle makes a noise." << endl;
    }
};

// Derived class with multiple inheritance
class BatMobile : public Animal, public Vehicle {
public:
    void sound() override {
        cout << "BatMobile makes a roaring sound." << endl;
    }

    void parentSounds() {
        Animal::sound();   // Resolves ambiguity by specifying which base class
        Vehicle::sound();
    }
};

int main() {
    BatMobile batmobile;
    batmobile.sound();       // Calls overridden function in BatMobile class
    batmobile.parentSounds(); // Calls parent class functions explicitly
    return 0;
}
