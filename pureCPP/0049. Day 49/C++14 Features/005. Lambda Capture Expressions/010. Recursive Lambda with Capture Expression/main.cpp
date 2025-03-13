#include <iostream>

int main() {
    auto factorial = [](auto self, int n) -> int {
        return (n <= 1) ? 1 : n * self(self, n - 1);
    };

    std::cout << "Factorial of 5: " << factorial(factorial, 5) << std::endl; // Output: 120

    return 0;
}
