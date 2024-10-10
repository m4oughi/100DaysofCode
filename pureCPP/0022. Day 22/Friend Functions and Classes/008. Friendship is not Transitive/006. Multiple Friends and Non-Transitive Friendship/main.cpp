#include <iostream>
using namespace std;

class A {
private:
    int value;

public:
    A(int v) : value(v) {}

    // Multiple friend classes
    friend class B;
    friend class C;
};

class B {
public:
    void showA(A& obj) {
        cout << "A's value (from B): " << obj.value << endl;
    }
};

class C {
public:
    void showA(A& obj) {
        cout << "A's value (from C): " << obj.value << endl;
    }

    void tryToAccessB(B& objB) {
        // objB.showA(A);  // Error: C cannot access B's members
    }
};

int main() {
    A objA(100);
    B objB;
    C objC;

    objB.showA(objA);  // Works: B is a friend of A
    objC.showA(objA);  // Works: C is a friend of A
    // objC.tryToAccessB(objB);  // Error: C is not a friend of B

    return 0;
}
