#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Base1 show()" << endl;
    }
};

class Base2 {
public:
    virtual void display() {
        cout << "Base2 display()" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Derived show()" << endl;
    }

    void display() override {
        cout << "Derived display()" << endl;
    }
};

int main() {
    Derived d;
    Base1* b1 = &d;
    Base2* b2 = &d;

    b1->show();    // Calls Derived's show() using Vtable from Base1
    b2->display(); // Calls Derived's display() using Vtable from Base2

    return 0;
}