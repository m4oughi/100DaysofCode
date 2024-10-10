#include <iostream>
using namespace std;

class A;

class B {
private:
    int bValue;

public:
    B(int v) : bValue(v) {}

    void showB() {
        cout << "B's value: " << bValue << endl;
    }

    // Friend class A can access private members of B
    friend class A;
};

class A {
private:
    int aValue;

public:
    A(int v) : aValue(v) {}

    void showA() {
        cout << "A's value: " << aValue << endl;
    }

    void showB(B& obj) {
        cout << "B's value from A: " << obj.bValue << endl;  // A can access B's private members
    }

    // B does not have access to A's private members unless explicitly granted
};

int main() {
    A objA(100);
    B objB(200);

    objA.showA();   // Works: A shows its own private member
    objA.showB(objB);  // Works: A can access B's private members

    // objB.showA(objA);  // Error: B cannot access A's private members

    return 0;
}
