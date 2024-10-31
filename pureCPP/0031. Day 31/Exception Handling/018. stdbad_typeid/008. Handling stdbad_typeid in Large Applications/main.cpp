#include <iostream>
#include <typeinfo>
#include <vector>

class Base {
public:
    virtual ~Base() {}
};

class Derived1 : public Base {};
class Derived2 : public Base {};

void processObject(Base* obj) {
    try {
        std::cout << typeid(*obj).name() << std::endl;
    } catch (const std::bad_typeid& e) {
        std::cout << "Caught bad_typeid in large application: " << e.what() << std::endl;
    }
}

int main() {
    std::vector<Base*> objects = { new Derived1(), nullptr, new Derived2() };

    for (Base* obj : objects) {
        processObject(obj);  // Processing objects, one of which is a nullptr
    }

    // Clean up memory
    for (Base* obj : objects) {
        delete obj;
    }
    return 0;
}
