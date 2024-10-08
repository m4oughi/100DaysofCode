#include <iostream>
using namespace std;

class Base {
public:
    virtual void print(int x) {
        cout << "Base class print(): " << x << endl;
    }
};

class Derived : public Base {
public:
    void print(int x) override {
        cout << "Derived class print(): " << x << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->print(100);  // Calls Derived's print(int) via dynamic binding

    delete basePtr;
    return 0;
}
