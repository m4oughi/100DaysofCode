#include <iostream>
using namespace std;

class Abstract1 {
public:
    virtual void doSomething1() = 0;
    virtual void helperFunction() {
        cout << "Helper function from Abstract1" << endl;
    }
};

class Abstract2 {
public:
    virtual void doSomething2() = 0;
    virtual void helperFunction() {
        cout << "Helper function from Abstract2" << endl;
    }
};

class Derived : public Abstract1, public Abstract2 {
public:
    void doSomething1() override {
        cout << "Doing something from Abstract1" << endl;
    }

    void doSomething2() override {
        cout << "Doing something from Abstract2" << endl;
    }

    void helperFunction() override {
        // Override both base class helper functions
        cout << "Overriding both helper functions in Derived" << endl;
    }
};

int main() {
    Derived d;
    d.doSomething1();  // Implements Abstract1's pure virtual function
    d.doSomething2();  // Implements Abstract2's pure virtual function
    d.helperFunction();  // Overrides default implementations from both base classes
    return 0;
}
