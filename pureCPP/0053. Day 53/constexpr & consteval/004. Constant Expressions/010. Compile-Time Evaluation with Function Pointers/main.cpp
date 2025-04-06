#include <iostream>

constexpr int multiply(int a, int b) {
    return a * b;
}

int main() {
    constexpr auto funcPtr = multiply;
    constexpr int result = funcPtr(4, 5);
    std::cout << "4 * 5 = " << result << '\n';
    return 0;
}
