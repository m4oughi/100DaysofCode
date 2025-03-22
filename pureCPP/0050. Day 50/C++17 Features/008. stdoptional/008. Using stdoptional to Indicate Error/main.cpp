#include <iostream>
#include <optional>

std::optional<double> safeDivide(double a, double b) {
    if (b == 0) return std::nullopt;
    return a / b;
}

int main() {
    auto result = safeDivide(10, 2);
    std::cout << "Result: " << result.value_or(-1) << '\n';

    result = safeDivide(10, 0);
    std::cout << "Result: " << result.value_or(-1) << '\n';

    return 0;
}
