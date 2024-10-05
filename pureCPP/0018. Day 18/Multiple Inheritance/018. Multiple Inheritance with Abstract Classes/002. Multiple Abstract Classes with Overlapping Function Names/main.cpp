#include <iostream>
using namespace std;

class Abstract1 {
public:
    virtual void doSomething(int x) = 0;
};

class Abstract2 {
public:
    virtual void doSomething(double y) = 0;
};

class Derived : public Abstract1, public Abstract2 {
public:
    void doSomething(int x) override {
        cout << "Doing something with int: " << x << endl;
    }

    void doSomething(double y) override {
        cout << "Doing something with double: " << y << endl;
    }
};

int main() {
    Derived d;
    d.doSomething(10);    // Calls Abstract1's method
    d.doSomething(3.14);  // Calls Abstract2's method
    return 0;
}
