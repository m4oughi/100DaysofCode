#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Base1 constructor called" << endl;
    }
    virtual ~Base1() {
        cout << "Base1 virtual destructor called" << endl;
    }
};

class Base2 {
public:
    Base2() {
        cout << "Base2 constructor called" << endl;
    }
    virtual ~Base2() {
        cout << "Base2 virtual destructor called" << endl;
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
    Base1* b = new Derived();
    delete b;  // Virtual destructors ensure proper cleanup
    return 0;
}
