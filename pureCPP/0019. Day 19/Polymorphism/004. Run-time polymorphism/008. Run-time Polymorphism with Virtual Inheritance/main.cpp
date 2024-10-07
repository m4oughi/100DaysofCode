#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

class A : virtual public Base {};
class B : virtual public Base {};

class Derived : public A, public B {
public:
    void show() override {
        cout << "Derived class" << endl;
    }
};

int main() {
    Derived d;
    Base* basePtr = &d;

    basePtr->show();  // Calls Derived's show function

    return 0;
}
