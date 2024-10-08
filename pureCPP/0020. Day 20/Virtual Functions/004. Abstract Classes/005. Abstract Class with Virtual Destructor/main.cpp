#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() = 0;  // Pure virtual destructor
};

Base::~Base() {
    cout << "Base class destructor called" << endl;
}

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Base* obj = new Derived();
    delete obj;  // Properly calls destructors of both Derived and Base

    return 0;
}
