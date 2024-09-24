#include <iostream>

struct Base {
    virtual void show() = 0;  // Pure virtual function
};

struct Derived : public Base {
    void show() override {
        std::cout << "Derived class function" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived;
    basePtr->show();  // Calls Derived class function
    delete basePtr;
}
