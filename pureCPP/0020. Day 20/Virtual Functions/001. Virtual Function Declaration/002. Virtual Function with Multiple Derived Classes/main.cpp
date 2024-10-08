#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show() called" << endl;
    }
};

class Derived1 : public Base {
public:
    void show() override {
        cout << "Derived1 class show() called" << endl;
    }
};

class Derived2 : public Base {
public:
    void show() override {
        cout << "Derived2 class show() called" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived1 d1;
    Derived2 d2;

    basePtr = &d1;
    basePtr->show(); // Calls Derived1 class show()

    basePtr = &d2;
    basePtr->show(); // Calls Derived2 class show()

    return 0;
}
