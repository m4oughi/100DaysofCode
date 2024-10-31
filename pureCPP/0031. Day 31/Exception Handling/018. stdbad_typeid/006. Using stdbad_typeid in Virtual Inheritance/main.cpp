#include <iostream>
#include <typeinfo>

class Grandparent {
    virtual void greet() {}
};

class Parent : virtual public Grandparent {};
class Child : public Parent {};

int main() {
    try {
        Grandparent* grandparentPtr = nullptr;  // Null pointer in virtual inheritance
        std::cout << typeid(*grandparentPtr).name() << std::endl;  // Invalid dereference
    } catch (const std::bad_typeid& e) {
        std::cout << "Caught bad_typeid in virtual inheritance: " << e.what() << std::endl;
    }
    return 0;
}
