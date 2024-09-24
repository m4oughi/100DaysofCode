#include <iostream>

// Inline function with noinline attribute to prevent inlining
inline __attribute__((noinline)) int sum(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Sum: " << sum(3, 7) << std::endl; // Output: Sum: 10
    return 0;
}
