#include <iostream>

class Base {
public:
    // Inline constructor
    Base() {
        std::cout << "Base class inline constructor called" << std::endl;
    }

    // Inline destructor
    ~Base() {
        std::cout << "Base class inline destructor called" << std::endl;
    }
};

class Derived : public Base {
public:
    // Inline constructor
    Derived() {
        std::cout << "Derived class inline constructor called" << std::endl;
    }

    // Inline destructor
    ~Derived() {
        std::cout << "Derived class inline destructor called" << std::endl;
    }
};

int main() {
    Derived obj;  // Inline constructors and destructors for both base and derived classes will be called
    return 0;
}
