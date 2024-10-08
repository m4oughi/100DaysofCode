#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {  // Virtual destructor
        cout << "Base destructor called" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived destructor called" << endl;
    }
};

int main() {
    Base* ptr = new Derived();  // Vptr points to Derived's Vtable
    delete ptr;  // Vptr ensures Derived's destructor is called

    return 0;
}
