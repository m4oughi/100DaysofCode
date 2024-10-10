#include <iostream>
using namespace std;

class Printer {
public:
    virtual void print(const string& text, int copies = 1) = 0;
};

class LaserPrinter : public Printer {
public:
    void print(const string& text, int copies = 1) override {
        for (int i = 0; i < copies; ++i) {
            cout << "Printing: " << text << endl;
        }
    }
};

int main() {
    LaserPrinter printer;
    printer.print("Hello, World!", 3);  // Prints "Hello, World!" three times
    return 0;
}
