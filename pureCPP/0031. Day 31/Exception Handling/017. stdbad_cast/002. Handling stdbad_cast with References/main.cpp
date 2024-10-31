#include <iostream>
#include <typeinfo>

class Base {
    virtual void dummy() {}
};

class Derived : public Base {};

int main() {
    try {
        Base baseObj;
        Base& baseRef = baseObj;
        Derived& derivedRef = dynamic_cast<Derived&>(baseRef);  // Invalid reference cast
    } catch (const std::bad_cast& e) {
        std::cout << "Caught bad_cast when casting reference: " << e.what() << std::endl;
    }
    return 0;
}
