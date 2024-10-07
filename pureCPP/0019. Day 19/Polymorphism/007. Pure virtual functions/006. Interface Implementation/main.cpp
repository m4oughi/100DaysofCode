#include <iostream>
using namespace std;

class IPrinter {
public:
    virtual void print() = 0;     // Pure virtual function
    virtual void scan() = 0;      // Pure virtual function
};

class Printer : public IPrinter {
public:
    void print() override {
        cout << "Printing document" << endl;
    }

    void scan() override {
        cout << "Scanning document" << endl;
    }
};

int main() {
    Printer printer;
    printer.print();  // Calls Printer's print method
    printer.scan();   // Calls Printer's scan method

    return 0;
}
