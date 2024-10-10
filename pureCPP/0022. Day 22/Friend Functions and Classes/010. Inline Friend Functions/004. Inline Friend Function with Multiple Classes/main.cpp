#include <iostream>
using namespace std;

class A;
class B;

class A {
private:
    int valueA;

public:
    A(int v) : valueA(v) {}

    // Friend function declaration
    friend void showValues(A& objA, B& objB);
};

class B {
private:
    int valueB;

public:
    B(int v) : valueB(v) {}

    // Friend function declaration
    friend void showValues(A& objA, B& objB);
};

// Inline friend function definition
inline void showValues(A& objA, B& objB) {
    cout << "A's value: " << objA.valueA << endl;
    cout << "B's value: " << objB.valueB << endl;
}

int main() {
    A objA(100);
    B objB(200);
    showValues(objA, objB);  // Inline friend function accesses both classes
    return 0;
}
