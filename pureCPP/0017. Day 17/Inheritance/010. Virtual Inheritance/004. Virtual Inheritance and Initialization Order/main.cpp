#include <iostream>
using namespace std;

// Base class
class Device {
public:
    Device(int id) {
        cout << "Device constructor called with ID: " << id << endl;
    }

    ~Device() {
        cout << "Device destructor called." << endl;
    }
};

// Intermediate class with virtual inheritance
class Printer : virtual public Device {
public:
    Printer(int id) : Device(id) {
        cout << "Printer constructor called." << endl;
    }

    ~Printer() {
        cout << "Printer destructor called." << endl;
    }
};

// Another intermediate class with virtual inheritance
class Scanner : virtual public Device {
public:
    Scanner(int id) : Device(id) {
        cout << "Scanner constructor called." << endl;
    }

    ~Scanner() {
        cout << "Scanner destructor called." << endl;
    }
};

// Derived class
class AllInOne : public Printer, public Scanner {
public:
    AllInOne(int id) : Device(id), Printer(id), Scanner(id) {
        cout << "AllInOne constructor called." << endl;
    }

    ~AllInOne() {
        cout << "AllInOne destructor called." << endl;
    }
};

int main() {
    AllInOne aioDevice(42);
    return 0;
}
