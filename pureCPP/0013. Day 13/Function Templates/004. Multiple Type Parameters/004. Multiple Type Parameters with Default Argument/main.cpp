#include <iostream>
using namespace std;

template <typename T1, typename T2 = double>
T2 multiply(T1 a, T2 b = 2.0) {
    return a * b;
}

int main() {
    cout << "Multiplying int and default double: " << multiply(5) << endl;  // Uses default double
    cout << "Multiplying int and float: " << multiply(5, 3.5f) << endl;    // Uses float
    return 0;
}
