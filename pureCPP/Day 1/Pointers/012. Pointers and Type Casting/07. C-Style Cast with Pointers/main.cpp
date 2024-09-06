#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base class function" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class function" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived();

    // C-style cast (combines static, dynamic, and reinterpret cast)
    Derived* derivedPtr = (Derived*)basePtr;
    derivedPtr->show();  // Output: Derived class function

    delete basePtr;
    return 0;
}
