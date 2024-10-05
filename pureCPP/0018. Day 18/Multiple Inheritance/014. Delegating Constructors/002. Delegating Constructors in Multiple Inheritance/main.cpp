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
    Derived() : Derived(1, 2) {  // Delegating to another constructor
        cout << "Delegating constructor called" << endl;
    }

    Derived(int a, int b) : Base1(a), Base2(b) {
        cout << "Parameterized Derived constructor called" << endl;
    }
};

int main() {
    Derived d;  // Calls the default delegating constructor
    return 0;
}
