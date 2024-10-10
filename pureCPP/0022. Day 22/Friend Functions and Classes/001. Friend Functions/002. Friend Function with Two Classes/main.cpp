#include <iostream>
using namespace std;

class ClassA;
class ClassB;

class ClassA {
private:
    int valueA;

public:
    ClassA() : valueA(5) {}

    // Declare friend function
    friend void compare(ClassA, ClassB);
};

class ClassB {
private:
    int valueB;

public:
    ClassB() : valueB(10) {}

    // Declare friend function
    friend void compare(ClassA, ClassB);
};

void compare(ClassA objA, ClassB objB) {
    if (objA.valueA > objB.valueB)
        cout << "ClassA is greater.\n";
    else
        cout << "ClassB is greater.\n";
}

int main() {
    ClassA a;
    ClassB b;
    compare(a, b);  // Friend function accessing both classes' private members
    return 0;
}
