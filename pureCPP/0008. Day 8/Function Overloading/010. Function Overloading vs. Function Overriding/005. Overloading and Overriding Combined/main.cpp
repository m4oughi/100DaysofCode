#include <iostream>
using namespace std;

class Base {
public:
    void func(int x) {
        cout << "Base func with int: " << x << endl;
    }

    virtual void func(double x) {
        cout << "Base func with double: " << x << endl;
    }
};

class Derived : public Base {
public:
    void func(int x) {
        cout << "Derived func with int: " << x << endl;
    }

    void func(double x) override {
        cout << "Derived func with double: " << x << endl;
    }
};

int main() {
    Base* basePtr = new Derived();

    basePtr->func(5);       // Calls Base's func(int) (overloading)
    basePtr->func(5.5);     // Calls Derived's func(double) (overriding)
    return 0;
}
#include <iostream>
using namespace std;

class Base {
public:
    void func(int x) {
        cout << "Base func with int: " << x << endl;
    }

    virtual void func(double x) {
        cout << "Base func with double: " << x << endl;
    }
};

class Derived : public Base {
public:
    void func(int x) {
        cout << "Derived func with int: " << x << endl;
    }

    void func(double x) override {
        cout << "Derived func with double: " << x << endl;
    }
};

int main() {
    Base* basePtr = new Derived();

    basePtr->func(5);       // Calls Base's func(int) (overloading)
    basePtr->func(5.5);     // Calls Derived's func(double) (overriding)
    return 0;
}
