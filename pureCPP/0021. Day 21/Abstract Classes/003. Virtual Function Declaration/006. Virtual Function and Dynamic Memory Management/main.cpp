#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void turnOn() {
        cout << "Appliance is on." << endl;
    }
    virtual ~Appliance() {
        cout << "Appliance destroyed." << endl;
    }
};

class WashingMachine : public Appliance {
public:
    void turnOn() override {
        cout << "Washing machine is washing clothes." << endl;
    }
    ~WashingMachine() {
        cout << "Washing machine destroyed." << endl;
    }
};

int main() {
    Appliance* appliance = new WashingMachine();
    appliance->turnOn();  // Outputs "Washing machine is washing clothes."
    delete appliance;     // Outputs "Washing machine destroyed." followed by "Appliance destroyed."
    return 0;
}
