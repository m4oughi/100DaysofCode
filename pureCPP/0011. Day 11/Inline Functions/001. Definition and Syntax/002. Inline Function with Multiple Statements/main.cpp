#include <iostream>

// Inline function to find the maximum of two numbers
inline int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    std::cout << "Maximum: " << max(4, 7) << std::endl; // Output: Maximum: 7
    return 0;
}
