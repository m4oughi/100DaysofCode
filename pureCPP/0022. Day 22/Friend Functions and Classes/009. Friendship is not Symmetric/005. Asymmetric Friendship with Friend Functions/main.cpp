#include <iostream>
using namespace std;

class A;
class B;

class A {
private:
    int value;

public:
    A(int v) : value(v) {}

    // Friend function declaration
    friend void showBoth(A&, B&);
};

class B {
private:
    int otherValue;

public:
    B(int v) : otherValue(v) {}

    void showB() {
        cout << "B's value: " << otherValue << endl;
    }

    // Friend function declaration
    friend void showBoth(A&, B&);
};

void showBoth(A& objA, B& objB) {
    cout << "A's value: " << objA.value << endl;  // Access A's private member
    cout << "B's value: " << objB.otherValue << endl;  // Access B's private member
}

int main() {
    A objA(100);
    B objB(200);

    showBoth(objA, objB);  // Works: showBoth has access to both A and B's private members

    return 0;
}
