#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base class destructor" << endl;
    }

    Base(const Base&) {
        cout << "Base class copy constructor" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }

    Derived(const Derived& d) : Base(d) {
        cout << "Derived class copy constructor" << endl;
    }
};

int main() {
    Base* obj1 = new Derived();
    Base* obj2 = new Derived(*dynamic_cast<Derived*>(obj1));  // Calls copy constructor

    delete obj1;  // Calls Derived and Base destructors
    delete obj2;  // Calls Derived and Base destructors
    return 0;
}
