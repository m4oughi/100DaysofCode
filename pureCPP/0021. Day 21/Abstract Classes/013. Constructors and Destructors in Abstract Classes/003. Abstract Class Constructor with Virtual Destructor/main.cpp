#include <iostream>
using namespace std;

// Abstract Base Class
class Device {
public:
    Device() {
        cout << "Device constructor called!" << endl;
    }
    
    virtual ~Device() {
        cout << "Device destructor called!" << endl;
    }
    
    virtual void start() = 0;  // Pure virtual function
};

// Derived Class
class Phone : public Device {
public:
    Phone() {
        cout << "Phone constructor called!" << endl;
    }
    
    ~Phone() {
        cout << "Phone destructor called!" << endl;
    }
    
    void start() override {
        cout << "Phone is starting!" << endl;
    }
};

int main() {
    Device* device = new Phone();
    device->start();  // Outputs: Phone is starting!
    delete device;    // Outputs destructors in reverse order: Phone, Device

    return 0;
}
