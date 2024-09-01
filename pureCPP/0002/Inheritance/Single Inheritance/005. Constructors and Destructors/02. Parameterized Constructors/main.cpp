#include <iostream>

// Base class
class Base {
public:
    Base(int x) {
        std::cout << "Base class constructor called with value: " << x << std::endl;
    }
    ~Base() {
        std::cout << "Base class destructor called." << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Call to base class constructor
    Derived(int x, int y) : Base(x) {  
        std::cout << "Derived class constructor called with value: " << y << std::endl;
    }
    ~Derived() {
        std::cout << "Derived class destructor called." << std::endl;
    }
};

int main() {
    // Passing parameters to constructors
    Derived d(5, 10); 
    return 0;
}
