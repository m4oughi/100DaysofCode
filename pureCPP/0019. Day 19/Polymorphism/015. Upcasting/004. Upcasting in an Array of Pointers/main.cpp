#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived1 : public Base {
public:
    void show() override {
        cout << "Derived1 class show function" << endl;
    }
};

class Derived2 : public Base {
public:
    void show() override {
        cout << "Derived2 class show function" << endl;
    }
};

int main() {
    Base* arr[2];  // Array of Base class pointers
    Derived1 d1;
    Derived2 d2;

    arr[0] = &d1;  // Upcasting: Derived1 to Base
    arr[1] = &d2;  // Upcasting: Derived2 to Base

    for (int i = 0; i < 2; ++i) {
        arr[i]->show();  // Calls Derived1 and Derived2 show functions
    }

    return 0;
}
