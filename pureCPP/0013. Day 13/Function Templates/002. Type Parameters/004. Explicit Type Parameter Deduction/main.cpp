#include <iostream>
using namespace std;

template <typename T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    cout << "Product of integers: " << multiply<int>(5, 4) << endl; // Explicit int
    cout << "Product of floats: " << multiply<float>(5.5, 4.2) << endl; // Explicit float
    return 0;
}
