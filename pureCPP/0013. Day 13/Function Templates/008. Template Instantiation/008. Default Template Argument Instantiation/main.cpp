#include <iostream>
using namespace std;

template <typename T = int>
T subtract(T a, T b) {
    return a - b;
}

int main() {
    cout << "Result 1: " << subtract(10, 5) << endl;        // Uses default type (int)
    cout << "Result 2: " << subtract<double>(10.5, 4.5) << endl;  // Explicit instantiation with double
    return 0;
}
