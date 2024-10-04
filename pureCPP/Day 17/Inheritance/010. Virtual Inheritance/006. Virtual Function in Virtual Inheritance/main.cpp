#include <iostream>
using namespace std;

// Base class
class Device {
public:
    Device() {
        cout << "Device constructor called." << endl;
    }

    virtual void showDeviceType() {
        cout << "Generic Device" << endl;
    }

    virtual ~Device() {
        cout << "Device destructor called." << endl;
    }
};

// Intermediate class with virtual inheritance
class Printer : virtual public Device {
public:
    Printer() {
        cout << "Printer constructor called." << endl;
    }

    void showDeviceType() override {
        cout << "This is a Printer." << endl;
    }

    ~Printer() {
        cout << "Printer destructor called." << endl;
    }
};

// Another intermediate class with virtual inheritance
class Scanner : virtual public Device {
public:
    Scanner() {
        cout << "Scanner constructor called." << endl;
    }

    void showDeviceType() override {
        cout << "This is a Scanner." << endl;
    }

    ~Scanner() {
        cout << "Scanner destructor called." << endl;
    }
};

// Derived class
class AllInOne : public Printer, public Scanner {
public:
    AllInOne() {
        cout << "AllInOne constructor called." << endl;
    }

    void showDeviceType() override {
        cout << "This is an All-in-One device." << endl;
    }

    ~AllInOne() {
        cout << "AllInOne destructor called." << endl;
    }
};

int main() {
    Device* device = new AllInOne();
    device->showDeviceType();  // Demonstrates virtual function in action
    delete device;
    return 0;
}
