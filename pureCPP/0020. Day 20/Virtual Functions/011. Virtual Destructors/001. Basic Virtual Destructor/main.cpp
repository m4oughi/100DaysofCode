#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
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
    Base* obj = new Derived();
    delete obj;  // Calls Derived's destructor followed by Base's destructor
    return 0;
}
