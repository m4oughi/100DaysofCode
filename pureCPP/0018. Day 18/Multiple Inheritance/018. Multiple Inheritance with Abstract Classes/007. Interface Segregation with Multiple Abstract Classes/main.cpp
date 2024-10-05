#include <iostream>
using namespace std;

class Printable {
public:
    virtual void print() = 0;
};

class Scannable {
public:
    virtual void scan() = 0;
};

class Photocopier : public Printable, public Scannable {
public:
    void print() override {
        cout << "Photocopier printing..." << endl;
    }

    void scan() override {
        cout << "Photocopier scanning..." << endl;
    }
};

class Printer : public Printable {
public:
    void print() override {
        cout << "Printer printing..." << endl;
    }
};

int main() {
    Printer printer;
    Photocopier copier;

    printer.print();     // Implements only the print functionality
    copier.print();      // Implements both print and scan functionality
    copier.scan();

    return 0;
}
