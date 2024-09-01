#include <iostream>

// Base Class
class Base {
public:
    // Virtual function
    virtual void display() {
        std::cout << "Base class display function." << std::endl;
    };
};

// Derived class
class Derived: public Base {
public:
    // Overriding the base class function
    void display() override {
        std::cout << "Derived class display function." << std::endl;
    }
};

int main() {
    Base * basePtr = new Derived(); // Base class pointer to Derived object
    basePtr->display(); // Calls Derived's display() due to polymorphism

    delete basePtr; // Clean up
    return 0;
}