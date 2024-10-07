#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "A's show" << endl;
    }
};

class B : virtual public A {
public:
    void show() override {
        cout << "B's show" << endl;
    }
};

class C : virtual public A {
public:
    void show() override {
        cout << "C's show" << endl;
    }
};

class D : public B, public C {
public:
    void show() override {
        cout << "D's show" << endl;
    }
};

int main() {
    D* dPtr = new D();
    A* aPtr = dPtr;

    aPtr->show();  // Calls D's show due to virtual inheritance and vtable

    delete dPtr;
    return 0;
}
