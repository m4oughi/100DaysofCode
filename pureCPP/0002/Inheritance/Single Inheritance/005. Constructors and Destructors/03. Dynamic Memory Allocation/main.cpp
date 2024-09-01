#include <iostream>

// Base class
class Base {
public:
    Base() {
        std::cout << "Base class constructor called." << std::endl;
    }
    virtual ~Base() {
        std::cout << "Base class destructor called." << std::endl;
    }
};

// Derived class
class Derived : public Base {
    // Pointer to dynamically allocated memory
    int* data;

public:
    Derived(int size) {
        // Dynamic memory allocation
        data = new int[size];
        std::cout << "Derived class constructor called. Memory allocated." << std::endl;
    }
    ~Derived() {
        // Free dynamically allocated memory
        delete[] data;
        std::cout << "Derived class destructor called. Memory deallocated." << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived(5);  // Base pointer to Derived object
    delete basePtr;  // Destructor called for both Base and Derived
    
    return 0;
}
