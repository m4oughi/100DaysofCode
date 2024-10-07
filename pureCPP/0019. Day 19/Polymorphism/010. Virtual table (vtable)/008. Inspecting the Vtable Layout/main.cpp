#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

typedef void (*FunPtr)(void);

int main() {
    Derived d;
    Base* basePtr = &d;

    // Trick to get a pointer to the vtable and access the first function
    FunPtr* vtable = *(FunPtr**)basePtr;
    vtable[0]();  // Calls Derived's show function via vtable

    return 0;
}
