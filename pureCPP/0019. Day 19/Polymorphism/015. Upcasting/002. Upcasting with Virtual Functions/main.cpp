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
    Derived derivedObj;
    Base* basePtr = &derivedObj;  // Upcasting: Derived to Base
    basePtr->show();  // Calls Derived's show function due to virtual function

    return 0;
}
