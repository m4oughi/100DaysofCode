#include <iostream>
using namespace std;

class B;

class A {
private:
    int value;

public:
    A(int v) : value(v) {}

    // Friend class B can access private members of A
    friend class B;
};

class B {
private:
    int otherValue;

public:
    B(int v) : otherValue(v) {}

    void showA(A& obj) {
        cout << "A's value: " << obj.value << endl;  // B can access A's private members
    }

    void showB() {
        cout << "B's value: " << otherValue << endl;
    }
};

int main() {
    A objA(100);
    B objB(200);

    objB.showA(objA);  // Works: B can access A's private members
    objB.showB();  // Works: B can show its own value

    // objA.showB(objB);  // Error: A cannot access B's private members

    return 0;
}
