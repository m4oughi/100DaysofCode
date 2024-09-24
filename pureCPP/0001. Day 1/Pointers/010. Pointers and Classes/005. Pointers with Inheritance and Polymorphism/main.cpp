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
    Base* ptr = new Derived();  // Pointer to Base class pointing to Derived class object

    ptr->show();  // Calls Derived class's show() due to polymorphism

    delete ptr;  // Free dynamically allocated memory

    return 0;
}
