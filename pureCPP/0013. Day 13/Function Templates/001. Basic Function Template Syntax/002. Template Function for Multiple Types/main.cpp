#include <iostream>
using namespace std;

template <typename T1, typename T2>
T1 multiply(T1 a, T2 b) {
    return a * b;
}

int main() {
    cout << "Multiplication of int and float: " << multiply(5, 2.5) << endl;
    return 0;
}
