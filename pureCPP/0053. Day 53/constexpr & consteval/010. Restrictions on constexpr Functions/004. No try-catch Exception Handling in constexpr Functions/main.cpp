#include <iostream>

constexpr int safeDivision(int a, int b) {
    // if (b == 0) throw std::runtime_error("Division by zero!"); ❌ ERROR
    return a / b;
}

int main() {
    constexpr int result = safeDivision(10, 2);
    std::cout << "Result: " << result << '\n';
    return 0;
}
