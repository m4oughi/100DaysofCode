#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {  // Virtual destructor
        cout << "Base destructor" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() override {
        cout << "Derived destructor" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    delete basePtr;  // Calls Derived's destructor, then Base's destructor

    return 0;
}
