#include <iostream>
using namespace std;

class Printer {
public:
    virtual void print() {
        cout << "Printing document..." << endl;
    }
};

class Scanner {
public:
    virtual void scan() {
        cout << "Scanning document..." << endl;
    }
};

class MultiFunctionPrinter : public Printer, public Scanner {
public:
    void print() override {
        cout << "MultiFunctionPrinter: Printing..." << endl;
    }
    void scan() override {
        cout << "MultiFunctionPrinter: Scanning..." << endl;
    }
};

int main() {
    MultiFunctionPrinter mfp;
    mfp.print();  // Outputs "MultiFunctionPrinter: Printing..."
    mfp.scan();   // Outputs "MultiFunctionPrinter: Scanning..."
    return 0;
}
