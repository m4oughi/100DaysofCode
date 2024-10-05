#include <iostream>
using namespace std;

class Copyable {
public:
    virtual void copy() = 0;  // Interface for copying functionality
};

class Networkable {
public:
    virtual void connectToNetwork() = 0;  // Interface for network connectivity
};

class CloudPrinter : public Copyable, public Networkable {
public:
    void copy() override {
        cout << "Copying document to cloud" << endl;
    }

    void connectToNetwork() override {
        cout << "Connecting printer to the cloud network" << endl;
    }
};

class USBPrinter : public Copyable {
public:
    void copy() override {
        cout << "Copying document via USB" << endl;
    }
};

int main() {
    CloudPrinter cloudPrinter;
    USBPrinter usbPrinter;

    cloudPrinter.copy();
    cloudPrinter.connectToNetwork();

    usbPrinter.copy();
    return 0;
}
