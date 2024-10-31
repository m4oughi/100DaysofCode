#include <iostream>
#include <typeinfo>
#include <vector>

class Base {
public:
    virtual ~Base() {}
};

class Derived1 : public Base {};
class Derived2 : public Base {};

int main() {
    std::vector<Base*> objects = { new Derived1(), new Base(), new Derived2() };

    for (Base* obj : objects) {
        try {
            Derived1* derived1Ptr = dynamic_cast<Derived1*>(obj);
            if (derived1Ptr) {
                std::cout << "Derived1 object" << std::endl;
            } else {
                throw std::bad_cast();
            }
        } catch (const std::bad_cast& e) {
            std::cout << "Caught bad_cast in object list: " << e.what() << std::endl;
        }
    }

    // Clean up memory
    for (Base* obj : objects) {
        delete obj;
    }
    return 0;
}
