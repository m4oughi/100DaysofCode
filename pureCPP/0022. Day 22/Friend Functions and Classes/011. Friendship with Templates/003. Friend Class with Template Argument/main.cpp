#include <iostream>
using namespace std;

template <typename T>
class A;

class B {
public:
    void showA(A<int>& obj);  // Only for A<int> instances
};

template <typename T>
class A {
private:
    T value;

public:
    A(T v) : value(v) {}

    // Friend class declaration
    friend class B;
};

// B's method accessing A<int>'s private member
void B::showA(A<int>& obj) {
    cout << "A<int>'s value: " << obj.value << endl;
}

int main() {
    A<int> objA(100);
    B objB;

    objB.showA(objA);  // B can access A<int>'s private members

    // A<double> objC(200.5);
    // objB.showA(objC);  // Error: B can only access A<int>'s private members

    return 0;
}
