#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};

class WashingMachine : public Appliance {
public:
    void turnOn() override {
        cout << "Washing machine on." << endl;
    }
    void turnOff() override {
        cout << "Washing machine off." << endl;
    }
};

int main() {
    WashingMachine wm;  // Now it works fine since all pure virtual functions are implemented
    wm.turnOn();
    wm.turnOff();
    return 0;
}
