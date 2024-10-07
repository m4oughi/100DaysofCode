#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Base1 show function" << endl;
    }
    virtual ~Base1() {}
};

class Base2 {
public:
    virtual void display() {
        cout << "Base2 display function" << endl;
    }
    virtual ~Base2() {}
};

class Derived : public Base1, public Base2 {
public:
    void show() override {
        cout << "Derived show function" << endl;
    }
    void display() override {
        cout << "Derived display function" << endl;
    }
    void specificFunction() {
        cout << "Specific function in Derived class" << endl;
    }
};

int main() {
    Base1* basePtr = new Derived();  // Upcasting (to Base1)
    basePtr->show();  // Calls Derived's show function

    // Downcasting to Derived using dynamic_cast
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        derivedPtr->specificFunction();  // Calls Derived's specific function
    } else {
        cout << "Downcasting failed!" << endl;
    }

    delete basePtr;
    return 0;
}
