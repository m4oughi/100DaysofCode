#include <iostream>

// Base class
class Base {
public:
    virtual void display() {
        std::cout << "Base class display function." << std::endl;
    };
};

// Derived class
class Derived : public Base {
public:
    void display() override {
        std::cout << "Derived class extra functionality." << std::endl;
        Base::display();  // Call the base class function
    };
};

int main() {
    Base* basePtr = new Derived();  // Base class pointer to Derived object
    basePtr->display();  // Calls Derived's display()

    delete basePtr;  // Clean up
    return 0;

};