#include <iostream>
using namespace std;

class ClassA;  // Forward declaration

class ClassB {
private:
    int data;

public:
    ClassB(int value) : data(value) {}

    // Friend function declaration
    friend void showData(ClassA, ClassB);
};

class ClassA {
private:
    int data;

public:
    ClassA(int value) : data(value) {}

    // Friend function declaration
    friend void showData(ClassA, ClassB);
};

// Friend function definition
void showData(ClassA a, ClassB b) {
    cout << "ClassA Data: " << a.data << ", ClassB Data: " << b.data << endl;
}

int main() {
    ClassA objA(5);
    ClassB objB(10);
    showData(objA, objB);
    return 0;
}
