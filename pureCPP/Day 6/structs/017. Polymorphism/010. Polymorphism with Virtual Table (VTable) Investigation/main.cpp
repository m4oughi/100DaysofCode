#include <iostream>

struct Base {
    virtual void show() {
        std::cout << "Base class function" << std::endl;
    }
};

struct Derived : public Base {
    void show() override {
        std::cout << "Derived class function" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived;
    
    // Investigating the virtual table by calling the function
    basePtr->show();  // Calls Derived class function (uses VTable)
    
    delete basePtr;
}
