#include <iostream>

inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = 0;
    for (int i = 0; i < 1000000; ++i) {
        result += add(5, 10);  // No function call overhead due to inlining
    }
    std::cout << "Result: " << result << std::endl; // Output: 15000000
    return 0;
}
