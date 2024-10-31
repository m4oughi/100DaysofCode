#include <iostream>
#include <typeinfo>

class Base {
    virtual void action() {}
};

class Derived : public Base {};

int main() {
    try {
        Base* basePtr = nullptr;  // Null pointer to base class
        Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
        std::cout << typeid(*derivedPtr).name() << std::endl;  // Invalid dereference
    } catch (const std::bad_typeid& e) {
        std::cout << "Caught bad_typeid with dynamic_cast: " << e.what() << std::endl;
    }
    return 0;
}
