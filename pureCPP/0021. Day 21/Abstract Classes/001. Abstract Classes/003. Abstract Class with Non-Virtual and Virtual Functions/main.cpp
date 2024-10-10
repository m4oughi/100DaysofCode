#include <iostream>
using namespace std;

class Printer {
public:
    // Non-virtual function
    void printBasicInfo() {
        cout << "This is a printer." << endl;
    }
    // Pure virtual function
    virtual void printDetails() = 0;
};

class LaserPrinter : public Printer {
public:
    void printDetails() override {
        cout << "Laser Printer: High-quality text and graphics." << endl;
    }
};

int main() {
    LaserPrinter lp;
    lp.printBasicInfo();
    lp.printDetails();
    return 0;
}
