#include <iostream>
using namespace std;

class ClassA;  // Forward declaration of ClassA

class ClassB {
private:
    int valueB;  // Private member

public:
    ClassB(int v) : valueB(v) {}

    // Friend function declaration in both ClassB and ClassA
    friend int addValues(ClassA, ClassB);
};

class ClassA {
private:
    int valueA;  // Private member

public:
    ClassA(int v) : valueA(v) {}

    // Friend function declaration in both ClassA and ClassB
    friend int addValues(ClassA, ClassB);
};

// Friend function accessing private members of both classes
int addValues(ClassA a, ClassB b) {
    return a.valueA + b.valueB;
}

int main() {
    ClassA a(10);
    ClassB b(20);
    cout << "Sum: " << addValues(a, b) << endl;  // Accessing private members of both classes
    return 0;
}
