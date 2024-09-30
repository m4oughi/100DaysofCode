#include <iostream>
using namespace std;

class Base {
public:
    // Virtual destructor ensures derived class destructors are called correctly
    virtual ~Base() {
        cout << "Base class destructor called." << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived class destructor called." << endl;
    }
};

int main() {
    Base* obj = new Derived();  // Polymorphic base class pointer
    delete obj;  // Virtual destructor ensures derived class destructor is called
    return 0;
}
