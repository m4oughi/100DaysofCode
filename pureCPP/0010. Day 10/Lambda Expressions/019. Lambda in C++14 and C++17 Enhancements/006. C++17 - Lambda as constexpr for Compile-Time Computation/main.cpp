#include <iostream>
#include <array>

int main() {
    constexpr auto factorial = [](int n) constexpr {
        int result = 1;
        for (int i = 1; i <= n; ++i) result *= i;
        return result;
    };

    constexpr int fact5 = factorial(5); // Compile-time computation
    std::array<int, factorial(3)> arr = {1, 2, 3, 4, 5, 6};

    std::cout << "Factorial of 5: " << fact5 << std::endl; // Outputs: 120
    std::cout << "Array size: " << arr.size() << std::endl; // Outputs: 6 (3!)
    return 0;
}
