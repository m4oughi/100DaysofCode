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

class Derived : virtual public Base1, virtual public Base2 {
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

    b1->func1();  // Vptr points to Derived's Vtable for Base1
    b2->func2();  // Vptr points to Derived's Vtable for Base2

    return 0;
}
