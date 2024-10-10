#include <iostream>
using namespace std;

class ClassA {
private:
    int privateA;

protected:
    int protectedA;

public:
    ClassA(int pA, int prA) : privateA(pA), protectedA(prA) {}

    // Friend function declaration
    friend int calculateTotal(ClassA, ClassB);
};

class ClassB {
private:
    int privateB;

protected:
    int protectedB;

public:
    ClassB(int pB, int prB) : privateB(pB), protectedB(prB) {}

    // Friend function declaration
    friend int calculateTotal(ClassA, ClassB);
};

// Friend function accessing private and protected members of both classes
int calculateTotal(ClassA objA, ClassB objB) {
    return objA.privateA + objA.protectedA + objB.privateB + objB.protectedB;
}

int main() {
    ClassA objA(10, 20);
    ClassB objB(30, 40);
    cout << "Total: " << calculateTotal(objA, objB) << endl;  // Friend function accessing private and protected members
    return 0;
}
