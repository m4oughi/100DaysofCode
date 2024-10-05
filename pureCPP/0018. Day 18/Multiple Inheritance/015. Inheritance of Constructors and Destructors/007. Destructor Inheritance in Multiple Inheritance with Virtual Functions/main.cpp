#include <iostream>
using namespace std;

class Base1 {
public:
    virtual ~Base1() {
        cout << "Base1 virtual destructor called" << endl;
    }
};

class Base2 {
public:
    virtual ~Base2() {
        cout << "Base2 virtual destructor called" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    ~Derived() override {
        cout << "Derived destructor called" << endl;
    }
};

int main() {
    Base1* ptr = new Derived();
    delete ptr;  // Calls destructors with virtual dispatch
    return 0;
}
