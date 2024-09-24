#include <iostream>

// Inline function to increment a number
inline int increment(int x) {
    return x + 1;
}

int main() {
    int sum = 0;
    // Inline function used in a performance-critical tight loop
    for (int i = 0; i < 1000000; ++i) {
        sum += increment(i);
    }
    std::cout << "Sum: " << sum << std::endl; // Output: Sum: 500000500000
    return 0;
}
