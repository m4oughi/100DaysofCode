#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() = 0;  // Pure virtual method
};

class Base2 {
public:
    virtual void show() = 0;  // Pure virtual method
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Derived Implementation of show" << endl;
    }
    
    void callBaseShow() {
        Base1::show();  // Calls Derived's implementation via Base1
        Base2::show();  // Calls Derived's implementation via Base2
    }
};

int main() {
    Derived obj;
    obj.show();  // Calls Derived's overridden show method
    obj.callBaseShow();  // Demonstrates scope resolution with pure virtual methods
    return 0;
}
