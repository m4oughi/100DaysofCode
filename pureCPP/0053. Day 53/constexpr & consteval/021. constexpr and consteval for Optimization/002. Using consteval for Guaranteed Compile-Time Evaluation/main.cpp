#include <iostream>

// Guaranteed compile-time computation
consteval int cube(int x) {
    return x * x * x;
}

int main() {
    constexpr int result = cube(3);  // Must be evaluated at compile-time
    std::cout << "Cube of 3: " << result << '\n';
}
