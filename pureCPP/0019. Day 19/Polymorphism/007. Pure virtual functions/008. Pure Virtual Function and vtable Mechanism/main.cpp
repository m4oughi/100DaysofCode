#include <iostream>
using namespace std;

class Base {
public:
    virtual void fun1() = 0;  // Pure virtual function
    virtual void fun2() = 0;  // Pure virtual function
};

class Derived : public Base {
public:
    void fun1() override {
        cout << "Derived fun1" << endl;
    }

    void fun2() override {
        cout << "Derived fun2" << endl;
    }
};

int main() {
    Base* base = new Derived();
    base->fun1();  // Calls Derived's fun1 method
    base->fun2();  // Calls Derived's fun2 method

    delete base;
    return 0;
}
