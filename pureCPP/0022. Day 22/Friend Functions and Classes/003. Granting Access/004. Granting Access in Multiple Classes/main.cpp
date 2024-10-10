#include <iostream>
using namespace std;

class ClassA;
class ClassB;

class ClassA {
private:
    int valueA;

public:
    ClassA(int v) : valueA(v) {}

    // Granting access to the function
    friend int calculateSum(ClassA, ClassB);
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int v) : valueB(v) {}

    // Granting access to the function
    friend int calculateSum(ClassA, ClassB);
};

int calculateSum(ClassA objA, ClassB objB) {
    return objA.valueA + objB.valueB;  // Accessing private members of both classes
}

int main() {
    ClassA a(10);
    ClassB b(20);
    cout << "Sum: " << calculateSum(a, b) << endl;
    return 0;
}
