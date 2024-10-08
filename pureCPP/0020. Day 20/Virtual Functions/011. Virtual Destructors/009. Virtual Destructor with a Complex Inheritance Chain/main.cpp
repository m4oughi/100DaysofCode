#include <iostream>
using namespace std;

class A {
public:
    virtual ~A() {
        cout << "A's destructor" << endl;
    }
};

class B : public A {
public:
    ~B() {
        cout << "B's destructor" << endl;
    }
};

class C : public B {
public:
    ~C() {
        cout << "C's destructor" << endl;
    }
};

class D : public C {
public:
    ~D() {
        cout << "D's destructor" << endl;
    }
};

int main() {
    A* obj = new D();
    delete obj;  // Calls D's -> C's -> B's -> A's destructor
    return 0;
}
