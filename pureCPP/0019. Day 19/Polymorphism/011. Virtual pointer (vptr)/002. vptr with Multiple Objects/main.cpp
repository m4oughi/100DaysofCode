#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj1, derivedObj2;

    baseObj.show();       // Calls Base's show
    derivedObj1.show();   // Calls Derived's show via derivedObj1's vptr
    derivedObj2.show();   // Calls Derived's show via derivedObj2's vptr

    return 0;
}
