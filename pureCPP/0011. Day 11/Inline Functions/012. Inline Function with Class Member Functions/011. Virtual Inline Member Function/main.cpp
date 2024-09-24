#include <iostream>

class Base {
public:
    // Virtual inline function in the base class
    virtual inline void display() const {
        std::cout << "Base class display" << std::endl;
    }
};

class Derived : public Base {
public:
    // Overridden virtual inline function in the derived class
    inline void display() const override {
        std::cout << "Derived class display" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->display(); // Output: Derived class display
    delete basePtr;
    return 0;
}
