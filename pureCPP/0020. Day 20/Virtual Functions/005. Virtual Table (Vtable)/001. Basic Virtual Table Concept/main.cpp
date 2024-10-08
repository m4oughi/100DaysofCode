#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {  // Virtual function
        cout << "Base class show() called" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Overrides virtual function
        cout << "Derived class show() called" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();  // Pointer to Base class, object of Derived
    basePtr->show();  // Calls Derived's show() using Vtable

    delete basePtr;
    return 0;
}
