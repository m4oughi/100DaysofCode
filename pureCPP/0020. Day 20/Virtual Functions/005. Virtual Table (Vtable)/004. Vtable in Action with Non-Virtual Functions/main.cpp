#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show()" << endl;
    }

    void nonVirtualFunction() {
        cout << "Base non-virtual function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived show()" << endl;
    }

    void nonVirtualFunction() {
        cout << "Derived non-virtual function" << endl;
    }
};

int main() {
    Base* ptr = new Derived();
    ptr->show();              // Calls Derived's show() using Vtable
    ptr->nonVirtualFunction(); // Calls Base's non-virtual function (no Vtable involved)

    delete ptr;
    return 0;
}
