#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show()" << endl;
    }

    virtual void display() {
        cout << "Base display()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived show()" << endl;
    }

    void display() override {
        cout << "Derived display()" << endl;
    }
};

typedef void (*FunctionPointer)();

int main() {
    Derived d;
    Base* ptr = &d;

    // Manually access the Vtable and call functions using function pointers
    FunctionPointer* vtable = *(FunctionPointer**)ptr;

    vtable[0](); // Calls Derived's show() using Vtable
    vtable[1](); // Calls Derived's display() using Vtable

    return 0;
}
