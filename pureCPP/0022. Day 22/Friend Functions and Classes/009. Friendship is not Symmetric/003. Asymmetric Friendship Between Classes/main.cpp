#include <iostream>
using namespace std;

class A;

class B {
private:
    int bValue;

public:
    B(int v) : bValue(v) {}

    void showA(A& obj);

    void showB() {
        cout << "B's value: " << bValue << endl;
    }
};

class A {
private:
    int aValue;

public:
    A(int v) : aValue(v) {}

    // Only A declares B as a friend
    friend class B;
};

void B::showA(A& obj) {
    cout << "A's value: " << obj.aValue << endl;  // B can access A's private members
}

class C {
private:
    int cValue;

public:
    C(int v) : cValue(v) {}

    void showC() {
        cout << "C's value: " << cValue << endl;
    }

    void tryToAccessB(B& objB) {
        // cout << "B's value: " << objB.bValue << endl;  // Error: C cannot access B's private members
    }
};

int main() {
    A objA(100);
    B objB(200);
    C objC(300);

    objB.showA(objA);  // B can access A's private members
    objB.showB();  // C cannot access B's private members

    // objC.tryToAccessB(objB);  // Error: C cannot access B's private members

    return 0;
}
