#include <iostream>
using namespace std;

class A {
private:
    mutable int value;  // Mutable member can be modified even in const objects

public:
    A(int v) : value(v) {}

    // Inline friend function declaration
    friend void modifyValue(const A& obj);
};

// Inline friend function definition
inline void modifyValue(const A& obj) {
    obj.value += 10;  // Modifying mutable member in const object
    cout << "Modified A's value: " << obj.value << endl;
}

int main() {
    const A objA(100);
    modifyValue(objA);  // Inline friend function modifies mutable member
    return 0;
}
