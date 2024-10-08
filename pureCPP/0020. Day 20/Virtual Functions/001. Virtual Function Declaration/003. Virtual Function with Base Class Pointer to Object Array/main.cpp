#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show() called" << endl;
    }
};

class Derived1 : public Base {
public:
    void show() override {
        cout << "Derived1 class show() called" << endl;
    }
};

class Derived2 : public Base {
public:
    void show() override {
        cout << "Derived2 class show() called" << endl;
    }
};

int main() {
    Base* objects[2];
    Derived1 d1;
    Derived2 d2;

    objects[0] = &d1;
    objects[1] = &d2;

    objects[0]->show(); // Calls Derived1 class show()
    objects[1]->show(); // Calls Derived2 class show()

    return 0;
}
