#include <iostream>
using namespace std;

class IAppliance {
public:
    virtual void turnOn() = 0;
    virtual void showStatus() {
        cout << "Appliance is working normally." << endl;
    }
};

class WashingMachine : public IAppliance {
public:
    void turnOn() override {
        cout << "Washing machine is now on." << endl;
    }
    void showStatus() override {
        cout << "Washing machine is washing clothes." << endl;
    }
};

class Microwave : public IAppliance {
public:
    void turnOn() override {
        cout << "Microwave is now on." << endl;
    }
};

int main() {
    WashingMachine wm;
    Microwave mw;

    wm.turnOn();       // Outputs "Washing machine is now on."
    wm.showStatus();   // Outputs "Washing machine is washing clothes."

    mw.turnOn();       // Outputs "Microwave is now on."
    mw.showStatus();   // Outputs "Appliance is working normally."
    
    return 0;
}
