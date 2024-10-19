#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A function." << endl;
    }
};

class B {
public:
    void show() {
        cout << "Class B function." << endl;
    }
};

class C : public A, public B {
public:
    void show() {
        cout << "Class C function." << endl;
    }
};

int main() {
    C obj;
    A* aPtr = static_cast<A*>(&obj);  // Cast to base class A
    B* bPtr = static_cast<B*>(&obj);  // Cast to base class B

    aPtr->show();
    bPtr->show();
    return 0;
}
