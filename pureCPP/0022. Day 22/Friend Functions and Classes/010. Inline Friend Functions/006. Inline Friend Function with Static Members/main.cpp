#include <iostream>
using namespace std;

class A {
private:
    static int value;

public:
    A() {}

    // Inline friend function declaration
    friend void showValue();
};

// Static member initialization
int A::value = 100;

// Inline friend function definition
inline void showValue() {
    cout << "A's static value: " << A::value << endl;
}

int main() {
    showValue();  // Inline friend function accessing static member
    return 0;
}
