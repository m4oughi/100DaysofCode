#include <iostream>
using namespace std;

// Base class
class Device {
public:
    Device() {
        cout << "Device constructor called." << endl;
    }

    ~Device() {
        cout << "Device destructor called." << endl;
    }
};

// Intermediate class with virtual inheritance
class Printer : virtual public Device {
public:
    Printer() {
        cout << "Printer constructor called." << endl;
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

    ~AllInOne() {
        cout << "AllInOne destructor called." << endl;
    }
};

int main() {
    AllInOne aioDevice;
    return 0;
}
