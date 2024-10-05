#include <iostream>
using namespace std;

class Base {
public:
    int value;
    Base() : value(42) {
        cout << "Base constructor called" << endl;
    }
    ~Base() {
        cout << "Base destructor called" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    Derived1() {
        cout << "Derived1 constructor called" << endl;
    }
    ~Derived1() {
        cout << "Derived1 destructor called" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    Derived2() {
        cout << "Derived2 constructor called" << endl;
    }
    ~Derived2() {
        cout << "Derived2 destructor called" << endl;
    }
};

class Final : public Derived1, public Derived2 {
public:
    Final() {
        cout << "Final constructor called" << endl;
    }
    ~Final() {
        cout << "Final destructor called" << endl;
    }

    void printValue() {
        cout << "Base value: " << value << endl;
    }
};

int main() {
    Final f;
    f.printValue();  // Accessing value from the single instance of Base
    return 0;
}
