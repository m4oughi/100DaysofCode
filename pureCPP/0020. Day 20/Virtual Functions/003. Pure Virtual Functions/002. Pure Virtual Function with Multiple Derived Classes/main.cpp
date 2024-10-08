#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0; // Pure virtual function
};

class Derived1 : public Base {
public:
    void show() override {
        cout << "Derived1 class implementation of show()" << endl;
    }
};

class Derived2 : public Base {
public:
    void show() override {
        cout << "Derived2 class implementation of show()" << endl;
    }
};

int main() {
    Base* basePtr;

    Derived1 d1;
    Derived2 d2;

    basePtr = &d1;
    basePtr->show(); // Calls Derived1's show()

    basePtr = &d2;
    basePtr->show(); // Calls Derived2's show()

    return 0;
}
