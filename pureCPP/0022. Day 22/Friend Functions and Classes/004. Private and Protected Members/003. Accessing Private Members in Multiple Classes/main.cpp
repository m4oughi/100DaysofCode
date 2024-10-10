#include <iostream>
using namespace std;

class ClassA {
private:
    int valueA;

public:
    ClassA(int v) : valueA(v) {}

    // Friend function declaration
    friend int calculateSum(ClassA, ClassB);
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int v) : valueB(v) {}

    // Friend function declaration
    friend int calculateSum(ClassA, ClassB);
};

// Friend function accessing private members of two classes
int calculateSum(ClassA a, ClassB b) {
    return a.valueA + b.valueB;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);
    cout << "Sum: " << calculateSum(objA, objB) << endl;  // Friend function accessing private members of both classes
    return 0;
}
