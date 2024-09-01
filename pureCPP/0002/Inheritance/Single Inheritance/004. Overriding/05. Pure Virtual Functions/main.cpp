#include <iostream>

// Base class (Abstract class)
class Base {
public:
    virtual void display() = 0;  // Pure virtual function
};

// Derived class
class Derived : public Base {
public:
    void display() override {
        std::cout << "Derived class implementation of display function." << std::endl;
    };
};

int main() {
    // Base b;  // Error: cannot instantiate abstract class
    Base* basePtr = new Derived();  // Base class pointer to Derived object
    basePtr->display();  // Calls Derived's display()

    delete basePtr;  // Clean up
    return 0;
}