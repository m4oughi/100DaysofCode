#include <iostream>
using namespace std;

class Base {
public:
    Base(int x) {
        cout << "Base constructor called with x = " << x << endl;
    }
    ~Base() {
        cout << "Base destructor called" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    Derived1(int x) : Base(x) {
        cout << "Derived1 constructor called" << endl;
    }
    ~Derived1() {
        cout << "Derived1 destructor called" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    Derived2(int x) : Base(x) {
        cout << "Derived2 constructor called" << endl;
    }
    ~Derived2() {
        cout << "Derived2 destructor called" << endl;
    }
};

class Final : public Derived1, public Derived2 {
public:
    Final(int x) : Base(x), Derived1(x), Derived2(x) {
        cout << "Final constructor called" << endl;
    }
    ~Final() {
        cout << "Final destructor called" << endl;
    }
};

int main() {
    Final f(10);  // Passes the parameter to the Base class
    return 0;
}
