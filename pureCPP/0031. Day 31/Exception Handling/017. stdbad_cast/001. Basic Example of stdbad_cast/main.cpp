#include <iostream>
#include <typeinfo>  // For std::bad_cast

class Base {
    virtual void dummy() {}  // Polymorphic class with at least one virtual function
};

class Derived : public Base {};

int main() {
    try {
        Base* basePtr = new Base();
        Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);  // Invalid cast
        if (!derivedPtr) {
            throw std::bad_cast();
        }
    } catch (const std::bad_cast& e) {
        std::cout << "Caught bad_cast: " << e.what() << std::endl;
    }
    return 0;
}
