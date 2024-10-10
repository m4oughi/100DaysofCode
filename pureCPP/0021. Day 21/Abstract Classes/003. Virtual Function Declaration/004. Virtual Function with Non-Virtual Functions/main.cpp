#include <iostream>
using namespace std;

class Printer {
public:
    virtual void printDetails() {
        cout << "Printing details..." << endl;
    }
    
    void showStatus() {
        cout << "Printer status: OK" << endl;
    }
};

class InkjetPrinter : public Printer {
public:
    void printDetails() override {
        cout << "Inkjet Printer: High-resolution printing." << endl;
    }
};

int main() {
    Printer* printer = new InkjetPrinter();
    printer->printDetails();  // Outputs "Inkjet Printer: High-resolution printing."
    printer->showStatus();    // Outputs "Printer status: OK"
    delete printer;
    return 0;
}
