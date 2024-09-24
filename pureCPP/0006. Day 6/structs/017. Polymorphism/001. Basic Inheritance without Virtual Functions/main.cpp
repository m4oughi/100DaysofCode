#include <iostream>

struct Base {
    void show() {
        std::cout << "Base class function" << std::endl;
    }
};

struct Derived : public Base {
    void show() {
        std::cout << "Derived class function" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived;
    basePtr->show();  // Calls Base class function, not Derived
    delete basePtr;
}
