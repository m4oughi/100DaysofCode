#include <iostream>
using namespace std;

template <typename T>
void show(T a, T b = 10) {
    cout << "a: " << a << ", b: " << b << endl;
}

int main() {
    show(5);              // Uses default value for b
    show(5, 20);          // Custom value for b
    show(5.5);            // Works with double, uses default for b
    show(5.5, 7.5);       // Custom value for double
    return 0;
}
