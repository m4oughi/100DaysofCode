#include <iostream>

// Base class 1
class Printer {
public:
    void print() const {
        std::cout << "Printing document..." << std::endl;
    }
};

// Base class 2
class Scanner {
public:
    void scan() const {
        std::cout << "Scanning document..." << std::endl;
    }
};

// Derived class
class MultifunctionDevice : public Printer, public Scanner {
public:
    // No need to override methods, just use them as they are
};

int main() {
    MultifunctionDevice mfd;
    mfd.print();
    mfd.scan();
    return 0;
}
