#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show() called" << endl;
    }
};

class Intermediate1 : virtual public Base {
public:
    void show() override {
        cout << "Intermediate1 class show() called" << endl;
    }
};

class Intermediate2 : virtual public Base {
public:
    void show() override {
        cout << "Intermediate2 class show() called" << endl;
    }
};

class Derived : public Intermediate1, public Intermediate2 {
public:
    void show() override {
        cout << "Derived class show() called" << endl;
    }
};

int main() {
    Derived d;
    Base* basePtr = &d;
    basePtr->show(); // Calls Derived class show()

    return 0;
}
