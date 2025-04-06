#include <iostream>

constexpr int compute(int x) {
    constexpr auto multiply = [](int a, int b) { return a * b; };
    return multiply(x, x);
}

int main() {
    constexpr int result = compute(6);
    std::cout << "6 * 6 = " << result << '\n';
}
