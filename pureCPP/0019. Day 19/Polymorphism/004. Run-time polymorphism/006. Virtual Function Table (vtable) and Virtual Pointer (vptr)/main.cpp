#include <iostream>
using namespace std;

class Base {
public:
    virtual void fun1() {
        cout << "Base class fun1" << endl;
    }

    virtual void fun2() {
        cout << "Base class fun2" << endl;
    }
};

class Derived : public Base {
public:
    void fun1() override {
        cout << "Derived class fun1" << endl;
    }

    void fun2() override {
        cout << "Derived class fun2" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->fun1();  // Calls Derived's fun1
    basePtr->fun2();  // Calls Derived's fun2

    delete basePtr;
    return 0;
}
