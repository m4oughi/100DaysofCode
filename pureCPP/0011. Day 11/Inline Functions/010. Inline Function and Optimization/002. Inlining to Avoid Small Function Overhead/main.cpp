#include <iostream>

// Small function to increment a number
inline int increment(int x) {
    return x + 1;
}

int main() {
    int x = 10;
    x = increment(x); // Directly increments x without function call overhead
    std::cout << "Incremented value: " << x << std::endl; // Output: 11
    return 0;
}
