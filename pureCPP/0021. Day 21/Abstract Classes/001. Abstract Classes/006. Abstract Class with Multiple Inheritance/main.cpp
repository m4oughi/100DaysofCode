#include <iostream>
using namespace std;

class Printer {
public:
    virtual void print() = 0;
};

class Scanner {
public:
    virtual void scan() = 0;
};

class MultiFunctionPrinter : public Printer, public Scanner {
public:
    void print() override {
        cout << "Printing document." << endl;
    }
    void scan() override {
        cout << "Scanning document." << endl;
    }
};

int main() {
    MultiFunctionPrinter mfp;
    mfp.print();
    mfp.scan();
    return 0;
}
