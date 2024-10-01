#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor called" << std::endl;
    }

    Base(const Base&) {
        std::cout << "Base copy constructor called" << std::endl;
    }

    ~Base() {
        std::cout << "Base destructor called" << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor called" << std::endl;
    }

    Derived(const Derived& other) : Base(other) {
        std::cout << "Derived copy constructor called" << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor called" << std::endl;
    }
};

int main() {
    Derived obj1;
    Derived obj2 = obj1;  // Calls copy constructor
    return 0;
}
