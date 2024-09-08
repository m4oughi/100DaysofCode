#include <iostream>

template <typename T>
const T& getMax(const T &a, const T &b) {
    return (a > b) ? a : b; // Returning a constant reference to the maximum value
}

int main() {
    int a = 160, b = 170;
    const int& maxVal = getMax(a, b);
    // maxVal = 180; // NOT allowed: modifying the value through maxVal is not allowed

    return 0;
}