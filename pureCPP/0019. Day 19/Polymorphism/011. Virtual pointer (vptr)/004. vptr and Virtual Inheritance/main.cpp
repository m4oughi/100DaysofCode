#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    void show() override {
        cout << "Derived1 class show function" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void show() override {
        cout << "Derived2 class show function" << endl;
    }
};

class Final : public Derived1, public Derived2 {
public:
    void show() override {
        cout << "Final class show function" << endl;
    }
};

int main() {
    Final finalObj;

    Base* basePtr = &finalObj;
    basePtr->show();  // Calls Final's show via virtual inheritance's vptr

    return 0;
}
