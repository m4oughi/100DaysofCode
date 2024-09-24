#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class" << std::endl;
    }
};

void display(Base &obj) {
    obj.show();  // Call the appropriate show method
}

int main() {
    Base b;
    Derived d;
    
    display(b);  // Output: Base class
    display(d);  // Output: Derived class

    return 0;
}