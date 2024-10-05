#include <iostream>
using namespace std;

class Base1 {
public:
    Base1(int a) {
        cout << "Base1 constructor called with a = " << a << endl;
    }
    ~Base1() {
        cout << "Base1 destructor called" << endl;
    }
};

class Base2 {
public:
    Base2(int b) {
        cout << "Base2 constructor called with b = " << b << endl;
    }
    ~Base2() {
        cout << "Base2 destructor called" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    using Base1::Base1;  // Inherit Base1 constructor
    using Base2::Base2;  // Inherit Base2 constructor

    Derived() : Base1(0), Base2(0) {
        cout << "Derived constructor called" << endl;
    }
};

int main() {
    Derived d1;     // Calls Derived constructor
    Derived d2(5);  // Calls inherited Base1 constructor
    return 0;
}
