#include <iostream>
using namespace std;

template <typename T>
class A {
private:
    T value;

public:
    A(T v) : value(v) {}

    // Non-template friend function
    friend void showValue(A<int>& obj);
};

// Non-template friend function definition
void showValue(A<int>& obj) {
    cout << "A<int>'s value: " << obj.value << endl;
}

int main() {
    A<int> objA(100);
    A<double> objB(200.5);

    showValue(objA);  // Only works for A<int>
    // showValue(objB);  // Error: No matching function for A<double>

    return 0;
}
