#include <iostream>
#include <array>

constexpr int factorial(int n) {
    return (n <= 1) ? 1 : (n * factorial(n - 1));
}

int main() {
    constexpr std::array<int, 5> factorials = {factorial(1), factorial(2), factorial(3), factorial(4), factorial(5)};
    
    for (int val : factorials) {
        std::cout << val << " ";
    }
    std::cout << '\n';

    return 0;
}
