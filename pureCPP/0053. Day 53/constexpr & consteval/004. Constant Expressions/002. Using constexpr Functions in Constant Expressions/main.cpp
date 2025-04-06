#include <iostream>

constexpr int square(int x) {
    return x * x;
}

int main() {
    constexpr int result = square(5); // Evaluated at compile-time
    std::cout << "Square of 5: " << result << '\n';
    return 0;
}
