#include <iostream>
#include <typeinfo>

class Grandparent {
public:
    virtual void greet() {}
};

class Parent : virtual public Grandparent {};
class Child : public Parent {};

int main() {
    try {
        Grandparent* grandparentPtr = new Parent();  // Points to Parent
        Child* childPtr = dynamic_cast<Child*>(grandparentPtr);  // Invalid cast
        if (!childPtr) {
            throw std::bad_cast();
        }
    } catch (const std::bad_cast& e) {
        std::cout << "Caught bad_cast in virtual inheritance: " << e.what() << std::endl;
    }
    return 0;
}
