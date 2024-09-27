#include <iostream>
using namespace std;

template <typename T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    cout << multiply<int>(5, 3) << endl;     // Explicitly deduces T as int
    cout << multiply<double>(2.5, 3.5) << endl; // Explicitly deduces T as double
    return 0;
}
