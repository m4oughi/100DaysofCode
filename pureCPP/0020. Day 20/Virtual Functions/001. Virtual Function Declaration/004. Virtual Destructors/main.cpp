#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor called" << endl;
    }

    virtual ~Base() {
        cout << "Base class destructor called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }

    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Base* basePtr = new Derived(); // Base pointer to Derived object
    delete basePtr; // Correctly calls Derived and then Base destructor

    return 0;
}
