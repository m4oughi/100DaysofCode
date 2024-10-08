#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class virtual show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class virtual show()" << endl;
    }
};

class NonVirtual {
public:
    void show() {
        cout << "Non-virtual show()" << endl;
    }
};

int main() {
    Derived derivedObj;
    NonVirtual nonVirtualObj;

    for (int i = 0; i < 1000000; ++i) {
        derivedObj.show();       // Virtual function (non-inlineable)
        nonVirtualObj.show();    // Non-virtual function (may be inlined)
    }

    return 0;
}
