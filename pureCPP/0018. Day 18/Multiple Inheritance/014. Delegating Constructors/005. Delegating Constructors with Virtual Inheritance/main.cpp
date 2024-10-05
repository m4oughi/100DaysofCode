#include <iostream>
using namespace std;

class Base {
public:
    int x;
    Base(int a) : x(a) {
        cout << "Base constructor called with x = " << x << endl;
    }
};

class Derived1 : public virtual Base {
public:
    Derived1(int a) : Base(a) {
        cout << "Derived1 constructor called" << endl;
    }
};

class Derived2 : public virtual Base {
public:
    Derived2(int b) : Base(b) {
        cout << "Derived2 constructor called" << endl;
    }
};

class Final : public Derived1, public Derived2 {
public:
    Final() : Final(5) {  // Delegating constructor
        cout << "Default Final constructor delegating to parameterized constructor" << endl;
    }

    Final(int a) : Base(a), Derived1(a), Derived2(a) {
        cout << "Parameterized Final constructor called with x = " << x << endl;
    }
};

int main() {
    Final f;  // Calls the default delegating constructor
    return 0;
}
