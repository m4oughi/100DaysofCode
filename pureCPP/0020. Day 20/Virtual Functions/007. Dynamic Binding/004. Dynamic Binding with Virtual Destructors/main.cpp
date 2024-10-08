#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {  // Virtual destructor ensures proper cleanup
        cout << "Base destructor" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived destructor" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    delete basePtr;  // Calls Derived's destructor due to dynamic binding

    return 0;
}
