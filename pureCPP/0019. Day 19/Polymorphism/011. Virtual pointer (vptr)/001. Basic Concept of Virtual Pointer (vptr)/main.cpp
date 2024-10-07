#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {  // Virtual function triggers creation of vptr
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Overrides Base's show method
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    Base* basePtr = &baseObj;
    basePtr->show();  // Calls Base's show

    basePtr = &derivedObj;
    basePtr->show();  // Calls Derived's show via vptr and vtable

    return 0;
}
