#include <iostream>
using namespace std;

class Base1 {
public:
    int x;
    Base1(int a) : x(a) {
        cout << "Base1 constructor called with x = " << x << endl;
    }
};

class Base2 {
public:
    int y;
    Base2(int b) : y(b) {
        cout << "Base2 constructor called with y = " << y << endl;
    }
};

class Derived : public Base1, public Base2 {
    int z;
public:
    Derived() : Derived(1, 2, 3) {  // Delegating to another constructor
        cout << "Default Derived constructor delegating to parameterized constructor" << endl;
    }

    Derived(int a, int b, int c) : Base1(a), Base2(b), z(c) {
        cout << "Parameterized Derived constructor called with z = " << z << endl;
    }
};

int main() {
    Derived d;  // Calls default delegating constructor
    return 0;
}
