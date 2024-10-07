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

    ~Derived() override {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr;  // Ensures Derived's destructor is called

    return 0;
}
