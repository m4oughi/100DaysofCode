#include <iostream>
using namespace std;

class Appliance {
public:
    void showStatus() {
        cout << "Appliance status: OK" << endl;
    }

    virtual void turnOn() = 0;  // Pure virtual function
};

class Fan : public Appliance {
public:
    void turnOn() override {
        cout << "Fan is now on." << endl;
    }
};

int main() {
    Fan fan;
    fan.showStatus();  // Outputs "Appliance status: OK"
    fan.turnOn();      // Outputs "Fan is now on."
    return 0;
}
