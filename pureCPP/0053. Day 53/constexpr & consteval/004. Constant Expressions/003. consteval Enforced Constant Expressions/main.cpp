#include <iostream>

consteval int cube(int x) {
    return x * x * x;
}

int main() {
    constexpr int result = cube(4); // Compile-time evaluation
    std::cout << "Cube of 4: " << result << '\n';
    return 0;
}
