#include <iostream>

constexpr int safeDivision(int a, int b) {
    // try {  // ❌ Compilation error: try-catch is not allowed in constexpr
    //     if (b == 0) throw std::runtime_error("Division by zero");
    // } catch (...) {}

    return b != 0 ? (a / b) : 0;  // ✅ Workaround: Use conditionals instead
}

int main() {
    constexpr int result = safeDivision(10, 2);
    std::cout << "Result: " << result << '\n';
}
