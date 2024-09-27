#include <iostream>
using namespace std;

template <typename T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    cout << "Result 1: " << multiply(10, 20) << endl;     // Implicit instantiation (int)
    cout << "Result 2: " << multiply(3.5, 2.0) << endl;   // Implicit instantiation (double)
    return 0;
}
