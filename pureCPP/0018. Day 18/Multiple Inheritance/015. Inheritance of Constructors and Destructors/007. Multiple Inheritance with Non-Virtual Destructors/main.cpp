#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Base1 constructor called" << endl;
    }
    ~Base1() {
        cout << "Base1 destructor called" << endl;
    }
};

class Base2 {
public:
    Base2() {
        cout << "Base2 constructor called" << endl;
    }
    ~Base2() {
        cout << "Base2 destructor called" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived() {
        cout << "Derived constructor called" << endl;
    }
    ~Derived() {
        cout << "Derived destructor called" << endl;
    }
};

int main() {
    Base1* ptr = new Derived();
    delete ptr;  // Undefined behavior due to non-virtual destructor
    return 0;
}
