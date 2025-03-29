#include <iostream>

constexpr auto factorial = [](auto self, int n) -> int {
    return (n <= 1) ? 1 : n * self(self, n - 1);
};

int main() {
    constexpr int res = factorial(factorial, 5);
    std::cout << "Factorial of 5: " << res << "\n";
}
