#include <iostream>

struct Base {
    virtual ~Base() {
        std::cout << "Base Destructor" << std::endl;
    }
    virtual void show() {
        std::cout << "Base class function" << std::endl;
    }
};

struct Derived : public Base {
    ~Derived() {
        std::cout << "Derived Destructor" << std::endl;
    }
    void show() override {
        std::cout << "Derived class function" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived;
    basePtr->show();  // Calls Derived class function
    delete basePtr;   // Calls Derived destructor first, then Base destructor
}
