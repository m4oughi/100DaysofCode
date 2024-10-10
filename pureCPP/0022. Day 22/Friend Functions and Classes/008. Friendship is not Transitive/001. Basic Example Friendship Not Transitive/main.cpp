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
        cout << "A's value: " << obj.value << endl;  // B can access private members of A
    }
};

class C {
public:
    void showA(A& obj) {
        // cout << "A's value: " << obj.value << endl;  // Error: C is not a friend of A
    }
};

int main() {
    A objA(100);
    B objB;
    C objC;

    objB.showA(objA);  // Works: B is a friend of A
    // objC.showA(objA);  // Error: C is not a friend of A

    return 0;
}
