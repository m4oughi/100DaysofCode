#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor called." << std::endl;
    }

    virtual ~Base() {
        std::cout << "Base destructor called." << std::endl;
    }
};

class Intermediate : public Base {
public:
    Intermediate() {
        std::cout << "Intermediate constructor called." << std::endl;
    }

    ~Intermediate() {
        std::cout << "Intermediate destructor called." << std::endl;
    }
};

class Derived : public Intermediate {
public:
    Derived() {
        std::cout << "Derived constructor called." << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor called." << std::endl;
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr;  // Calls Derived, Intermediate, and Base destructors in that order
    return 0;
}
