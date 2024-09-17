#include <iostream>
#include <typeinfo>

class Base {
public:
    virtual void show() {
        std::cout << "Base show function." << std::endl;
    }
    virtual ~Base() = default;  // Ensure proper cleanup
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived show function." << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived();

    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);  // Safe downcasting
    if (derivedPtr) {
        derivedPtr->show();  // Calls Derived's show()
    } else {
        std::cout << "Casting failed." << std::endl;
    }

    delete basePtr;
    return 0;
}
