#include <iostream>

class Base {
public:
    void show() {
        std::cout << "Base class function" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() {
        std::cout << "Derived class function" << std::endl;
    }
};

int main() {
    Base* basePtr = new Base();
    Derived* derivedPtr;

    // Incorrect downcasting without type checking - not safe!
    derivedPtr = static_cast<Derived*>(basePtr);
    derivedPtr->show();  // Undefined behavior: Output might be "Derived class function"

    delete basePtr;
    return 0;
}
