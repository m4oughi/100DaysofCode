#include <iostream>

struct Base {
    virtual ~Base() = default;
    virtual void show() {
        std::cout << "Base class function" << std::endl;
    }
};

struct Derived : public Base {
    void show() override {
        std::cout << "Derived class function" << std::endl;
    }
    void specificFunction() {
        std::cout << "Specific function in Derived" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived;
    basePtr->show();  // Calls Derived class function
    
    // Casting to Derived type using dynamic_cast
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        derivedPtr->specificFunction();  // Calls Derived-specific function
    }

    delete basePtr;
}
