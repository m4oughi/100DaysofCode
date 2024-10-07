#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "A's show" << endl;
    }
};

class B : public A {
public:
    void show() override {
        cout << "B's show" << endl;
    }
};

class C : public B {
public:
    void show() override {
        cout << "C's show" << endl;
    }
};

int main() {
    A* aPtr = new C();  // Pointer of type A points to object of type C
    aPtr->show();       // Calls C's show function via vtable

    delete aPtr;
    return 0;
}
