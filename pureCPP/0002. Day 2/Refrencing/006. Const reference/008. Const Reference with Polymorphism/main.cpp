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

void printObject(const Base &obj) {
    obj.show();  // Calls the correct overridden method, but cannot modify obj
}

int main() {
    Derived d;
    printObject(d);  // Output: Derived class

    return 0;
}