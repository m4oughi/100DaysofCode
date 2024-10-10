#include <iostream>
using namespace std;

class A {
private:
    int value;

public:
    A(int v) : value(v) {}

    // Friend function declaration
    friend void showAValue(A&);
};

class B {
private:
    int otherValue;

public:
    B(int v) : otherValue(v) {}

    // Friend function declaration
    friend void showBValue(B&);
};

// Friend function for class A
void showAValue(A& obj) {
    cout << "A's value: " << obj.value << endl;
}

// Friend function for class B
void showBValue(B& obj) {
    cout << "B's value: " << obj.otherValue << endl;
}

class C {
public:
    void tryToAccessA(A& obj) {
        // showAValue(obj);  // Error: C cannot access A's friend function
    }

    void tryToAccessB(B& obj) {
        // showBValue(obj);  // Error: C cannot access B's friend function
    }
};

int main() {
    A objA(100);
    B objB(200);
    C objC;

    showAValue(objA);  // Works: showAValue is a friend of A
    showBValue(objB);  // Works: showBValue is a friend of B

    // objC.tryToAccessA(objA);  // Error: C cannot access A's private members
    // objC.tryToAccessB(objB);  // Error: C cannot access B's private members

    return 0;
}
