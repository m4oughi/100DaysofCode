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
    // Not implementing turnOff(), so WashingMachine remains abstract
};

int main() {
    // WashingMachine wm;  // Error: cannot declare variable 'wm' to be of abstract type 'WashingMachine'
    return 0;
}
