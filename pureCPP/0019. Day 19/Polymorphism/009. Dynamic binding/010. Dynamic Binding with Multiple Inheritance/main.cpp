#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "A's show" << endl;
    }
};

class B {
public:
    virtual void show() {
        cout << "B's show" << endl;
    }
};

class C : public A, public B {
public:
    void show() override {
        cout << "C's show" << endl;
    }
};

int main() {
    C c;
    A* aPtr = &c;
    B* bPtr = &c;

    aPtr->show();  // Calls C's show due to dynamic binding
    bPtr->show();  // Calls C's show due to dynamic binding

    return 0;
}
