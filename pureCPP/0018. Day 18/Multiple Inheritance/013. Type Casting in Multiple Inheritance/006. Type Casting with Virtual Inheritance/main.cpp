#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base method" << endl;
    }
};

class Derived1 : public virtual Base {
public:
    void show() override {
        cout << "Derived1 method" << endl;
    }
};

class Derived2 : public virtual Base {
public:
    void show() override {
        cout << "Derived2 method" << endl;
    }
};

class Final : public Derived1, public Derived2 {
};

int main() {
    Final f;
    Base* basePtr = dynamic_cast<Base*>(&f);  // Dynamic cast to virtual Base
    if (basePtr) {
        basePtr->show();  // Calls most derived method in Final
    } else {
        cout << "Failed to cast to Base" << endl;
    }

    return 0;
}
