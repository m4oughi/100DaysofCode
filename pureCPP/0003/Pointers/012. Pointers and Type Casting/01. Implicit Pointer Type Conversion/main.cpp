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
    Derived d;
    Base* basePtr = &d;  // Implicit upcasting from Derived* to Base*
    basePtr->show();     // Output: Base class function

    return 0;
}
