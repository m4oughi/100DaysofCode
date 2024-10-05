#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void print() {
        cout << "Base1 Print" << endl;
    }
};

class Base2 {
public:
    virtual void print() {
        cout << "Base2 Print" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void print() override {
        cout << "Derived Print" << endl;
    }
};

int main() {
    Derived obj;
    Base1* ptr1 = &obj;
    Base2* ptr2 = &obj;

    ptr1->print();  // Calls Derived::print()
    ptr2->print();  // Calls Derived::print()

    return 0;
}
