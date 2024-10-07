#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
    void nonVirtualFunction() {
        cout << "Base class non-virtual function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
    void nonVirtualFunction() {
        cout << "Derived class non-virtual function" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show();   // Resolved via vtable, calls Derived's show
    basePtr->nonVirtualFunction();  // Resolved at compile-time, calls Base's function

    delete basePtr;
    return 0;
}
