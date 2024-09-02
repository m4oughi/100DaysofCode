#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base class function" << std::endl;
    }
    virtual ~Base() = default;
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class function" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived();  // Base pointer to a Derived object
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);

    if (derivedPtr) {  // Check if dynamic_cast was successful
        derivedPtr->show();  // Output: Derived class function
    } else {
        std::cout << "Cast failed" << std::endl;
    }

    delete basePtr;
    return 0;
}
