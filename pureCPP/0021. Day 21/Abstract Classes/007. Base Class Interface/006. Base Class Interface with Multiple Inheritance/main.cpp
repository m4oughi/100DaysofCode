#include <iostream>
using namespace std;

class IPrinter {
public:
    virtual void print() = 0;
};

class IScanner {
public:
    virtual void scan() = 0;
};

class MultiFunctionDevice : public IPrinter, public IScanner {
public:
    void print() override {
        cout << "Printing document..." << endl;
    }
    void scan() override {
        cout << "Scanning document..." << endl;
    }
};

int main() {
    MultiFunctionDevice mfd;

    mfd.print();  // Outputs "Printing document..."
    mfd.scan();   // Outputs "Scanning document..."
    
    return 0;
}
