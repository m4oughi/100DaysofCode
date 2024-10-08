#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show()" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    void show() override {
        cout << "Derived1 show()" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void show() override {
        cout << "Derived2 show()" << endl;
    }
};

class MostDerived : public Derived1, public Derived2 {
public:
    void show() override {
        cout << "MostDerived show()" << endl;
    }
};

int main() {
    MostDerived md;
    Base* basePtr = &md;
    
    basePtr->show();  // Calls MostDerived's show() using a single Vtable

    return 0;
}
