#include <iostream>

// Inline function that causes a loss of debug information
inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(5, 4); // Breakpoint here may not step into the function
    std::cout << "Result: " << result << std::endl; // Output: Result: 20
    return 0;
}
