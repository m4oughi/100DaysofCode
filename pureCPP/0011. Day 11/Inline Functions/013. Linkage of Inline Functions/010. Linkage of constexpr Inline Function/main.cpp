#include <iostream>

constexpr inline int add(int a, int b) {
    return a + b;
}

int main() {
    constexpr int sum = add(3, 4); // Compile-time evaluation of inline function
    std::cout << "Sum: " << sum << std::endl; // Output: Sum: 7
    return 0;
}
