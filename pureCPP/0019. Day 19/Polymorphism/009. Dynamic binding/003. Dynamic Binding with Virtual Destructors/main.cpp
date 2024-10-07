#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {  // Virtual destructor
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();  // Dynamic binding with base class pointer
    delete basePtr;  // Calls Derived and Base destructors due to virtual destructor

    return 0;
}
