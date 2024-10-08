#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void func1() {
        cout << "Base1 func1()" << endl;
    }
};

class Base2 {
public:
    virtual void func2() {
        cout << "Base2 func2()" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void func1() override {
        cout << "Derived func1()" << endl;
    }

    void func2() override {
        cout << "Derived func2()" << endl;
    }
};

int main() {
    Derived d;
    Base1* b1 = &d;
    Base2* b2 = &d;

    b1->func1();  // Calls Derived's func1() via dynamic binding
    b2->func2();  // Calls Derived's func2() via dynamic binding

    return 0;
}
