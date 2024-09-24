#include <iostream>

const int& getMax(const int &a, const int &b) {
    return (a > b) ? a : b; // Returns a constant reference to the greater value
}

int main() {
    int x = 80, y = 90;
    const int &maxVal = getMax(x, y); // maxVal is a constant reference
    // maxVal = 100; // NOT allowed: modifying the value through maxVal is not allowed

    return 0;
}