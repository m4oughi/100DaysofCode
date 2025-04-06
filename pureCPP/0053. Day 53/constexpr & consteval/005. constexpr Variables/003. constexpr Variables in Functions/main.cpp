#include <iostream>

constexpr int multiply(int x, int y) {
    constexpr int factor = 2;
    return x * y * factor;
}

int main() {
    constexpr int result = multiply(3, 4);
    std::cout << "Result: " << result << '\n';
    return 0;
}
