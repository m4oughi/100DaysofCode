#include <iostream>
using namespace std;

class Base {
public:
    virtual void func() {
        cout << "Base function" << endl;
    }
};

class Derived : public Base {
public:
    void func() final {
        cout << "Derived function (final)" << endl;
    }
};

class FurtherDerived : public Derived {
public:
    // Error: Cannot override final function
    // void func() override {
    //     cout << "FurtherDerived function" << endl;
    // }
};

int main() {
    Derived d;
    d.func();  // Calls final function in Derived
    return 0;
}
