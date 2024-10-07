#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() = 0;  // Pure virtual destructor
};

Base::~Base() {
    cout << "Base destructor called" << endl;
}

class Derived : public Base {
public:
    ~Derived() override {
        cout << "Derived destructor called" << endl;
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr;  // Calls both Base and Derived destructors

    return 0;
}
