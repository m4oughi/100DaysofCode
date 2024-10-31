#include <iostream>
#include <typeinfo>

class A {
    virtual void dummy() {}
};

class B : public A {};
class C : public A {};

int main() {
    try {
        A* aPtr = new B();  // Pointer to B, but will try casting to C
        C* cPtr = dynamic_cast<C*>(aPtr);  // Invalid cast
        if (!cPtr) {
            throw std::bad_cast();
        }
    } catch (const std::bad_cast& e) {
        std::cout << "Caught bad_cast in multi-level inheritance: " << e.what() << std::endl;
    }
    return 0;
}
