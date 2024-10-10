#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual ~Appliance() {}
};

class KitchenAppliance : public Appliance {
public:
    void turnOn() override {
        cout << "Kitchen appliance is on." << endl;
    }
    void turnOff() override {
        cout << "Kitchen appliance is off." << endl;
    }
};

class Blender : public KitchenAppliance {
public:
    void turnOn() override {
        cout << "Blender is blending." << endl;
    }
    void turnOff() override {
        cout << "Blender has stopped." << endl;
    }
};

int main() {
    Appliance* appliance = new Blender();
    appliance->turnOn();
    appliance->turnOff();
    delete appliance;
    return 0;
}
