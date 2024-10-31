#include <iostream>
#include <typeinfo>

class Base {
    virtual void dummy() {}  // Polymorphic base class
};

int main() {
    try {
        Base* basePtr = nullptr;
        std::cout << typeid(*basePtr).name() << std::endl;  // Accessing null pointer
    } catch (const std::bad_typeid& e) {
        std::cout << "Caught bad_typeid: " << e.what() << std::endl;
    }
    return 0;
}
