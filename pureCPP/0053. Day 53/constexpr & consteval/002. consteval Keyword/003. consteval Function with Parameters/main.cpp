#include <iostream>

consteval int square(int n) {
    return n * n;
}

int main() {
    constexpr int result = square(7); // Must be evaluated at compile-time
    std::cout << "Square of 7: " << result << '\n';
    return 0;
}
