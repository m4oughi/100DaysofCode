#include <iostream>
using namespace std;

class A {
private:
    int value;

public:
    A(int v) : value(v) {}

    // Friend function declaration
    friend void showValue(A& obj);
};

// Inline friend function definition outside the class
inline void showValue(A& obj) {
    cout << "A's value: " << obj.value << endl;
}

int main() {
    A objA(100);
    showValue(objA);  // Inline friend function is called
    return 0;
}
