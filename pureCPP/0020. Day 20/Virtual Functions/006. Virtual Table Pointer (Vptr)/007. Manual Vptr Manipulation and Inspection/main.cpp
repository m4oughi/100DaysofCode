#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show()" << endl;
    }
};

class Derived1 : public Base {
public:
    void show() override {
        cout << "Derived1 show()" << endl;
    }
};

class Derived2 : public Base {
public:
    void show() override {
        cout << "Derived2 show()" << endl;
    }
};

typedef void (*FunctionPointer)();

int main() {
    Derived1 d1;
    Derived2 d2;

    Base* basePtr = &d1;
    FunctionPointer* vptr = *(FunctionPointer**)basePtr;  // Access Vptr and Vtable
    vptr[0]();  // Calls Derived1's show() using Vptr

    basePtr = &d2;
    vptr = *(FunctionPointer**)basePtr;  // Update Vptr to point to Derived2's Vtable
    vptr[0]();  // Calls Derived2's show() using Vptr

    return 0;
}
