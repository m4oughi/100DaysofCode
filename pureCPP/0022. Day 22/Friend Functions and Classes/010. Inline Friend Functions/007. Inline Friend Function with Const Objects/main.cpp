#include <iostream>
using namespace std;

class A {
private:
    int value;

public:
    A(int v) : value(v) {}

    // Inline friend function declaration
    friend void showValue(const A& obj);
};

// Inline friend function definition
inline void showValue(const A& obj) {
    cout << "A's value: " << obj.value << endl;
}

int main() {
    const A objA(100);
    showValue(objA);  // Inline friend function can be called with const objects
    return 0;
}
