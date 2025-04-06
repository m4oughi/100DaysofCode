#include <iostream>

consteval int cube(int n) {
    return n * n * n;
}

int main() {
    constexpr int result = cube(3); // Must be evaluated at compile-time
    std::cout << "Cube of 3: " << result << '\n';
    return 0;
}
