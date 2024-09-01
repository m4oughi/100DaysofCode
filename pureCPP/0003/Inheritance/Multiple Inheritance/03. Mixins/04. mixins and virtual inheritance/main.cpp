#include <iostream>

// Base class with implementation
class Device {
public:
    virtual void start() const {
        std::cout << "Device started." << std::endl;
    }
};

// Mixin 1
class Printer : virtual public Device {
public:
    void print() const {
        std::cout << "Printing..." << std::endl;
    }
};

// Mixin 2
class Scanner : virtual public Device {
public:
    void scan() const {
        std::cout << "Scanning..." << std::endl;
    }
};

// Derived class combining mixins
class MultifunctionDevice : public Printer, public Scanner {
public:
    void operate() const {
        start();  // Device start function
        print();  // Printer function
        scan();   // Scanner function
        std::cout << "Multifunction device is operating." << std::endl;
    }
};

int main() {
    MultifunctionDevice mfd;
    mfd.operate();  // Output: Device started. Printing... Scanning... Multifunction device is operating.
    return 0;
}
