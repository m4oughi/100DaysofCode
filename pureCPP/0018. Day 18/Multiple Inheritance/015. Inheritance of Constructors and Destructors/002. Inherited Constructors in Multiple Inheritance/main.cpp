#include <iostream>
using namespace std;

class Base1 {
public:
    Base1(int a) {
        cout << "Base1 constructor called with a = " << a << endl;
    }
};

class Base2 {
public:
    Base2(int b) {
        cout << "Base2 constructor called with b = " << b << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    using Base1::Base1;  // Inherit constructor from Base1
    using Base2::Base2;  // Inherit constructor from Base2

    Derived() : Base1(0), Base2(0) {
        cout << "Derived constructor called" << endl;
    }
};

int main() {
    Derived d1;     // Calls Derived default constructor
    Derived d2(10); // Calls inherited constructor from Base1 (or Base2)
    return 0;
}
