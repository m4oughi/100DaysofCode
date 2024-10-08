#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived1 : public Base {
public:
    void show() override {
        cout << "Derived1 class show()" << endl;
    }
};

class Derived2 : public Base {
public:
    void show() override {
        cout << "Derived2 class show()" << endl;
    }
};

int main() {
    Base* basePtr1 = new Derived1();
    Base* basePtr2 = new Derived2();

    basePtr1->show();  // Calls Derived1's show()
    basePtr2->show();  // Calls Derived2's show()

    delete basePtr1;
    delete basePtr2;
    return 0;
}
