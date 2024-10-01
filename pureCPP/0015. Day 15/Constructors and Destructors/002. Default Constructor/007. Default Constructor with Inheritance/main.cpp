#include <iostream>

class Base {
public:
    // Default constructor
    Base() {
        std::cout << "Base class default constructor called" << std::endl;
    }
};

class Derived : public Base {
public:
    // Default constructor
    Derived() {
        std::cout << "Derived class default constructor called" << std::endl;
    }
};

int main() {
    Derived obj;  // Calls the default constructor of both Base and Derived
    return 0;
}
