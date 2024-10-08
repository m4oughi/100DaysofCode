#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Base1 class show() called" << endl;
    }
};

class Base2 {
public:
    virtual void show() {
        cout << "Base2 class show() called" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Derived class show() called" << endl;
    }
};

int main() {
    Derived d;
    Base1* base1Ptr = &d;
    Base2* base2Ptr = &d;

    base1Ptr->show(); // Calls Derived class show()
    base2Ptr->show(); // Calls Derived class show()

    return 0;
}
