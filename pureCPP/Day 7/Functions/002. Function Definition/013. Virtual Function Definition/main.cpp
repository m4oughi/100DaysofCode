#include <iostream>

class Base {
public:
    virtual void display() {  // Virtual function
        std::cout << "Base class display" << std::endl;
    }
};

class Derived : public Base {
public:
    void display() override {  // Overriding virtual function
        std::cout << "Derived class display" << std::endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;
    
    basePtr = &derivedObj;
    basePtr->display();  // Calls Derived class display
    
    return 0;
}
