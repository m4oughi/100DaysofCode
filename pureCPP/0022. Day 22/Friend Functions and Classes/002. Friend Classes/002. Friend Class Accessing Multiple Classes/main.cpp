#include <iostream>
using namespace std;

class ClassA;
class ClassB;

class ClassA {
private:
    int valueA;

public:
    ClassA(int v) : valueA(v) {}

    // Declare ClassC as a friend class
    friend class ClassC;
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int v) : valueB(v) {}

    // Declare ClassC as a friend class
    friend class ClassC;
};

class ClassC {
public:
    int calculateTotal(ClassA a, ClassB b) {
        return a.valueA + b.valueB;  // Accessing private members of both classes
    }
};

int main() {
    ClassA objA(10);
    ClassB objB(20);
    ClassC objC;
    cout << "Total: " << objC.calculateTotal(objA, objB) << endl;  // Friend class accessing multiple classes
    return 0;
}
