#include <iostream>
#include <memory>

class Base {
public:
    Base() {
        std::cout << "Base constructor called." << std::endl;
    }

    virtual ~Base() {
        std::cout << "Base destructor called." << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor called." << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor called." << std::endl;
    }
};

int main() {
    std::unique_ptr<Base> ptr = std::make_unique<Derived>();
    // Destructor for Derived and Base will be called automatically when ptr goes out of scope
    return 0;
}
