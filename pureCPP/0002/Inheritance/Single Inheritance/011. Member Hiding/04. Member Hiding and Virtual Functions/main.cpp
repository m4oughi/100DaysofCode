#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void print() { // Virtual function
        cout << "Base class print()" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void print(int x) { // This does not override the base class's virtual function, it hides it
        cout << "Derived class print(int x), x = " << x << endl;
    }

    void print() override { // Correct override of the base class's virtual function
        cout << "Derived class print()" << endl;
    }
};

int main() {
    Base* basePtr = new Derived(); // Pointer of Base type pointing to Derived object
    basePtr->print(); // Calls Derived class's print() due to virtual function mechanism

    Derived obj;
    obj.print();    // Calls Derived class's print()
    obj.print(5);   // Calls Derived class's print(int)

    delete basePtr;
    return 0;
}
