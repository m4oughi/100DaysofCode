#include <iostream>
using namespace std;

class Scannable {
public:
    virtual void scan() = 0;  // Interface for scanning documents
};

class Printable {
public:
    virtual void print() = 0;  // Interface for printing documents
};

class Faxable {
public:
    virtual void fax() = 0;  // Interface for faxing documents
};

class AllInOnePrinter : public Scannable, public Printable, public Faxable {
public:
    void scan() override {
        cout << "Scanning document..." << endl;
    }

    void print() override {
        cout << "Printing document..." << endl;
    }

    void fax() override {
        cout << "Faxing document..." << endl;
    }
};

class BasicPrinter : public Printable {
public:
    void print() override {
        cout << "Basic printer printing document..." << endl;
    }
};

int main() {
    AllInOnePrinter aio;
    BasicPrinter basic;

    aio.scan();
    aio.print();
    aio.fax();

    basic.print();
    return 0;
}
