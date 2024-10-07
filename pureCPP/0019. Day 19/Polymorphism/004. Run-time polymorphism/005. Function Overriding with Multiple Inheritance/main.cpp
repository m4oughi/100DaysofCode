#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "Class A show function" << endl;
    }
};

class B {
public:
    virtual void show() {
        cout << "Class B show function" << endl;
    }
};

class Derived : public A, public B {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    A* ptrA;
    B* ptrB;
    Derived d;

    ptrA = &d;
    ptrB = &d;

    ptrA->show();  // Calls Derived's show function
    ptrB->show();  // Calls Derived's show function

    return 0;
}
