#include <iostream>

consteval int square(int x) {
    return x * x;
}

int main() {
    constexpr int result = square(5); // Must be evaluated at compile-time
    std::cout << "Square of 5: " << result << "\n";
}
