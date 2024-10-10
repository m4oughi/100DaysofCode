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
        cout << "A's value: " << obj.value << endl;  // B can access A's private members
    }

    void tryToAccessA(A& obj) {
        // cout << "Trying to access B's private member" << endl; // Error: A cannot access B's private members
    }
};

int main() {
    A objA(100);
    B objB;

    objB.showA(objA);  // Works: B is a friend of A
    // objA.tryToAccessB(objB);  // Error: A is not a friend of B

    return 0;
}
