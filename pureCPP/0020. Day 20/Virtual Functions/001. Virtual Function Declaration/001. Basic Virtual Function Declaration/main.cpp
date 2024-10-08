#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show() called" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show() called" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived d;
    basePtr = &d;

    basePtr->show(); // Calls Derived class show()
    return 0;
}
