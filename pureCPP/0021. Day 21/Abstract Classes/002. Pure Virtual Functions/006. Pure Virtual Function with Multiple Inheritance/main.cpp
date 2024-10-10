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

class MultiFunctionDevice : public Printer, public Scanner {
public:
    void print() override {
        cout << "Printing document." << endl;
    }
    void scan() override {
        cout << "Scanning document." << endl;
    }
};

int main() {
    MultiFunctionDevice mfd;
    mfd.print();
    mfd.scan();
    return 0;
}
