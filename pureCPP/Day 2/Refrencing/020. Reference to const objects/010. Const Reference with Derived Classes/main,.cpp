#include <iostream>

class Base {
public:
    virtual void show() const {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() const override {
        std::cout << "Derived class" << std::endl;
    }
};

void display(const Base& obj) {  // Const reference to base class
    obj.show();  // Calls the overridden method in Derived
}

int main() {
    Derived d;
    display(d);  // Reference to derived class object

    return 0;
}
