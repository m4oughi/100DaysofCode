#include <iostream>

// Base class
class Base {
public:
    // // Virtual function returning Base pointer
    virtual Base* clone() {
        return new Base(*this);
    };
};

// Derived class
class Derived : public Base {
public:
    // Overriding with covariant return type (Derived*)
    Derived* clone() override {
        return new Derived(*this);
    };
};

int main() {
    Base* basePtr = new Derived();  // Base class pointer to Derived object
    Base* clonedPtr = basePtr->clone();  // Cloning using overridden function

    if (dynamic_cast<Derived*>(clonedPtr)) {
        std::cout << "Cloned object is of type Derived." << std::endl;
    } else {
        std::cout << "Cloned object is of type Base." << std::endl;
    }

    delete basePtr;  // Clean up
    delete clonedPtr;  // Clean up
    return 0;
};