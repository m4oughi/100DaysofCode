#include <iostream>
#include <typeinfo>

class A {
    virtual void dummy() {}
};

class B : public A {};
class C : public A {};

int main() {
    try {
        A* aPtr = nullptr;  // Null pointer to base class
        std::cout << typeid(*aPtr).name() << std::endl;  // Invalid dereference
    } catch (const std::bad_typeid& e) {
        std::cout << "Caught bad_typeid in class hierarchy: " << e.what() << std::endl;
    }
    return 0;
}
