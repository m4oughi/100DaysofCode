#include <iostream>
using namespace std;

class A {
public:
    int x;
};

class B {
public:
    float y;
};

int main() {
    A objA = {10};
    A* ptrA = &objA;

    // Reinterpret A* as B*
    B* ptrB = reinterpret_cast<B*>(ptrA);

    // Accessing the members through ptrB is unsafe
    cout << "Reinterpreted pointer's data (unsafe): " << ptrB->y << endl;  // Undefined behavior
    return 0;
}
