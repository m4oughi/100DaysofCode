#include <iostream>

consteval int cube(int x) {
    return x * x * x;
}

int main() {
    constexpr int result = cube(3);  // Must be evaluated at compile-time
    std::cout << "Cube: " << result << '\n';
}
