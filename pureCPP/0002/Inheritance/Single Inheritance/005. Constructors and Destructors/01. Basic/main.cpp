#include <iostream>

// Base class
class Base {
public:
    Base() {
        std::cout << "Base class constructor called." << std::endl;
    }
    ~Base() {
        std::cout << "Base class destructor called." << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived class constructor called." << std::endl;
    }
    ~Derived() {
        std::cout << "Derived class destructor called." << std::endl;
    }
};

int main() {
    Derived d;  // Constructor and destructor calls happen here
    return 0;
}
