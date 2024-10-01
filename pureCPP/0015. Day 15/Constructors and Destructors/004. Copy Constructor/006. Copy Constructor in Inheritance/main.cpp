#include <iostream>

class Base {
public:
    int baseValue;

    // Constructor
    Base(int value) : baseValue(value) {}

    // Copy constructor
    Base(const Base& other) {
        baseValue = other.baseValue;
        std::cout << "Base class copy constructor called" << std::endl;
    }
};

class Derived : public Base {
public:
    int derivedValue;

    // Constructor
    Derived(int baseValue, int derivedValue) : Base(baseValue), derivedValue(derivedValue) {}

    // Copy constructor
    Derived(const Derived& other) : Base(other) {
        derivedValue = other.derivedValue;
        std::cout << "Derived class copy constructor called" << std::endl;
    }
};

int main() {
    Derived obj1(5, 10);
    Derived obj2 = obj1;  // Calls both base and derived class copy constructors
    return 0;
}
