#include <iostream>

class Base {
public:
    // Attempt to make a virtual function inline
    virtual inline void display() {
        std::cout << "Base display" << std::endl;
    }
};

class Derived : public Base {
public:
    inline void display() override {
        std::cout << "Derived display" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->display(); // Output: Derived display, no inlining possible
    delete basePtr;
    return 0;
}
