#include <iostream>

// Base class
class Base {
public:
    Base() {
        std::cout << "Base class constructor called." << std::endl;
    };
    ~Base() {
        std::cout << "Base class destructor called." << std::endl;
    };
};

// Derived class
class Derived : public Base {
    int* data;

public:
    Derived(int size) {
        data = new int[size];
        std::cout << "Derived class constructor called. Memory allocated." << std::endl;
    };

    // Copy constructor for deep copy
    // Call base copy constructor
    Derived(const Derived& other) : Base(other) {
        data = new int[sizeof(other.data)];
        std::cout << "Derived class copy constructor called. Memory copied." << std::endl;
    };

    ~Derived() {
        delete[] data;
        std::cout << "Derived class destructor called. Memory deallocated." << std::endl;
    };
};

int main() {
    Derived d1(5);
    Derived d2 = d1;  // Copy constructor is called

    return 0;
}