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
private:
    int otherValue;

public:
    B(int v) : otherValue(v) {}

    void showA(A& obj) {
        cout << "A's value: " << obj.value << endl;  // B can access private members of A
    }

    // Friend class C
    friend class C;
};

class C {
public:
    void showB(B& obj) {
        cout << "B's value: " << obj.otherValue << endl;  // C can access private members of B
    }

    void tryToAccessA(A& obj) {
        // cout << "A's value: " << obj.value << endl;  // Error: C is not a friend of A
    }
};

int main() {
    A objA(100);
    B objB(200);
    C objC;

    objB.showA(objA);  // Works: B is a friend of A
    objC.showB(objB);  // Works: C is a friend of B
    // objC.tryToAccessA(objA);  // Error: C is not a friend of A

    return 0;
}
