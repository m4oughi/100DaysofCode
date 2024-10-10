#include <iostream>
using namespace std;

class A {
private:
    int value;

public:
    A(int v) : value(v) {}

    // Friend class B
    friend class B;
};

class B {
public:
    void showA(A& obj) {
        cout << "A's value: " << obj.value << endl;
    }
};

class C {
private:
    int cValue;

public:
    C(int v) : cValue(v) {}

    // Friend class D
    friend class D;
};

class D {
public:
    void showC(C& obj) {
        cout << "C's value: " << obj.cValue << endl;
    }
};

class E {
public:
    void tryToAccessA(A& obj) {
        // cout << "A's value: " << obj.value << endl;  // Error: E is not a friend of A
    }

    void tryToAccessC(C& obj) {
        // cout << "C's value: " << obj.cValue << endl;  // Error: E is not a friend of C
    }
};

int main() {
    A objA(100);
    B objB;
    C objC(200);
    D objD;
    E objE;

    objB.showA(objA);  // Works: B is a friend of A
    objD.showC(objC);  // Works: D is a friend of C
    // objE.tryToAccessA(objA);  // Error: E is not a friend of A
    // objE.tryToAccessC(objC);  // Error: E is not a friend of C

    return 0;
}
