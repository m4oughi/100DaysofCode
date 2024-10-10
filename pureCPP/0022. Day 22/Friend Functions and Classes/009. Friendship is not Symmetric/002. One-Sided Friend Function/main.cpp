#include <iostream>
using namespace std;

class A {
private:
    int value;

public:
    A(int v) : value(v) {}

    // Friend function for B
    friend void showAValue(A&);
};

class B {
private:
    int otherValue;

public:
    B(int v) : otherValue(v) {}

    void showA(A& obj) {
        showAValue(obj);  // B can access A's private members
    }

    void tryToAccessB() {
        // cout << otherValue << endl;  // Error: A cannot access B's private members
    }
};

// Friend function for A
void showAValue(A& obj) {
    cout << "A's value: " << obj.value << endl;
}

int main() {
    A objA(100);
    B objB(200);

    objB.showA(objA);  // B can access A's private members through friend function
    // objA.tryToAccessB(objB);  // Error: A is not a friend of B

    return 0;
}
