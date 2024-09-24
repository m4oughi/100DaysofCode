#include <iostream>

// Inline function with complex logic
inline int compute(int a, int b) {
    return (a + b) * (a - b) + (a * b);
}

int main() {
    int result = compute(10, 5);
    std::cout << "Result: " << result << std::endl; // Output: Result: 50
    return 0;
}
