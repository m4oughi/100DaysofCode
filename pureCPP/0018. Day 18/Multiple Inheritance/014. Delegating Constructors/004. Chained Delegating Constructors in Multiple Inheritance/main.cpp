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
    Derived() : Derived(1) {  // Delegating constructor 1
        cout << "Delegating constructor called in Derived" << endl;
    }

    Derived(int a) : Derived(a, 2) {  // Delegating constructor 2
        cout << "Delegating constructor 2 called in Derived" << endl;
    }

    Derived(int a, int b) : Base1(a), Base2(b), z(3) {  // Final constructor
        cout << "Final parameterized constructor called in Derived" << endl;
    }
};

int main() {
    Derived d;  // Calls the default constructor, triggers chain of delegations
    return 0;
}
