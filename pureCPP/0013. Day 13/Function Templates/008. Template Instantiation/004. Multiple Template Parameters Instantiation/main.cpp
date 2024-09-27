#include <iostream>
using namespace std;

template <typename T1, typename T2>
T1 add(T1 a, T2 b) {
    return a + b;
}

int main() {
    cout << "Sum of int and double: " << add(5, 3.14) << endl; // Implicit mixed-type instantiation
    cout << "Sum of double and float: " << add(2.5, 1.5f) << endl; // Implicit mixed-type instantiation
    return 0;
}
