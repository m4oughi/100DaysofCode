#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() = 0; // Pure virtual destructor
};

Base::~Base() {
    cout << "Base class pure virtual destructor called" << endl;
}

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    delete basePtr; // Calls Derived destructor, then Base destructor

    return 0;
}
