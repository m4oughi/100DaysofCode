#include <iostream>
using namespace std;

// Abstract Base Class
class Appliance {
public:
    void powerOn() {
        cout << "Powering on the appliance..." << endl;
    }

    virtual void run() = 0;
    virtual ~Appliance() = default;
};

// Intermediate Abstract Class
class KitchenAppliance : public Appliance {
public:
    void prepare() {
        cout << "Preparing the kitchen appliance for use." << endl;
    }
};

// Derived Class
class Microwave : public KitchenAppliance {
public:
    void run() override {
        cout << "Microwave is running." << endl;
    }
};

int main() {
    Microwave microwave;
    microwave.powerOn();   // Outputs: Powering on the appliance...
    microwave.prepare();   // Outputs: Preparing the kitchen appliance for use.
    microwave.run();       // Outputs: Microwave is running.

    return 0;
}
