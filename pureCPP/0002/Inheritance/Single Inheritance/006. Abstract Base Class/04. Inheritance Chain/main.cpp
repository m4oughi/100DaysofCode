#include <iostream>
using namespace std;

// Abstract base class
class Appliance {
public:
    virtual void turnOn() = 0;  // Pure virtual function
};

// Intermediate derived class
class KitchenAppliance : public Appliance {
public:
    void turnOn() override {
        cout << "Kitchen appliance turned on." << endl;
    }
};

// Final derived class
class Blender : public KitchenAppliance {
public:
    void turnOn() override {  // Override the function again
        cout << "Blender whirring!" << endl;
    }
};

int main() {
    Blender blender;
    blender.turnOn();  // Calls overridden function in Blender

    return 0;
}