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
    Derived(int a, int b) : Base1(a), Base2(b) {
        cout << "Derived constructor called" << endl;
    }
    ~Derived() {
        cout << "Derived destructor called" << endl;
    }
};

int main() {
    Derived d(5, 10);  // Calls explicit constructors for Base1 and Base2
    return 0;
}
