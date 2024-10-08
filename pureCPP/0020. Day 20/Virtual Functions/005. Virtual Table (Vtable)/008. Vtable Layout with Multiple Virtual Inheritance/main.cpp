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

class Base3 {
public:
    virtual void func3() {
        cout << "Base3 func3()" << endl;
    }
};

class Derived : virtual public Base1, virtual public Base2, virtual public Base3 {
public:
    void func1() override {
        cout << "Derived func1()" << endl;
    }

    void func2() override {
        cout << "Derived func2()" << endl;
    }

    void func3() override {
        cout << "Derived func3()" << endl;
    }
};

int main() {
    Derived d;

    Base1* b1 = &d;
    Base2* b2 = &d;
    Base3* b3 = &d;

    b1->func1();  // Calls Derived's func1() via Base1's Vtable
    b2->func2();  // Calls Derived's func2() via Base2's Vtable
    b3->func3();  // Calls Derived's func3() via Base3's Vtable

    return 0;
}
