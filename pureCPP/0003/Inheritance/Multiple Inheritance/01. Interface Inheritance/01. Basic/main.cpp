#include <iostream>

// Interface 1
class Printable {
public:
    virtual void print() const = 0;  // Pure virtual function
};

// Interface 2
class Scannable {
public:
    virtual void scan() const = 0;   // Pure virtual function
};

// Combined class
class MultifunctionPrinter : public Printable, public Scannable {
public:
    void print() const override {
        std::cout << "Printing..." << std::endl;
    }
    
    void scan() const override {
        std::cout << "Scanning..." << std::endl;
    }
};

int main() {
    MultifunctionPrinter mfp;
    mfp.print();
    mfp.scan();
    return 0;
}
