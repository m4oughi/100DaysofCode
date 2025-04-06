#include <iostream>

constexpr int square(int n) {
    return n * n;
}

int main() {
    constexpr int result = square(5); // Evaluated at compile-time
    std::cout << "Square of 5: " << result << '\n';
    return 0;
}
