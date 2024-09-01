#include <iostream>

// Base class
class Base {
public:
    Base() {
        std::cout << "Base class constructor called." << std::endl;
    }

    // Virtual destructor
    virtual ~Base() {  
        std::cout << "Base class destructor called." << std::endl;
    }
};

// Derived class
class Derived : public Base {
    int* data;
    
public:
    Derived(int size) {
        data = new int[size];
        std::cout << "Derived class constructor called. Memory allocated." << std::endl;
    }

    ~Derived() {
        delete[] data;
        std::cout << "Derived class destructor called. Memory deallocated." << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived(5);  // Base pointer to Derived object
    delete basePtr;  // Ensures both destructors are called due to virtual destructor

    return 0;
}
