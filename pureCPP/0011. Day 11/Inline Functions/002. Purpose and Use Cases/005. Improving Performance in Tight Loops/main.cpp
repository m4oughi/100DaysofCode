#include <iostream>

// Inline function to calculate double the value
inline int doubleValue(int x) {
    return x * 2;
}

int main() {
    int sum = 0;
    // Inline function used in a tight loop to avoid function call overhead
    for (int i = 0; i < 1000000; ++i) {
        sum += doubleValue(i);
    }
    std::cout << "Sum: " << sum << std::endl; // Output: Sum: 999999000000
    return 0;
}
