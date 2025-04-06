#include <iostream>
#include <array>

constexpr std::array<int, 6> factorials = {
    1, 1, 2, 6, 24, 120
};

constexpr int getFactorial(int n) {
    return factorials[n];
}

int main() {
    constexpr int fact5 = getFactorial(5);
    std::cout << "Factorial of 5: " << fact5 << '\n';
}
