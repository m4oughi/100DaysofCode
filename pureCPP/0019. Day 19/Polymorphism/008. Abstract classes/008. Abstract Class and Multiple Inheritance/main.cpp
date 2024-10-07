#include <iostream>
using namespace std;

class Printable {
public:
    virtual void print() = 0;  // Pure virtual function
};

class Scannable {
public:
    virtual void scan() = 0;  // Pure virtual function
};

class MultifunctionDevice : public Printable, public Scannable {
public:
    void print() override {
        cout << "Printing document" << endl;
    }

    void scan() override {
        cout << "Scanning document" << endl;
    }
};

int main() {
    MultifunctionDevice mfd;
    mfd.print();  // Calls MultifunctionDevice's print method
    mfd.scan();   // Calls MultifunctionDevice's scan method

    return 0;
}
